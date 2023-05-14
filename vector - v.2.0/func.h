#ifndef FUNC_H
#define FUNC_H

#include "mlib.h"
class zmogus {
    protected:
        string vardas, pavarde;
        zmogus() {
            vardas = "";
            pavarde = "";
        }
    public:
        virtual string getvardas() const = 0;
        virtual string getpavarde() const = 0;
        virtual void setvapa(std::istream& is) = 0;
        virtual void setvapa1(string va, string pa) = 0;
};

class stud : private zmogus{
    private:
        vector<int> paz;
        int egz;
        float vid, med, g;
    public:
        stud() {
            vardas = "";
            pavarde = "";
            egz = 0;
            vid = 0;
            med = 0;
            g = 0;
            paz.resize(0);
        }
        //copy constructor
        stud(const stud& tmp) {
            vardas = tmp.vardas;
            pavarde = tmp.pavarde;
            paz = tmp.paz;
            egz = tmp.egz;
            vid = tmp.vid;
            med = tmp.med;
            g = tmp.g;
            cout << "used copy constr" << endl;
        }
        //move contructor
        stud(stud&& tmp) noexcept {
            vardas = tmp.vardas;
            pavarde = tmp.pavarde;
            paz = move(tmp.paz);
            egz = tmp.egz;
            vid = tmp.vid;
            med = tmp.med;
            g = tmp.g;
            tmp.~stud();
            cout << "used move constr" << endl;
        }
        //copy assg
        stud& operator=(const stud& tmp) {
            if (this != &tmp)
            {
                vardas = tmp.vardas;
                pavarde = tmp.pavarde;
                paz = tmp.paz;
                egz = tmp.egz;
                vid = tmp.vid;
                med = tmp.med;
                g = tmp.g;
            }
            cout << "used copy assg" << endl;
            return *this;
        }
        //move assg
        stud& operator=(stud&& tmp) noexcept {
            if (this != &tmp)
            {
                vardas = tmp.vardas;
                pavarde = tmp.pavarde;
                paz = move(tmp.paz);
                egz = tmp.egz;
                vid = tmp.vid;
                med = tmp.med;
                g = tmp.g;
            }
            tmp.~stud();
            cout << "used move assg" << endl;
            return *this;
        }
        //getter
        inline string getvardas() const { return vardas; }
        inline string getpavarde() const { return pavarde; }
        double getegz() const { return egz; }
        float getvid() const { return vid; }
        float getmed() const { return med; }
        float getg() const { return g; }
        int getpazsize() const { return paz.size(); }
        //setter
        void setvapa(std::istream& is)
        {
            is >> vardas >> pavarde;
        }
        void setvapa1(string va, string pa) {
            vardas = va;
            pavarde = pa;
        }
        void setpaz(int pazi) { paz.push_back(pazi); }
        void setegz(int e) { egz = e; }
        void setvid() {
            vid = (accumulate(paz.begin(), paz.end(), 0)) / (paz.size() * 1.0);
        }
        void setmed() {
            sort(paz.begin(), paz.end());
            float t;
            if (paz.size() % 2 == 0)
            {
                t = (paz.at(paz.size() / 2 - 1) + paz.at(paz.size() / 2)) / 2.0;
                med = t;
            }
            else
            {
                t = paz.at(paz.size() / 2);
                med = t;
            }
        }
        void setg(float gal) {
            g = gal;
        }
        friend std::ostream& operator<<(std::ostream& out, const stud& v);
        friend std::istream& operator>>(std::istream& in, stud& v);
        //destructor
        void pazclear() { paz.clear(); }
        ~stud() { paz.clear(); }
};

void pasirinkimai (bool &arrand, bool &arskait, bool &arvid, bool &arg);
int el_count(string line);
bool comp (const stud & v1, const stud & v2);
int desimtbale ();
float galutinis (float mv, int egz);
void pild(stud &tmp, bool arvid);
int random ();
void randpild (stud &tmp, int n, bool arvid);
void rankinis (vector<stud> &v, bool arrand, int &m, int &n, bool arvid);
void spausd (const vector<stud> &v, bool ari, bool arvid, string filename);
void skaitymas (vector<stud> &v, int &m, bool arvid);
void generavimas();
bool comp_paz (const stud &a, const stud &b);
bool comp_5 (const stud &a);
void atskyrimas (vector<stud> &v, bool ari, bool arvid);
void darb (vector<stud> &v, bool arat, bool ari, bool arvid);

#endif