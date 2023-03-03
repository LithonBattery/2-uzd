#include "func.h"
#include "mlib.h"

void pasirinkimai (bool &arrand, bool &arskait)
{
    cout << "Jei norite naudoti mokiniu ir pazymiu sarasa is failo iveskita 1, jei ne - iveskite 0" << endl;
    while (!(cin >> arskait))
    {
        cin.clear();
        cin.ignore();
        cout << "Iveskite 1 arba 0" << endl;
    }
    if (arskait == 0)
    {
        cout << "Jei norite naudoti atsitiktinius namu darbu ir egzamino pazymius iveskite 1, jei ivesite ranka - 0" << endl;
        while (!(cin >> arrand))
        {
            cin.clear();
            cin.ignore();
            cout << "Iveskite 1 arba 0" << endl;
        }
    }
}
int el_count(string line)
{
    ifstream in("kursiokai.txt");
    stringstream s(line);
    string el;
    int c=0;
    while (s>>el)
    {
        c++;
    }
    return c-3;
}
bool comp (const stud & v1, const stud & v2)
{
    return v1.vardas < v2.vardas;
}
int desimtbale ()
{
    int x;
    while (!(cin >> x) || x<0 || x>10)
    {
        cin.clear();
        cin.ignore();
        cout << "Iveskite skaiciu nuo 1 iki 10" << endl;
    }
    return x;
}
float mediana (stud &tmp)
{
    sort(tmp.paz.begin(), tmp.paz.end());
    float t;
    if (tmp.paz.size()%2 == 0)
    {
        t = (tmp.paz[tmp.paz.size()/2 - 1]+tmp.paz[tmp.paz.size()/2])/2.0;
        return t;
    }
    else
    {
        t = tmp.paz[tmp.paz.size()/2];
        return t;
    }
}
float galutinis (float mv, int egz)
{
    float t;
    t = 0.4*mv + 0.6*egz;
    return t;
}
void pild(stud &tmp)
{
    cout << "Iveskite varda ir pavarde:" << endl;
    cin >> tmp.vardas >> tmp.pavarde;
    float sum=0;
    cout << "Iveskite namu darbu pazymius sveikaisiais skaiciais (baige ivesti visus pazymius iveskite 0):" << endl;
    while (true)
    {
        int p;
        p = desimtbale();
        if (p==0 && tmp.paz.size()==0)
        {
            cout << "0 negali buti pazymys ir pirmas skacius, iveskite is naujo" << endl;
            continue;
        }
        else if(p==0)
        {
            break;
        }
        else
        {
            tmp.paz.push_back(p);
        }
    }
    cout << "Iveskite egzamino pazymi:" << endl;
    tmp.egz = desimtbale();
    tmp.vid = (accumulate(tmp.paz.begin(), tmp.paz.end(), 0))/(tmp.paz.size()*1.0);
    tmp.med = mediana (tmp);
}
int random ()
{
    int r=rand(); //mano kompiuterio ypatumas, turiu panaudoti rand bent viena papildoma karta kad veiktu visiems kartams
    return rand() %10 +1;
}
int randpild (stud &tmp, int n)
{
    cout << "Iveskite varda ir pavarde:" << endl;
    cin >> tmp.vardas >> tmp.pavarde;
    float sum=0;
    for (int i=0; i<n; i++)
    {
        int p;
        p = random();
        if(p==0)
        {
            break;
        }
        else
        {
            tmp.paz.push_back(p);
        }
    }
    tmp.egz = random();
    tmp.vid = (accumulate(tmp.paz.begin(), tmp.paz.end(), 0))/tmp.paz.size();
    tmp.med = mediana (tmp);
}
void spausd (stud &tmp, int i, bool ar)
{
    ofstream out ("rez.txt", std::ios::app);
    float gv, gm;
    gv = galutinis (tmp.vid, tmp.egz);
    gm = galutinis (tmp.med, tmp.egz);
    if (ar==1)
    {
        if (i==0)
        {
            out << setw(10) << "Vardas" << setw(15) << "Pavarde" << setw(20) << "Galutinis(vid)" << setw (20) << "Galutinis(med)" << endl;
            out << "________________________________________________________________________" << endl;
        }
        out << setw(10) << tmp.vardas << setw(15) << tmp.pavarde << setw(20) << fixed << setprecision(2) << gv << setw(20) << fixed << setprecision(2) << gm << endl;
    }
    else
    {
        if (i==0)
        {
            cout << setw(10) << "Vardas" << setw(15) << "Pavarde" << setw(20) << "Galutinis(vid)" << setw (20) << "Galutinis(med)" << endl;
            cout << "_______________________________________________________________________" << endl;
        }
        cout << setw(10) << tmp.vardas << setw(15) << tmp.pavarde << setw(20) << fixed << setprecision(2) << gv << setw(20) << fixed << setprecision(2) << gm << endl;
    }
}