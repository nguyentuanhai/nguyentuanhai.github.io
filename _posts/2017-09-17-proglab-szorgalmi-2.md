---
title: Programozás Labor - Szorgalmi 2.
description: A programozás alapjai 1. második laborjának szorgalmi feladatai
header: Programozás Labor - Szorgalmi 2.
categories: prog1lab, oktat
---
A szorgalmi feladat elfogadásáért legalább 3 pontnyi feladatot kell beadni. A feladatok beadása a [moodle](https://moodle.hit.bme.hu/) rendszeren keresztül zajlik. A megoldáshoz a .c fájlokat egy .zip csomagba tömörítve adjátok be.

1. **(1 pont)** `szorgalmi2_rugo.c`

    Már megint elszökött az Órarugógerincű Felpattanó! Ezúttal Gombóc Artúr próbál meg utánaugrálni. A hajsza egy számegyenes egész számú koordinátáin történik. Az üldözés kezdetekor Gombóc Artúr a `0`-ás koordinátán áll, az Órarugógerincű Felpattanó pedig az `x`-en (`x > 0` egész). Gombóc Artúr és az Órarugógerincű Felpattanó minden másodpercben ugranak egyet a számegyenesen, előbbi `a` méretűt, utóbbi `b` méretűt (`a, b > 0` egészek). Határozzuk meg, hogy adott `x`, `a`, `b` számokra, utol fogja-e érni Gombóc Artúr a szökevényt. Ha nem, írjunk ki egy `-1`-et, ha igen, írjuk ki, hogy hány másodperc múlva.

    ```
    Pl.:
    Input: 4 2 1
    Output: 4

    Input: 4 1 2
    Output: -1
    ```

    Az első esetben az Órarugógerincű Felpattanó a 4-esen kezd és csak 1-et ugrik, Artúr 2-t, így 4 lépés múlva éri őt utol.

2. **(1 pont)** `szorgalmi2_csoki.c`

    Gombóc Artúr vendégeket vár. A vacsora csak desszertből fog állni és mindenki táblacsokikockákat fog kapni. Ehhez Artúr leltárba veszi a csokikészletét és megszámolja, hány kocka maradt az egyes csokitáblákból. Vajon el tudja-e osztani Artúr a csokoládékockákat az `n` vendég (`n > 0` egész) közt egyenlően (Artúrnak most nem jut csoki, ő fogyókúrázik). Írjunk programot, ami először bekéri a vendégek számát, majd addig kéri be az egyes táblák kockáinak számát, amíg a bemeneten `0`-t nem kapunk. Írjuk ki, hogy el lehet-e osztani a csokit a vendégek közt igazságosan.

    ```
    Pl.:
    Input: 5 13 7 28 2 0
    Output: "El lehet osztani a csokikat igazságosan."

    Input: 2 2 3 4 5 1 0
    Output: "Nem lehet elosztani a csokikat igazságosan."
    ```

    Az első esetben összesen 50 kocka van, azt el lehet oszani az 5 vendég közt. A második esetben 15 csokikockát nem lehet elosztani 2 vendég közt.

3. **(1 pont)** `szorgalmi2_jatek.c`

    Picur és Pom Pom a következő játékot játsszák: lerajzolnak `n` pontot egy papírlapra és felváltva összekötnek két-két pontot. A játékot az veszíti el, aki kört hoz létre. Ki fog nyerni, ha mindketten a lehető legjobban játszanak és Picur kezdi a játékot?

    ```
    Pl.:
    Input: 3
    Output: "Pom Pom"
    ```
    
    Először Picur összeköt két pontot, majd Pom Pom összeköti az összekötetlen pontot az egyik összekötöttel. Így marad két pont, amik nincsenek összekötve egymással, amiket ha Picur összeköt, elveszíti a játékot.

4. **(2 pont)** `szorgalmi2_sorozat.c`

    Picur legutóbbi matek órája a számrendszerekről szólt. Sikerült is megtanulnia az első 10 számrendszert. Gyakorlásképpen azt játssza, hogy megkéri Pom Pomot, hogy mondjon neki egy `n`-es számrendszert (`0<n<11`) és egy `k` számot (`0<k<1000`). Ekkor ő elkezdi felírni az `n`-es számrendszer számjegyeti a `0`-tól kezdve növekvő sorrendbe, és ha elérte az `n-1`-et, akkor onnantól csökkenő sorrendben folytatja a felírást, amíg el nem éri megint a `0`-t, ahonnan ismét növelni kezdi a számjegyeket. A sorozatot addig írja, amíg nem lesz `k` hosszú. Segítsünk Picurnak felírni a sorozatot adott `n`-re és `k`-ra.

    ```
    Pl.:
    Input: 6 18
    Output: 012345432101234543

    Input: 9 6
    Output: 012345

    Input: 1 10
    Output: 0000000000
    ```