# 1-uzd v.04
PROGRAMOS VEIKIMAS:

1. Programos pradžioje vartotojo klausiama ar jis norės naudoti vidurkį ar medianą galutinio balo skaičiavimui (įvedamas 1 arba 0).
2. Vartotojo klausiama ar jis norės naudoti nuskaityti duomenis iš failo ar ne (įvedamas 1 arba 0).
3. 1) Jei pasirenkama nuskaityti iš failo programa pereina į 8 žingsnį.
   2) Jei vartotojas pasirenka neskaityti duomenų iš failo, klausiama ar jis norės kad pažymiai būtų generuojami atsitiktinai ar įvedami ranka (įvedamas 1 arba 0). Programa pereina į 4 žingsnį.
4. 1) Jei buvo pasirinktas atsitiktinis generavimas, vartotojo prašoma įvesti generuojamų pažymių kiekį ir studento vardą bei pavardę.
   2) Jei buvo pasirinktas įvedimas ranka, vartotojo prašoma įvesti studento vardą ir pavardę bei namų darbų pažymius, baigus įvedimą reikia įvesti 0.
5. Vartotojo klausiama ar jis nori įvesti dar vieną studentą.
6. 1) Jei vartotojas pasirenka įvesti naują studentą, įvedamas 1 ir programa grįžtą į 4 žingsnį.
   2) Jei vartotojas pasirenka neįvesti naujo studento, įvedamas 0, programa pereina į 7 žingsnį.
7. Vartotojo klausiama ar jis nori surūšiuoti studentų sąrašą pagal vardus (įvedamas 1 arba 0), programa pereina į 15 žingsnį.
8. Vartotojo klausiama ar jis nori generuoti naują failą ar nuskaityti duomenis iš jau egzistuojančių failų (įvedamas 1 arba 0).
9. 1) Jei vartotojas pasirenka generuoti naują failą, programa pereina į 10 žingsnį.
   2) Jei vartotojas pasirenka nuskaityti esamus failus programa pereina į 14 žingsnį.
10. Vartotojo prašoma įvesti generuojamų studentų kiekį.
11. Vartotojo prašoma įvesti generuojamų pažymių kiekį.
12. Vartotojo klausiama ar jis nori generuoti dar vieną failą (įvedamas 1 arba 0).
13. 1) Jei vartotojas pasirenka generuoti dar vieną failą programa grįžta į 9 žingsnį.
    2) Jei vartotojas pasirenka nebegeneruoti daugiau failų, programa pereina į 14 žingsnį.
14. Vartotojo prašoma įvesti nuskaitomo failo pavadinimą.
15. Vartotojo klausiama ar jis nori surūšiuoti studentus pagal pažymius ir atskirti juos į du failus (įvedamas 1 arba 0).
16. 1) Jei vartotojas pasirenka atskirti, programa pereina į 19 žingsnį.
    2) Jei vartotojas pasirenka neatskirti, studentai surūšiuojami pagal vardus, programa pereina į 17 žingsnį.
17. Vartotojo klausiama ar duomenis lentelės pavidalu išvesti į failą (rez.txt) ar į konsolę (įvedamas 1 arba 0).
18. 1) Jei buvo pasirinktas failų nuskaitymas programa pereina į 19 žingsnį.
    2) Jei buvo pasirinkta failų nesnuskaityti, programa pereina į 21 žingsnį.
19. 1) Jei buvo pasirinktas failų nuskaitymas vartotojo klausiama ar jis nori nuskaityti dar vieną failą (įvedamas 1 arba 0). Programa pereina į 20 žingsnį.
    2) Jei buvo pasirinkta faių nenuskaityti, programa pereina į 21 žingsnį.
20. 1) Jei pasirenkama nuskaityti dar vieną failą, programa grįžta į 14 žingsnį.
    2) Jei pasirenkama dar vieno failo nenuskaityti, programa pereina į 21 žingsnį.
21. Programa išveda visų studentų sąrašą su apskaičiuotu galutiniu balu pagal pažymių vidurkį ir pagal medianą.
22. Programa baigia darbą.

Galutinio balo apskaičiavimas:
- Su vidurkiu: 0.4 * vidurkis + 0.6 * egzamino vertinimas.
- Su mediana: 0.4 * mediana + 0.6 * egzamino vertinimas.

TESTAVIMAS:
- Testuojant buvo generuojami 5 failai - 1000, 10 000, 100 000, 1 000 000 ir 10 000 000 studentų su 15 pažymių kiekvienam studentui.
- Kadangi programos veikimo metu daug kartų prašoma vartotojo pasirinkti veiksmus ar įrašyti tam tikrus duomenis, bendras programos laikas buvo matuojamas, tačiau testavimo metu išvesti bendri laikai neįrašyti.

Generavimo bandymai:
|                | 1000     | 10 000   | 100 000  | 1 000 000 | 10 000 000 |
|----------------|----------|----------|----------|----------|------------|
| Bandymas nr.1  | 0,0075 s | 0,0496 s | 0,4607 s | 4,5931 s | 32,3452 s  |
| Bandymas nr. 2 | 0,0070 s | 0,0495 s | 0,4556 s | 4,6540 s | 32,7409 s  |

Darbo bandymai:

Bandymas nr.1:
|                                           | 1000     | 10 000   | 100 000  | 1 000 000 | 10 000 000 |
|-------------------------------------------|----------|----------|----------|-----------|------------|
| Failo nuskaitymas                         | 0,0100 s | 0,0886 s | 0,8436 s | 8,8689 s  | 23,0887 s  |
| Studentų rūšiavimas                       | 0,0035 s | 0,0235 s | 0,2704 s | 3,6333 s  | 12,5787 s  |
| Studentų išvedimas į du skirtingus failus | 0,0050 s | 0,0267 s | 0,2200 s | 2,2719 s  | 6,7449 s   |

Bandymas nr. 2:
|                                           | 1000     | 10 000   | 100 000  | 1 000 000 | 10 000 000 |
|-------------------------------------------|----------|----------|----------|-----------|------------|
| Failo nuskaitymas                         | 0,0101 s | 0,0895 s | 0,8913 s | 9,4355 s  | 23,7375 s  |
| Studentų rūšiavimas                       | 0,0030 s | 0,0240 s | 0,2626 s | 3,4887 s  | 12,1303 s  |
| Studentų išvedimas į du skirtingus failus | 0,0180 s | 0,0260 s | 0,2224 s | 2,1745 s  | 6,7772 s   |
