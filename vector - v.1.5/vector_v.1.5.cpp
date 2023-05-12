#include "func.h"


int main() {
    /*stud pav;
    cout << "Using class named pav" << endl;
    pav.setvapa1("AAA", "BBB");
    pav.setegz(10);
    pav.setpaz(7);
    pav.setpaz(9);
    cout << "Initial pav val: " << pav.getvardas() << " " << pav.getpavarde() << " " << pav.getegz() << endl;

    stud copied(pav); // constr
    cout << "copied with constr: " << copied.getvardas() << " " << copied.getpavarde() << " " << copied.getegz() << endl;

    copied.setvapa1("CCC", "DDD");
    copied.setegz(7);
    copied.setpaz(10);
    copied.setpaz(6);
    cout << "changed copied: " << copied.getvardas() << " " << copied.getpavarde() << " " << copied.getegz() << endl;

    stud copied2;
    copied2 = pav; // assg
    cout << "copied with assg: " << copied.getvardas() << " " << copied.getpavarde() << " " << copied.getegz() << endl;

    cout << "Egzample done - close app." << endl << endl;*/

    auto t = std::chrono::high_resolution_clock::now();
    srand(time(NULL));
    int m = 1, n;
    bool arvid, arrand, arskait, ari=1, arg, arat=1, ars = 1;
    vector<stud> v;
    pasirinkimai(arrand, arskait, arvid, arg);
    if (arskait == 1)
    {
        while (arg == 1)
        {
            generavimas();
            cout << "Jei norite generuoti dar viena faila iveskite 1, jei ne - 0" << endl;
            while (!(cin >> arg))
            {
                cin.clear();
                cin.ignore();
                cout << "Iveskite 1 arba 0" << endl;
            }
        }
        while (ars == 1)
        {
            try
            {
                skaitymas(v, m, arvid);
            }
            catch (const char* err)
            {
                cout << err << endl;
                cout << "Pasirupinkite, kad nuskaitomas failas egzistuotu ir pavadinimas butu ivestas su pabaiga '.txt'." << endl;
                skaitymas(v, m, arvid);
            }

            darb(v, arat, ari, arvid);
            cout << "Jei norite nuskaityti dar viena faila iveskite 1, jei ne - 0" << endl;
            while (!(cin >> ars))
            {
                cin.clear();
                cin.ignore();
                cout << "Iveskite 1 arba 0" << endl;
            }
        }
    }
    else
    {
        rankinis(v, arrand, m, n, arvid);
        darb(v, arat, ari, arvid);
    }
    v.clear();
    auto tp = std::chrono::high_resolution_clock::now();
    cout << "------------------------------------------------------------------------------" << endl;
    cout << "Programa baige darba per " << std::chrono::duration_cast<std::chrono::microseconds>(tp - t).count() / 1000000.0 << " sec, rezultatai isvesti i atitinkamus failus." << endl;
    cout << "------------------------------------------------------------------------------" << endl;
}
