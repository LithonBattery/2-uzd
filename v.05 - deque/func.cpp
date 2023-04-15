#include "func.h"

void pasirinkimai (bool &arrand, bool &arskait, bool &arvid, bool &arg)
{
    cout << "Jei galutinio balo skaiciavimui naudosite vidurki iveskite 1, jei mediana - 0" << endl;
    while (!(cin >> arvid))
    {
        cin.clear();
        cin.ignore();
        cout << "Iveskite 1 arba 0" << endl;
    }
    cout << "Jei norite naudoti mokiniu ir pazymiu sarasa is failo iveskite 1, jei ne - iveskite 0" << endl;
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
    else
    {
        cout << "Jei norite generuoti nauja faila iveskite 1, jei naudosite esanti faila iveskite 0" << endl;
        while (!(cin >> arg))
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
        t = (tmp.paz.at(tmp.paz.size()/2 - 1)+tmp.paz.at(tmp.paz.size()/2))/2.0;
        return t;
    }
    else
    {
        t = tmp.paz.at(tmp.paz.size()/2);
        return t;
    }
}
float galutinis (float mv, int egz)
{
    float t;
    t = 0.4*mv + 0.6*egz;
    return t;
}
void pild(stud &tmp, bool arvid)
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
    if(arvid == 1)
    {
        tmp.g = galutinis (tmp.vid, tmp.egz);
    }
    else
    {
        tmp.g = galutinis (tmp.med, tmp.egz);
    }
}
int random ()
{
    int r=rand(); //mano kompiuterio ypatumas, turiu panaudoti rand bent viena papildoma karta kad veiktu visiems kartams
    return rand() %10 +1;
}
void randpild (stud &tmp, int n, bool arvid)
{
    cout << "Iveskite varda ir pavarde:" << endl;
    cin >> tmp.vardas >> tmp.pavarde;
    for (int i=0; i<n; i++)
    {
        int p;
        p = random();
        tmp.paz.push_back(p);
    }
    tmp.egz = random();
    tmp.vid = (accumulate(tmp.paz.begin(), tmp.paz.end(), 0))/tmp.paz.size();
    tmp.med = mediana (tmp);
    if(arvid == 1)
    {
        tmp.g = galutinis (tmp.vid, tmp.egz);
    }
    else
    {
        tmp.g = galutinis (tmp.med, tmp.egz);
    }
}
void rankinis (deque<stud> &v, bool arrand, int &m, int &n, bool arvid)
{
    bool a=1, b;
    v.resize(1);
    if (arrand==0)
    {
        pild (v.at(m-1), arvid);
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
        randpild (v.at(m-1), n, arvid);
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
                pild (v.at(m-1), arvid);
                
            }
            else
            {
                randpild (v.at(m-1), n, arvid);
            }
        }
        else
        { 
            break;
        }
    }
    cout << "Jei norite surikiuoti suvestus studentus pagal vardus, iveskite 1, jei ne - 0." << endl;
    while (!(cin >> b))
    {
        cin.clear();
        cin.ignore();
        cout << "Iveskite 1 arba 0" << endl;
    } 
    if (b==1)
    {
        sort(v.begin(), v.end(), comp);
    }
}
void spausd (const deque<stud> &v, bool ari, bool arvid, string filename)
{
    ofstream out (filename);
    std::ostringstream buff;
    buff << setw(20) << left << "Vardas" << setw(20) << left << "Pavarde";
    if (arvid == 1)
    {
        buff << setw(20) << left << "Galutinis(vid)"<< endl;
    }
    else
    {
        buff << setw (20) << left << "Galutinis(med)" << endl;
    }
    buff << "_______________________________________________________" << endl;
    int tm = 2;
    for (int i=0; i<v.size(); i++)
    {
        buff << setw(20) << left << v.at(i).vardas << setw(20) << left << v.at(i).pavarde << setw(20) << left << fixed << setprecision(2) << v.at(i).g << endl;
        if (i==100000*tm)
        {
            if (ari==1)
            {
                out << buff.str();
                buff.str("");
                buff.clear();
                tm++;
            }
            else
            {
                cout << buff.str();
                buff.str("");
                buff.clear();
                tm++;
            }
        }
    }
    if (ari==1)
    {
        out << buff.str();
    }
    else
    {
        cout << buff.str();
    }
    buff.str("");
    buff.clear();
    out.close();
}
void skaitymas (deque<stud> &v, int &m, bool arvid)
{
    string filename;
    cout << "Iveskite nuskaitomo failo pavadinima" << endl;
    cin >> filename;
    ifstream in (filename);
    if (!in.good())
    {
        in.close();
        throw "Nuskaitymo failas nerastas.";
    }
    else
    {
        auto t1 = std::chrono::high_resolution_clock::now();
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
            if(arvid == 1)
            {
                tmp.g = galutinis (tmp.vid, tmp.egz);
            }
            else
            {
                tmp.g = galutinis (tmp.med, tmp.egz);
            }
            v.push_back(tmp);
            m++;
            tmp.paz.clear();
            is.clear();
        }
        in.close();
        auto t2 = std::chrono::high_resolution_clock::now();
        cout << "------------------------------------" << endl;
        cout << "Failas nuskaitytas per " << std::chrono::duration_cast<std::chrono::microseconds>(t2-t1).count()/1000000.0 << " sec" << endl;
        cout << "------------------------------------" << endl;
        //sort(v.begin(), v.end(), comp);
    }
}
void generavimas()
{
    int d, n;
    string pav = "kursiokai";
    cout << "Kokio studentu kiekio faila norite generuoti?" << endl;
    while (!(cin >> d) || d==0)
    {
        cin.clear();
        cin.ignore();
        cout << "Iveskite naturaluji skaiciu didesni uz 0" << endl;
    }
    cout << "Kiek pazymiu norite generuoti?" << endl;
    while (!(cin >> n) || n==0)
    {
        cin.clear();
        cin.ignore();
        cout << "Iveskite naturaluji skaiciu didesni uz 0" << endl;
    }
    auto t1 = std::chrono::high_resolution_clock::now();
    pav = pav + std::to_string(d)+".txt";
    ofstream out (pav);
    std::ostringstream buff;
    buff << setw(20) << left << "Vardas" << setw(20) << left << "Pavarde";
    for (int i=0; i<n; i++)
    {
        buff << setw(10) << "ND"+std::to_string(i+1);
    }
    buff << setw(10) << "Egz." << endl;
    int tm=2;
    for (int j=0; j<d; j++)
    {
        buff << setw(20) << left << "Vardas"+std::to_string(j) << setw(20) << left << "Pavarde"+std::to_string(j);
        int e;
        int p;
        for (int i=0; i<n; i++)
        {
            p = random();
            buff << setw(10) << p;
        }
        e = random();
        buff << setw(10) << e << endl;
        if (j==1000000*tm)
        {
            out << buff.str();
            buff.str("");
            buff.clear();
            tm++;
        }
    }
    out << buff.str();
    out.close();
    buff.str("");
    buff.clear();
    auto t2 = std::chrono::high_resolution_clock::now();
    cout << "------------------------------------" << endl;
    cout << "Failas sugeneruotas per " << std::chrono::duration_cast<std::chrono::microseconds>(t2-t1).count()/1000000.0 << " sec" << endl;
    cout << "------------------------------------" << endl;
}
bool comp_paz (const stud &a, const stud &b)
{
    return a.g<b.g;
}
bool comp_5 (const stud &a)
{
    return a.g>=5;
}
void atskyrimas (deque<stud> &v, bool ari, bool arvid)
{

    auto t1 = std::chrono::high_resolution_clock::now();
    sort(v.begin(), v.end(), comp_paz);
    auto t2 = std::chrono::high_resolution_clock::now();
    cout << "-------------------------------------" << endl;
    cout << "Studentai surusiuoti per " << std::chrono::duration_cast<std::chrono::microseconds>(t2-t1).count()/1000000.0 << " sec" << endl;
    cout << "-------------------------------------" << endl;
    auto t3 = std::chrono::high_resolution_clock::now();
    auto ts = std::chrono::high_resolution_clock::now();
    auto i = std::find_if(v.begin(), v.end(), comp_5);
    deque<stud> g(i, v.end()), tempas(v.begin(), i);
    //v.resize(v.size()-g.size());
    auto tsp = std::chrono::high_resolution_clock::now();
    cout << "-------------------------------------" << endl;
    cout << "Studentai suskirstyti per " << std::chrono::duration_cast<std::chrono::microseconds>(tsp-ts).count()/1000000.0 << " sec" << endl;
    cout << "-------------------------------------" << endl;
    string fg = "topai.txt", fb = "po_apacia.txt";
    
    ofstream out1 (fb);
    ari = 1;
    out1.close();
    spausd (tempas, ari, arvid, fb);
    ofstream out2 (fg);
    out2.close();
    spausd (g, ari, arvid, fg);

    tempas.clear();
    g.clear();
    v.clear();

    auto t4 = std::chrono::high_resolution_clock::now();
    cout << "------------------------------------------------------------------------" << endl;
    cout << "Surusiuoti studentai isvesti i du naujus failus per " << std::chrono::duration_cast<std::chrono::microseconds>(t4-t3).count()/1000000.0 << " sec" << endl;
    cout << "------------------------------------------------------------------------" << endl;
}
void darb (deque<stud> &v, bool arat, bool ari, bool arvid)
{
    cout << "Jei norite studentus surusiuoti ir atskirti i du failus iveskite 1, jei ne - 0" << endl;
    while (!(cin >> arat))
    {
        cin.clear();
        cin.ignore();
        cout << "Iveskite 1 arba 0" << endl;
    }
    if (arat == 1)
    {
        atskyrimas(v, ari, arvid);
    }
    else
    {
        cout << "Jei norite spausdinti i faila iveskite 1, jei i konsole iveskite 0" << endl;
        while (!(cin >> ari))
        {
            cin.clear();
            cin.ignore();
            cout << "Iveskite 1 arba 0" << endl;
        }
        auto t1 = std::chrono::high_resolution_clock::now();
        string f = "rez.txt";
        ofstream out(f);
        spausd (v, ari, arvid, f);
        out.close();
        v.clear();
        auto t2 = std::chrono::high_resolution_clock::now();
        cout << "----------------------------------------" << endl;
        cout << "Rezultatai isspausdinti per " << std::chrono::duration_cast<std::chrono::microseconds>(t2-t1).count()/1000000.0 << " sec" << endl;
        cout << "----------------------------------------" << endl;
    }
}

// auto t1 = std::chrono::high_resolution_clock::now();
// auto t2 = std::chrono::high_resolution_clock::now();
// cout << "Failas sugeneruotas per " << std::chrono::duration_cast<std::chrono::microseconds>(t2-t1).count()/1000000.0 << " sec" << endl;