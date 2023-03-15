#include "func.h"


int main() {
    auto t = std::chrono::high_resolution_clock::now();
    srand(time(NULL));
    int m=1, n;
    bool arvid, arrand, arskait, ari, arg, arat, ars=1;
    vector<stud> v;
    pasirinkimai (arrand, arskait, arvid, arg);
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
        while (ars==1)
        {
            try
            {
                skaitymas (v, m, arvid);
            }
            catch (const char *err)
            {
                cout << err << endl;
                cout << "Pasirupinkite, kad nuskaitomas failas egzistuotu ir pavadinimas butu ivestas su pabaiga '.txt'." << endl;
                cout << "Iveskite nuskaitomo failo pavadinima is naujo." << endl;
                skaitymas (v, m, arvid);
            }
            darb(v, arat, ari, arvid);
            cout << "Jei norite nuskaityti dar viena faila ieskite 1, jei ne - 0" << endl;
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
        rankinis (v, arrand, m, n, arvid);
        darb(v, arat, ari, arvid);
    }
    v.clear();
    auto tp = std::chrono::high_resolution_clock::now();
    cout << "Programa baige darba per " << std::chrono::duration_cast<std::chrono::microseconds>(tp-t).count()/1000000.0 << " sec, rezultatai isvesti i atitinkamus failus." << endl;
}
