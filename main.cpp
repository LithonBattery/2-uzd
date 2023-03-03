#include "mlib.h"
#include "func.h"


int main() {
    try
    {
        srand(time(NULL));
        int m=1, n;
        bool a=1, arvid, arrand, arskait, ari;
        vector<stud> v;
        pasirinkimai (arrand, arskait);
        if (arskait == 1)
        {
            ifstream in ("kursiokai.txt");
            if (!in.good())
            {
                throw "Nuskaitymo failas nerastas";
            }
            else
            {
                stringstream buff;
                stud tmp;
                buff << in.rdbuf();
                in.close();
                string line;
                getline(buff, line);
                int c = el_count(line);
                while (getline(buff, line))
                {
                    istringstream is(line);
                    is >> tmp.vardas >> tmp.pavarde;
                    for (int i=0; i<c; i++)
                    {
                        int p;
                        is >> p;
                        tmp.paz.push_back(p);
                    }
                    is >> tmp.egz;
                    tmp.vid = (accumulate(tmp.paz.begin(), tmp.paz.end(), 0))/(tmp.paz.size()*1.0);
                    tmp.med = mediana (tmp);
                    v.push_back(tmp);
                    m++;
                    tmp.paz.clear();
                }
                in.close();
                sort(v.begin(), v.end(), comp);
            }
        }
        else
        {
            v.resize(1);
            if (arrand==0)
            {
                pild (v[m-1]);
            }
            else
            {
                cout << "Kiek pazymiu norite generuoti?" << endl;
                while (!(cin >> n) || n==0)
                {
                    cin.clear();
                    cin.ignore();
                    cout << "Iveskite naturaluji skaiciu didesni uz 0" << endl;
                }
                randpild (v[m-1], n);
            }
            while(a)
            {
                if (arrand==0)
                {
                    cout << "Ar norite ivesti dar viena studenta?" << endl;
                }
                else
                {
                    cout << "Ar norite generuoti dar viena studenta?" << endl;
                }
                cout << "Jei taip - rasykite 1, jei ne rasykite - 0" << endl;
                while (!(cin >> a))
                {
                    cin.clear();
                    cin.ignore();
                    cout << "Iveskite 1 arba 0" << endl;
                }
                if (a==1)
                {
                    m++;
                    v.resize(m);
                    if (arrand==0)
                    {
                        pild (v[m-1]);
                        
                    }
                    else
                    {
                        randpild (v[m-1], n);
                    }
                }
                else
                { 
                    break;
                }
            }
        }
        ofstream out ("rez.txt");
        cout << "Jei norite spausdinti i faila iveskite 1, jei i konsole iveskite 0" << endl;
        while (!(cin >> ari))
        {
            cin.clear();
            cin.ignore();
            cout << "Iveskite 1 arba 0" << endl;
        }
        for (int i=0; i<m-1; i++)
        {
            spausd (v[i], i, ari);
        }
        out.close();
        v.clear();
    }
    catch (const char *err)
    {
        cout << err << endl;
        cout << "Nuskaitymo failas turi buti pavadintas 'kursiokai.txt'. Isitikinkite, kad jusu nuskaitomas failas taip pavadintas ir paleiskite programa is naujo" << endl;
    }
}
