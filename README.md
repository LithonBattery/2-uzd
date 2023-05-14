# 2-uzd v.2.0
PROGRAMOS ĮDIEGIMAS:

Programai įdiegti naudojamas Makefile. Aplankale su programos failais atsidarius komandų terminalą reikia naudoti šias komandas:
1. make - skirta programos pagrindiniam main.exe failui sukurti. (Jei trūksta func.o failo ši komanda pati jį sukompiliuoja)
2. make func - skirta sukompiliuoti tik func.o failą.
3. make clean - ištrina visus main.exe ir visus .o tipo failus.

Bendra informacija:

- Programai paleisti naudojamas main.exe failas (nepaisant naudojamo konteinerio).
- Generuojamų failų pavadinimų šablonas: "kursiokai<jūsų_pasirinktas_eilučių_skaičius>.txt.
- Pereinant iš v.1 į v.1.1 struktūra buvo pakeista klase. Atitinkamai buvo pritaikyti ir papildomi pakeitimai susiję su klasės naudojimu.
- Pereinant iš v.1 į v.1.1 buvo pasirinkta naudoti tik vector konteinerį.
- pereinant iš v.1.1 į v.1.2 įgyvendinta "rule of five".
- pereinant iš v.1.1 į v.1.2 papildytas optimizavimo testavimas
- pereinant iš v.1.2 į v.1.5 naudojama klasė atskirta į dvi - bazinę ir derived.

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
- Jei trukmė per maža išmatuoti, rašomas 0.
- Kadangi ir senesnėse programos versijose buvo naudojamas find_if algoritmas, papildomi stl optimizavimo algoritmai nebuvo pritaikyti. Todėl programos sparta su jais nebuvo testuojama.

Testavimui naudotas nešiojamasis kompiuteris:
| CPU  | 12th Gen Intel(R) Core(TM) i9-12900H, 2,50 GHz |
|------|------------------------------------------------|
| RAM  | 32,0 GB (31,7 GB usable), DDR5-4800MHz         |
| Disk | Solid State Drive                              |
| OS   | Windows 11 Home                                |


Bendras veikimo spartos lyginimas (naudotas 1 atskyrimo metodas):

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
|           | 1000 | 10 000   | 100 000  | 1 000 000 | 10 000 000 |
|-----------|------|----------|----------|-----------|------------|
| 1 metodas | 0 s  | 0,0007 s | 0,0064 s | 0,0991 s  | 1,0306 s   |
| 2 metodas | 0 s  | 0,0006 s | 0,0060 s | 0,0932 s  | 0,9798 s   |

Deque:
|           | 1000     | 10 000   | 100 000  | 1 000 000 | 10 000 000 |
|-----------|----------|----------|----------|-----------|------------|
| 1 metodas | 0,0004 s | 0,0024 s | 0,0332 s | 0,4594 s  | 4,1047 s   |
| 2 metodas | 0,0002 s | 0,0021 s | 0,0281 s | 0,5232 s  | 4,3705 s   |

List:
|           | 1000     | 10 000   | 100 000  | 1 000 000 | 10 000 000 |
|-----------|----------|----------|----------|-----------|------------|
| 1 metodas | 0,0003 s | 0,0026 s | 0,0420 s | 0,5358 s  | 5,1762 s   |
| 2 metodas | 0,0002 s | 0,0028 s | 0,0402 s | 0,4855 s  | 5,2657 s   |

Išvados:
- Skirtumas būtų ryškesnis su dar didesniais informacijos kiekiais nei buvo naudota.
- Su naudotais informacijos kiekiais skirtumai labai maži, praktiškai nereikšmingi.

v.1 ir v.1.1 vector realizacijos lyginimas (naudotas 2 atskyrimo metodas):

v.1 (struktūra):
|                                           | 100 000  | 1 000 000 |
|-------------------------------------------|----------|-----------|
| Failo nuskaitymas                         | 0,1813 s | 1,8400 s  |
| Studentų rūšiavimas                       | 0,0088 s | 0,0988 s  |
| Studentų atskyrimas                       | 0,0065 s | 0,0948 s  |
| Studentų išvedimas į du skirtingus failus | 0,1104 s | 0,7136 s  |

