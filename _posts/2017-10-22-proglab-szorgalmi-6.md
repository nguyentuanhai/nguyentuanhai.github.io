---
title: Programozás Labor - Szorgalmi 6.
description: A programozás alapjai 1. hatodik laborjának szorgalmi feladatai
header: Programozás Labor - Szorgalmi 6.
categories: prog1lab, oktat
---

A szorgalmi feladat elfogadásáért legalább 3 pontnyi feladatot kell beadni. A feladatok beadása a [moodle](https://moodle.hit.bme.hu/) rendszeren keresztül zajlik. A megoldáshoz a .c fájlokat egy .zip csomagba tömörítve adjátok be.

1. `szorgalmi6_futoverseny.c`
    Miután Vágási Ferinek mégsem jött be az internet, úgy dönt, hogy futóversenyek szervezésébe fog bele. Egy maratont szeretne szervezni, melyen a futók többféle versenyszámban is elindulhatnának.

    1. **(1 pont)** Hozzunk létre egy C struktúrát, amely eltárolja egy futó következő adatait: egy karakter, amely azt jelöli, hogy a futó melyik rajtzónából indul el; egy egész szám, a futó sorszáma; egy egész szám, a futó által lefutandó táv; egy egész szám, a futó által eddig lefutott táv hossza kilométerekre kerekítve (a verseny elején 0); egy valós szám, hogy hánykor indult el a futó (ha még nem indult el, akkor 0); egy valós szám, hogy hánykor ért célba a futó (ha még nem érkezett meg, akkor 0).

        ```
            Pl.:
            Futo futo = {'C', 1352, 42, 0, 0, 0};
        ```

    2. **(1 pont)** Hozzunk létre a csapatversenyek csapatainak is egy-egy struktúrát. A páros csapatverseny struktúrája két futót tárol, míg a négyesváltó struktúra négy futót tárol. Hozzunk létre egy-egy függvényt, mely kiszámítja egy csapat összidejét és átlagsebességét.

    3. **(1 pont)** Írjunk függvényt, ami bekér egy futót paraméterként és kiírja, hogy épp hol tart a futó és hogy a táv hanyad részét tette meg tovább nem egyszerűsíthető törtszámként. *Segítség: használjunk `lnko()` függvényt!*

    ```
        Pl.:
        7 km: a tav 1/6 reszenel tartasz.
        28 km: a tav 2/3 reszenel tartasz.
    ```

    