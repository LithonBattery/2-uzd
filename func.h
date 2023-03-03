#ifndef FUNC_H
#define FUNC_H

#include "mlib.h"
struct stud{
    string vardas, pavarde;
    vector<int> paz;
    int egz;
    float vid, med;
};

void pasirinkimai (bool &arrand, bool &arskait);
int el_count(string line);
bool comp (const stud & v1, const stud & v2);
int desimtbale ();
float mediana (stud &tmp);
float galutinis (float mv, int egz);
void pild(stud &tmp);
int random ();
int randpild (stud &tmp, int n);
void spausd (stud &tmp, int i, bool ar);

#endif