v.1.1 (klasė):
|                                           | 100 000  | 1 000 000 |
|-------------------------------------------|----------|-----------|
| Failo nuskaitymas                         | 0,1972 s | 1,9306 s  |
| Studentų rūšiavimas                       | 0,0295 s | 0,3021 s  |
| Studentų atskyrimas                       | 0,0041 s | 0,0472 s  |
| Studentų išvedimas į du skirtingus failus | 0,0704 s | 0,7168 s  |

Išvados:

- Labai smulkus spartos skirtumas.
- Didžiausias pastebimas skirtumas yra rūšiavime ir atskyrime.

v.1.1/v.1.2  realizacijos spartos naudojant skirtingus kompiliavimo optimizavimo flag'us:

Be optimizavimo:
|                                           | 1000     | 10 000   | 100 000  | 1 000 000 | 10 000 000 |
|-------------------------------------------|----------|----------|----------|-----------|------------|
| Failo nuskaitymas                         | 0,0071 s | 0,0477 s | 0,4097 s | 4,1500 s  | 42,8526 s  |
| Studentų rūšiavimas                       | 0,0008 s | 0,0129 s | 0,0682 s | 0,7731 s  | 7,0087 s   |
| Studentų atskyrimas                       | 0,0001 s | 0,0016 s | 0,0143 s | 0,1927 s  | 2,1626 s   |
| Studentų išvedimas į du skirtingus failus | 0,0058 s | 0,0117 s | 0,0931 s | 0,8878 s  | 8,9838 s   |

-o1:
|                                           | 1000     | 10 000   | 100 000  | 1 000 000 | 10 000 000 |
|-------------------------------------------|----------|----------|----------|-----------|------------|
| Failo nuskaitymas                         | 0,0031 s | 0,0210 s | 0,1889 s | 1,8659 s  | 18,9952 s  |
| Studentų rūšiavimas                       | 0,0002 s | 0,0011 s | 0,0138 s | 0,1124 s  | 1,1498 s   |
| Studentų atskyrimas                       | 0 s      | 0,0006 s | 0,0063 s | 0,1117 s  | 1,1709 s   |
| Studentų išvedimas į du skirtingus failus | 0,0039 s | 0,0075 s | 0,0649 s | 0,6941 s  | 7,4987 s   |

-o2:
|                                           | 1000     | 10 000   | 100 000  | 1 000 000 | 10 000 000 |
|-------------------------------------------|----------|----------|----------|-----------|------------|
| Failo nuskaitymas                         | 0,0051 s | 0,0209 s | 0,1792 s | 1,8011 s  | 18,1458 s  |
| Studentų rūšiavimas                       | 0,0001 s | 0,0019 s | 0,0105 s | 0,1042 s  | 1,0482 s   |
| Studentų atskyrimas                       | 0 s      | 0,0008 s | 0,0079 s | 0,1107 s  | 1,1420 s   |
| Studentų išvedimas į du skirtingus failus | 0,0014 s | 0,0078 s | 0,0696 s | 0,6690 s  | 7,3065 s   |

-o3:
|                                           | 1000     | 10 000   | 100 000  | 1 000 000 | 10 000 000 |
|-------------------------------------------|----------|----------|----------|-----------|------------|
| Failo nuskaitymas                         | 0,0033 s | 0,0182 s | 0,1758 s | 1,8363 s  | 18,5540 s  |
| Studentų rūšiavimas                       | 0,0002 s | 0,0017 s | 0,0109 s | 0,1108 s  | 1,1039 s   |
| Studentų atskyrimas                       | 0 s      | 0,0009 s | 0,0068 s | 0,1032 s  | 1,1920 s   |
| Studentų išvedimas į du skirtingus failus | 0,0022 s | 0,0085 s | 0,0680 s | 0,6992s   | 7,5758 s   |

Išvados:
- Optimizavimas labai pagreitina programos veikimą.
- Labai nedidelis spartos skirtumas tarp kompiliatoriaus optimizatorių.
