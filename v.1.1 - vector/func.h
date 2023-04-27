#ifndef FUNC_H
#define FUNC_H

#include "mlib.h"
class stud {
private:
    string vardas, pavarde;
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
    };
    inline std::string getvardas() const { return vardas; }
    inline std::string getpavarde() const { return pavarde; }
    double getegz() const { return egz; }
    float getvid() const { return vid; }
    float getmed() const { return med; }
    float getg() const { return g; }
    int getpazsize() const { return paz.size(); }
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
//void spausd (const stud &tmp, int i, bool ar, bool arvid, string filename);
void spausd (const vector<stud> &v, bool ari, bool arvid, string filename);
void skaitymas (vector<stud> &v, int &m, bool arvid);
void generavimas();
bool comp_paz (const stud &a, const stud &b);
bool comp_5 (const stud &a);
void atskyrimas (vector<stud> &v, bool ari, bool arvid);
void darb (vector<stud> &v, bool arat, bool ari, bool arvid);

#endif