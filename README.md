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
- Testuojant buvo naudojami 5 failai - 1000, 10 000, 100 000, 1 000 000 ir 10 000 000 studentų su 15 pažymių kiekvienam studentui.
- Kadangi programos veikimo metu daug kartų prašoma vartotojo pasirinkti veiksmus ar įrašyti tam tikrus duomenis, bendras programos laikas buvo matuojamas, tačiau testavimo metu išvesti bendri laikai neįrašyti.
- Testavimas atliktas su trimis programos realizacijomis - naudojant vector, deque arba list konteinerius.
- Dėl tam tikrų kodo problemų testavimas su 10 000 000 eilučių failu nebuvo vykdomas.
- Dėl tam tikrų kodo problemų list konteinerių testavimas su 1 000 000 eilučių failu nebuvo vykdomas.

   Vector:
   
