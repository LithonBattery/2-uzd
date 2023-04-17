#ifndef FUNC_H
#define FUNC_H

#include "mlib.h"
struct stud{
    string vardas, pavarde;
    list<int> paz;
    //vector<int> paz;
    int egz;
    float vid, med, g;
};

void pasirinkimai (bool &arrand, bool &arskait, bool &arvid, bool &arg);
int el_count(string line);
bool comp (const stud & v1, const stud & v2);
int desimtbale ();
float mediana (stud &tmp);
float galutinis (float mv, int egz);
void pild(stud &tmp, bool arvid);
int random ();
void randpild (stud &tmp, int n, bool arvid);
void rankinis (list<stud> &v, bool arrand, int &m, int &n, bool arvid);
void spausd (const list<stud> &v, bool ari, bool arvid, string filename);
void skaitymas (list<stud> &v, int &m, bool arvid);
void generavimas();
bool comp_paz (const stud &a, const stud &b);
bool comp_5 (const stud &a);
void atskyrimas (list<stud> &v, bool ari, bool arvid);
void darb (list<stud> &v, bool arat, bool ari, bool arvid);

#endif