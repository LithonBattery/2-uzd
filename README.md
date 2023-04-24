# 1-uzd v.05
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
15. Vartotojo klausiama ar jis nori surūšiuoti studentus pagal pažymius ir atskirti juos į du failus (topai.txt - galutiniai pažymiai virš 5, po_apačia.txt - galuiniai pažymiai žemiau 5) (įvedamas 1 arba 0).
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
- Testuojant buvo naudojami 5 failai - 1000, 10 000, 100 000, 1 000 000 ir 10 000 000 studentų su 3 pažymiais kiekvienam studentui.
- Kadangi programos veikimo metu daug kartų prašoma vartotojo pasirinkti veiksmus ar įrašyti tam tikrus duomenis, bendras programos laikas buvo matuojamas, tačiau testavimo metu išvesti bendri laikai neįrašyti.
- Testavimas atliktas su trimis programos realizacijomis - naudojant vector, deque arba list konteinerius.
- Jei trukmė per maža išmatuoti, rašomas 0.

Testavimui naudotas nešiojamasis kompiuteris:
| CPU  | 12th Gen Intel(R) Core(TM) i9-12900H, 2,50 GHz |
|------|------------------------------------------------|
| RAM  | 32,0 GB (31,7 GB usable), DDR5-4800MHz         |
| Disk | Solid State Drive                              |
   
Vector:
|                                           | 1000     | 10 000   | 100 000  | 1 000 000 | 10 000 000 |
|-------------------------------------------|----------|----------|----------|-----------|------------|
| Failo nuskaitymas                         | 0,0050 s | 0,0201 s | 0,1750 s |  1,7055 s |  27,6632 s |
| Studentų rūšiavimas                       | 0,0002 s | 0,0009 s | 0,0109 s |  0,0951 s |  1,0072 s  |
| Studentų atskyrimas                       | 0 s      | 0,0006 s | 0,0070 s |  0,0984 s |  1,1611 s  |
| Studentų išvedimas į du skirtingus failus | 0,0021 s | 0,0084 s | 0,0755 s |  0,7713 s |  8,0907 s  |
   
Deque:
|                                           | 1000     | 10 000   | 100 000  | 1 000 000 | 10 000 000 |
|-------------------------------------------|----------|----------|----------|-----------|------------|
| Failo nuskaitymas                         | 0,0021 s | 0,0200 s | 0,2011 s |  2,0169 s |  20,7048 s |
| Studentų rūšiavimas                       | 0,0005 s | 0,0031 s | 0,0276 s |  0,3526 s |  3,8443 s  |
| Studentų atskyrimas                       | 0,0004 s | 0,005 s  | 0,0364 s |  0,3858 s |  4,0043 s  |
| Studentų išvedimas į du skirtingus failus | 0,0445 s | 0,0112 s | 0,1018 s |  1,1361 s |  13,4068 s |
   
List:
|                                           | 1000     | 10 000   | 100 000  | 1 000 000 | 10 000 000 |
|-------------------------------------------|----------|----------|----------|-----------|------------|
| Failo nuskaitymas                         | 0,0037 s | 0,0215 s | 0,2003 s |  2,0471 s |  20,3886 s |
| Studentų rūšiavimas                       | 0 s      | 0,0015 s | 0,0142 s |  0,4314 s |  7,8671 s  |
| Studentų atskyrimas                       | 0,0002 s | 0,0037 s | 0,0421 s |  0,5666 s |  5,6722 s  |
| Studentų išvedimas į du skirtingus failus | 0,0015 s | 0,0113 s | 0,1105 s |  1,2739 s |  14,7428 s |
   
