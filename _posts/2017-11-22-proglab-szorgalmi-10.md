---
title: Programozás Labor - Szorgalmi 10.
description: A programozás alapjai 1. sokadik laborjának szorgalmi feladatai
header: Programozás Labor - Szorgalmi 10.
categories: prog1lab, oktat
---

A szorgalmi feladat elfogadásáért legalább 3 pontnyi feladatot kell beadni. A feladatok beadása a [moodle](https://moodle.hit.bme.hu/) rendszeren keresztül zajlik. A megoldáshoz a .c fájlokat egy .zip csomagba tömörítve adjátok be.

1. `szorgalmi10_folyam.c`
    A gonosz varázsló kifosztotta a világ összes csokigyárát és a csokoládékat egy hatalmas tartályban beolvasztotta a kastélyában a Varázshegy tetején. Ezt látván hősünk Pico, a csokiimádó kutya, egy rabszolgamunkás gyerekekből álló hadsereg élén megostromolta a gonosz varázsló várát. A harc során azonban sajnos felrobbant a csokitartály és a forró folyékony csoki a hegyi ösvények mentén lefolyt és elárasztotta a hegy lábában lévő gabonamezőket. Milyen sebességgel történik az áradás, ha ismerjük a hegyi ösvények hálózatát és az útszakaszok szélességét.

    A bemenetünk, az úthálózat, egy súlyozott, irányított gráf, melyet a [folyam_graf.txt][2] fájl ír le. A fájl első sorában két szám áll: `n`, a csúcsok száma; `e`, az élek száma. A gráf csúcsait számok jelölik, `0`-tól `n-1`-ig. A fájlban ezután `e` sor következik, mindegyik sorban három szám: `u`, `v`, `w`. Ez egy irányított él u-ból v-be, és annak a w súlya. Írjunk programot, amely kiszámítja a maximális folyam nagyságát a `0` csúcsból az `n-1` csúcsba. Egészítsük ki a [flow_keret.c][1] keretprogramot megfelelően.

    1. **(3 pont)** Írjuk meg a BFS algoritmust, ami egy adott gyökérpontból elkészíti a BFS fát.

    2. **(3 pont)** Írjuk meg a javító utas algoritmust, ami megtalálja a maximális folyamnagyságot.

    ```
        Pl.:
        Input:
        7 11
        0 1 8
        0 4 6
        1 2 4
        1 3 5
        2 6 4
        3 5 2
        3 6 12
        4 2 6
        4 3 2
        4 5 3
        5 6 2
        Output: 13
    ```

    A bemenet az alábbi gráfot írja le: ![a][3]{:height="302px" width="415px"}. A folyam pedig 13, ami maximális, hiszen a 2-6, 1-3, 4-3, 5-6 élek 13 méretű vágást alkotnak.

    Megj.: a fenti gráf szomszédossági mátrixa

    ```
        0 8 0 0 6 0 0
        0 0 4 5 0 0 0
        0 0 0 0 0 0 4
        0 0 0 0 0 2 12
        0 0 6 2 0 3 0
        0 0 0 0 0 0 2
        0 0 0 0 0 0 0
    ```

    [1]: {{ site.url }}/download/flow_keret.c
    [2]: {{ site.url }}/download/folyam_graf.txt
    [3]: {{ site.url }}/img/folyam_megoldas.png
   