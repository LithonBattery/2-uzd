#include "mlib.h"

struct stud{
    string vardas, pavarde;
    int *paz, egz, n;
    float vid, med;
};

void pasirinkimai (bool &arvid, bool &arrand)
{
    cout << "Jei galutinio balo skaiciavimui naudosite vidurki iveskite 1, jei mediana - 0" << endl;
    while (!(cin >> arvid))
    {
        cin.clear();
        cin.ignore();
        cout << "Iveskite 1 arba 0" << endl;
    }
    cout << "Jei norite naudoti atsitiktinius namu darbu ir egzamino pazymius iveskite 1, jei vesite ranka - 0" << endl;
    while (!(cin >> arrand))
    {
        cin.clear();
        cin.ignore();
        cout << "Iveskite 1 arba 0" << endl;
    }
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
    sort(tmp.paz, tmp.paz+tmp.n);
    float t;
    if (tmp.n%2 == 0)
    {
        t = (tmp.paz[tmp.n/2 - 1]+tmp.paz[tmp.n/2])/2.0;
        return t;
    }
    else
    {
        t = tmp.paz[tmp.n/2];
        return t;
    }

}
void galutinis (float mv, int egz)
{
    float t;
    t = 0.4*mv + 0.6*egz;
    cout << fixed << setprecision(2) << t << endl;
}
void pild(stud &tmp)
{
    cout << "Iveskite varda ir pavarde:" << endl;
    cin >> tmp.vardas >> tmp.pavarde;
    tmp.n=0;
    int *mas = new int[tmp.n];
    float sum=0;
    cout << "Iveskite namu darbu pazymius naturaliaisiais skaiciais (baige ivesti visus pazymius iveskite 0):" << endl;
    while (true)
    {
        int p;
        p = desimtbale();
        if (p==0 && tmp.n==0)
        {
            cout << "0 negali buti pazymys ir pirmas skacius, iveskite is naujo" << endl;
            cin.clear();
            cin.ignore();
            continue;
        }
        else if(p==0)
        {
            break;
        }
        else
        {
            int *temp = new int[tmp.n];
            copy (mas, mas+tmp.n, temp);
            delete [] mas;
            tmp.n++;
            mas = new int[tmp.n];
            copy (temp, temp+tmp.n-1, mas);
            delete [] temp;
            mas[tmp.n-1] = p;
            sum = sum + mas[tmp.n-1];
        }
    }
    tmp.paz = mas;
    cout << "Iveskite egzamino pazymi:" << endl;
    tmp.egz = desimtbale();
    tmp.vid = sum/tmp.n;
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
    int *mas = new int[n];
    float sum=0;
    tmp.n = n;
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
            mas[i] = p;
            sum = sum + mas[i];
        }
    }
    tmp.paz = mas;
    tmp.egz = random();
    cout << tmp.egz << endl;
    tmp.vid = sum/n;
    tmp.med = mediana (tmp);
}
void spausd (stud &tmp, bool arvid, int i)
{
    if (i==0)
    {
        cout << setw(10) << "Vardas" << setw(15) << "Pavarde" << setw(20);
        if (arvid == 1)
        {
            cout << "Galutinis(vid)" << endl;
        }
        else
        {
        cout << "Galutinis(med)" << endl;
        }
        cout << "___________________________________________________" << endl;
    }
    cout << setw(10) << tmp.vardas << setw(15) << tmp.pavarde << setw(15);
    if (arvid = 1)
    {
        galutinis (tmp.vid, tmp.egz);
    }
    else
    {
        galutinis (tmp.med, tmp.egz);
    }
}

int main() {
    srand(time(NULL));
    stud *mas;
    int m=1, n;
    bool arvid, arrand, a=1;
    pasirinkimai (arvid, arrand);
    mas = new stud[m];
    if (arrand==0)
    {
        pild (mas[m-1]);
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
        randpild (mas[m-1], n);
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
            stud *temp = new stud[m];
            copy (mas, mas+m, temp);
            delete [] mas;
            m++;
            mas = new stud[m];
            copy (temp, temp+m-1, mas);
            delete [] temp;
            if (arrand==0)
            {
                pild (mas[m-1]);
            }
            else
            {
                randpild (mas[m-1], n);
            }
        }
        else
        { 
            break;
        }
    }
    for (int i=0; i<m; i++)
    {
        spausd (mas[i], arvid, i);
    }
    delete [] mas;
}