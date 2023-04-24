# 1-uzd v.1
PROGRAMOS ĮDIEGIMAS:

Programai įdiegti naudojamas Makefile. Aplankale su programos failais atsidarius komandų terminalą reikia naudoti šias komandas:
1. make - skirta programos pagrindiniam main.exe failui sukurti. (Jei trūksta func.o failo ši komanda pati jį sukompiliuoja)
2. make func - skirta sukompiliuoti tik func.o failą.
3. make clean - ištrina visus main.exe ir visus .o tipo failus.

Bendra informacija:

- Programai paleisti naudojamas main.exe failas (nepaisant naudojamo konteinerio).
- Generuojamų failų pavadinimų šablonas: "kursiokai<jūsų_pasirinktas_eilučių_skaičius>.txt


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

GALUTINIO BALO APSKAIČIAVIMAS:
- Su vidurkiu: 0.4 * vidurkis + 0.6 * egzamino vertinimas.
- Su mediana: 0.4 * mediana + 0.6 * egzamino vertinimas.


STUDENTŲ ATSKYRIMO METODAI:
1. Sukuriami du nauji konteineriai, į juos įrašomi atitinkami studentai.
2. Sukuriamas vienas naujas konteineris, į kurį įrašomi atitinkami studentai, įrašytiejį į naują konteinerį pašalinami iš senojo.


TESTAVIMAS:
- Testuojant buvo naudojami 5 failai - 1000, 10 000, 100 000, 1 000 000 ir 10 000 000 studentų su 3 pažymiais kiekvienam studentui.
- Kadangi programos veikimo metu daug kartų prašoma vartotojo pasirinkti veiksmus ar įrašyti tam tikrus duomenis, bendras programos laikas buvo matuojamas, tačiau testavimo metu išvesti bendri laikai neįrašyti.
- Testavimas atliktas su trimis programos realizacijomis - naudojant vector, deque arba list konteinerius.
- Jei trukmė per maža ošmatuoti, rašomas 0.
- Kadangi ir senesnėse programos versijose buvo naudojamas find_if algoritmas, papildomi stl optimizavimo algoritmai nebuvo pritaikyti. Todėl programos sparta su jais nebuvo testuojama.

Testavimui naudotas nešiojamasis kompiuteris:
| CPU  | 12th Gen Intel(R) Core(TM) i9-12900H, 2,50 GHz |
|------|------------------------------------------------|
| RAM  | 32,0 GB (31,7 GB usable), DDR5-4800MHz         |
| Disk | Solid State Drive                              |
| OS   | Windows 11 Home                                |


Bendras veikimo spartos lyginimas (naudotas ą atslyrimo metodas):

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

Išvados:
- Nuskaitymas ilgiausiai vyko į vector konteinerį.
- Greičiausiai surūšiuotas buvo vector konteineris.
- Greičiausiai išvedamas buvo vector konteineris.

Atskyrimo metodų spartos lyginimas:

Vector:
|           | 1000     | 10 000   | 100 000  | 1 000 000 | 10 000 000 |
|-----------|----------|----------|----------|-----------|------------|
| 1 metodas | 0,0008 s | 0,0082 s | 0,0916 s | 0,92 s    | 9,9197 s   |
| 2 metodas | 0,0007 s | 0,0072 s | 0,0919 s | 0,9052 s  | 10,2753 s  |

Deque:
|           | 1000     | 10 000   | 100 000  | 1 000 000 | 10 000 000 |
|-----------|----------|----------|----------|-----------|------------|
| 1 metodas | 0,0097 s | 0,0182 s | 0,1925 s | 2,044 s   | 23,0396 s  |
| 2 metodas | 0,0016 s | 0,0185 s | 0,1929 s | 2,1342 s  | 26,2578 s  |

List:
|           | 1000     | 10 000  | 100 000  | 1 000 000 | 10 000 000 |
|-----------|----------|---------|----------|-----------|------------|
| 1 metodas | 0,0021 s | 0,0167  | 0,1763 s | 2,7074 s  | 21,6143 s  |
| 2 metodas | 0,0013 s | 0,015 s | 0,1814 s | 1,8273 s  | 21,6634 s  |

Išvados:
- Skirtumas būtų ryškesnis su dar didesniais informacijos kiekiais nei buvo naudota.
- Su naudotais informacijos kiekiais skirtumai labai maži, praktiškai nereikšmingi.
- Didžiausias užfiksuotas skirtumas - deque konteinerio, dirbant su 10 000 000 eilučių failu - 1 metodas 3,2 s greitesnis.
