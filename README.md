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
15. Vartotojo klausiama ar jis nori surūšiuoti studentus pagal pažymius ir atskirti juos į du failus (topai.txt - galutiniai pažymiai virš 5, po_apačia.txt - galutiniai pažymiai žemiau 5) (įvedamas 1 arba 0).
16. 1) Jei vartotojas pasirenka atskirti, programa pereina į 19 žingsnį.
    2) Jei vartotojas pasirenka neatskirti, studentai surūšiuojami pagal vardus, programa pereina į 17 žingsnį.
17. Vartotojo klausiama ar duomenis lentelės pavidalu išvesti į failą (rez.txt) ar į konsolę (įvedamas 1 arba 0).
18. 1) Jei buvo pasirinktas išvedimas į failą, programa pereina į 20 žingsnį.
    2) Jei buvo pasirinktas išvedimas į konsolę, programa pereina į 22 žingsnį.
19. Vartotojo klausiama kokį studentų atskyrimo metodą naudoti (įvedamas 1 arba 2, metodai aprašyti po programos veikimo aprašo).
20. 1) Jei buvo pasirinktas failų nuskaitymas vartotojo klausiama ar jis nori nuskaityti dar vieną failą (įvedamas 1 arba 0). Programa pereina į 21 žingsnį.
    2) Jei buvo pasirinkta failų nenuskaityti, programa pereina į 22 žingsnį.
21. 1) Jei pasirenkama nuskaityti dar vieną failą, programa grįžta į 14 žingsnį.
    2) Jei pasirenkama dar vieno failo nenuskaityti, programa pereina į 22 žingsnį.
22. Programa išveda visų studentų sąrašą su apskaičiuotu galutiniu balu pagal pažymių vidurkį ir pagal medianą.
23. Programa baigia darbą.

Galutinio balo apskaičiavimas:
- Su vidurkiu: 0.4 * vidurkis + 0.6 * egzamino vertinimas.
- Su mediana: 0.4 * mediana + 0.6 * egzamino vertinimas.

Studentų atskyrimo metodai:
1. Sukuriami du nauji konteineriai, į juos įrašomi atitinkami studentai.
2. Sukuriamas vienas naujas konteineris, į kurį įrašomi atitinkami studentai, įrašytiejį į naują konteinerį pašalinami iš senojo.

TESTAVIMAS:
- Testuojant buvo naudojami 5 failai - 1000, 10 000, 100 000, 1 000 000 ir 10 000 000 studentų su 3 pažymiais kiekvienam studentui.
- Kadangi programos veikimo metu daug kartų prašoma vartotojo pasirinkti veiksmus ar įrašyti tam tikrus duomenis, bendras programos laikas buvo matuojamas, tačiau testavimo metu išvesti bendri laikai neįrašyti.
- Testavimas atliktas su trimis programos realizacijomis - naudojant vector, deque arba list konteinerius.
- Dėl numatomo per ilgo programos veikimo laiko, list konteinerio 1 000 000 ir 10 000 000 eilučių ilgio išvedimas nebuvo matuojamas.

Testavimui naudotas nešiojamasis kompiuteris:
| CPU  | 12th Gen Intel(R) Core(TM) i9-12900H, 2,50 GHz |
|------|------------------------------------------------|
| RAM  | 32,0 GB (31,7 GB usable), DDR5-4800MHz         |
| Disk | Solid State Drive                              |


Bendras veikimo laikų lyginimas:
Vector:
|                                           | 1000     | 10 000   | 100 000  | 1 000 000 | 10 000 000 |
|-------------------------------------------|----------|----------|----------|-----------|------------|
| Failo nuskaitymas                         | 0,0215 s | 0,1999 s | 2,0353 s | 19,7341 s |  205,498 s |
| Studentų rūšiavimas                       | 0,0074 s | 0,0548 s | 0,4979 s |  5,6338 s |  53,1264 s |
| Studentų atskyrimas                       | 0,0009 s | 0,0075 s | 0,0881 s |  0,8735 s |  9,2614 s  |
| Studentų išvedimas į du skirtingus failus | 0,0085 s | 0,0581 s | 0,5441 s |  5,3866 s |  57,9246 s |
   
Deque:
|                                           | 1000     | 10 000   | 100 000  | 1 000 000 | 10 000 000 |
|-------------------------------------------|----------|----------|----------|-----------|------------|
| Failo nuskaitymas                         | 0,0212 s | 0,2018 s | 2,0978 s | 21,0506 s |  228,583 s |
| Studentų rūšiavimas                       | 0,0068 s | 0,0634 s | 0,6218 s |  6,7983 s |  62,8946 s |
| Studentų atskyrimas                       | 0,0018 s | 0,0258 s | 0,2064 s |  2,0836 s |  22,2655 s |
| Studentų išvedimas į du skirtingus failus | 0,0098 s | 0,0921 s | 0,9080 s |  9,1744 s |  110,429 s |
   
List:
|                                           | 1000     | 10 000   | 100 000   | 1 000 000 | 10 000 000 |
|-------------------------------------------|----------|----------|-----------|-----------|------------|
| Failo nuskaitymas                         | 0,0199 s | 0,1846 s | 2,1220 s  | 22,0957 s |  201,652 s |
| Studentų rūšiavimas                       | 0,0002 s | 0,0030 s | 0,0314 s  |  0,8397 s |  10,042 s  |
| Studentų atskyrimas                       | 0,0017 s | 0,0168 s | 0,1817 s  |  3,1471 s |  10.042 s  |
| Studentų išvedimas į du skirtingus failus | 0,0173 s | 0,4581 s | 118,631 s |     -     |      -     |

Atskyrimo metodų veikimo laikų lyginimas:

   
