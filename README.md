
# 1-uzd v.03
Programos veikimas:

1. Programos pradžioje vartotojo klausiama ar jis norės naudoti nuskaityti duomenis iš failo (kursiokai.txt) ar ne (įvedamas 1 arba 0).
2. Jei pasirinkta nuskaityti iš failo, programa iškart pereina prie 8 žingsnio.
3. Jei vartotojas pasirenka neskaityti duomenų iš failo, klausiama ar jis norės kad pažymiai būtų generuojami atsitiktinai ar įvedami ranka (įvedamas 1 arba 0).
4. Vartotojo prašoma įvesti pirmo studento vardą ir pavardę.
5. 1) Jei buvo pasirinktas atsitiktinis generavimas, vartotojo prašoma įvesti generuojamų pažymių kiekį.
   2) Jei buvo pasirinktas įvedimas ranka, vartotojo prašoma įvesti studento namų darbų pažymius, baigus įvedimą reikia įvesti 0.
6. Vartotojo klausiama ar jis nori įvesti dar vieną studentą.
7. 1) Jei vartotojas pasirenka įvesti naują studentą, įvedamas 1 ir programa grįžtą į 3 žingsnį.
   2) Jei vartotojas pasirenka neįvesti naujo studento, įvedamas 0.
8. Vartotojo klausiama ar duomenis lentelės pavidalu išvesti į failą (rez.txt) ar į konsolę (įvedamas 1 arba 0).
9. Programa išveda visų studentų sąrašą su apskaičiuotu galutiniu balu pagal pažymių vidurkį ir pagal medianą.

Galutinio balo apskaičiavimas:
- Su vidurkiu: 0.4 * vidurkis + 0.6 * egzamino vertinimas.
- Su mediana: 0.4 * mediana + 0.6 * egzamino vertinimas.

Papildymai nuo v.02:
1. Programa išskirstyta į kelis .cpp ir .h failus.
2. Pridėtas try-catch siekiant apsaugoti nuo kreipimosi į neegzistuojantį failą.
