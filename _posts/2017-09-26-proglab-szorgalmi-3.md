---
title: Programozás Labor - Szorgalmi 3.
description: A programozás alapjai 1. második laborjának szorgalmi feladatai
header: Programozás Labor - Szorgalmi 3.
categories: prog1lab, oktat
---
A szorgalmi feladat elfogadásáért legalább 3 pontnyi feladatot kell beadni. A feladatok beadása a [moodle](https://moodle.hit.bme.hu/) rendszeren keresztül zajlik. A megoldáshoz a .c fájlokat egy .zip csomagba tömörítve adjátok be.

1. **(1 pont)** `szorgalmi3_log2.c`

    Jerry Smith elvesztette a bizonyítványát, ezért újra kell, hogy érettségizzen, hogy munkát találhasson. Viszont a matek érettségi túl nehéznek bizonyul számára, ezért megkéri Mr. Meeseeks-et, hogy segítsen neki. Az első feladathoz a 2-nek a természetes logaritmusát kell, hogy kiszámolja. Ehhez Mr. Meeseeks az `ln(2)`-t Taylor-sorba fejti és az első 10 elemet összegzi. Mit kapott ekkor végeredményül? Írjuk meg az `ln(2)` becslését a Taylor-sorának első 10 tagjának segítségével. Vizsgáljuk meg, mennyire közelíti meg a `math.h` könyvtárban található `log(x)` függvény eredményét, írjuk ki a kettő különbségét.


2. **(1 pont)** `szorgalmi3_szamjegy.c`

    Mr. Meeseeks nagyon ügyesen el tud számolni 10-ig, de a nagyobb számokkal már gondban van. Nem baj, ilyenkor meg tud idézni további Mr. Meeseeks-eket, hogy besegítsenek neki a számolásba. Úgy tervezi, hogy a szám minden egyes számjegyét egy külön Mr. Meeseeks fogja lekezelni, így annyi segédet fog idézni magának, ahány számjegyből áll a szám. Hány további Mr. Meeseeks-et fogunk így megidézni? Olvassuk be a számot és számoljuk meg a számjegyeinek a számát! Először próbáljuk meg megoldani a feladatot ciklusokkal, majd próbáljuk meg a `log10(x)` függvény használatával is.

    *Segítség: Próbáljuk meg addig osztani a számot 10-zel, amíg nem kapunk 0-t.*

    ```
    Pl.:
    Input: 0
    Output: 1

    Input: 984657
    Output: 6
    ```

3. **(1 pont)** `szorgalmi3_kerekit.c`

    Mr. Meeseeks most rendkívül nagy bajban van. Rájött, hogy a matek feladatsorban az egészrész függvényeknél mindvégig kerekítéseket alkalmazott. Most újra át kell néznie a dolgozatot, hibák után kutatva. Segítsünk Mr. Meeseeks-nek, hiszen számára az egzisztencia maga a fájdalom és már legalább 2 órája létezik ebben a világban. Írjunk egy programot, amely beolvas egy számot, és kiírja, hogy megegyezik-e az adott szám egészrésze a kerekített értékével! Először próbáljuk meg beépített függvények nélkül, majd utána azokkal is (`floor(x)` és `round(x)`).

    ```
    Pl.:
    Input: 1.7
    Output: "NEM"

    Input: -1.7
    Output: "IGEN"
    ```
    
4. **(1 pont)** `szorgalmi3_z.c`

    Miközben Mr. Meeseeks a programunk lefutására vár, egy \\(n \times n \\)-es négyzetbe rajzolgat `Z` betűket úgy, hogy a négyzet legfelső és legalsó sorát, valamint az egyik átlóját besatírozza feketével (ezzel is enyhítve fájdalmát, amit a világunkban el kell szenvednie). Olvassunk be egy számot, és annak megfelelően írjuk ki a képernyőre, hogy egy \\(n \times n\\)-es négyzetrács mely pontjait kell besatíroznunk. Jelöljük `X`-szel azokat a mezőket amiket igen, és `.`-tal azokat, amelyeket nem. Ha a bemenet kisebb 4-nél, ne írjunk ki semmit.

    ```
    Pl.:
    Input: 5
    Output:
    XXXXX
    ...X.
    ..X..
    .X...
    XXXXX
    ```
5. **(2 pont)** `szorgalmi3_korok.c`

    Jerry-nek és Mr. Meeseeks-nek ezúttal köröket kell szerkesztenük egy papírlapra. A feladat minden egyes kört a középpontjának x és y koordinátájával, valamint a sugarával definiál. Azonban révén, hogy ez az utolsó feladat, már alig van hely a papíron. Állapítsuk meg, hogy mekkora területet foglalnak el a körök a síkon! Először olvassunk be egy n számot, ami megmondja, hány kört kell lerajzolni, majd következzen n sor, mely mindegyike 3 számot tartalmaz, rendre a kör x, y középpontját és a sugarát. Kimenetként írjuk ki annak a legkisebb téglalapnak a bal alsó és jobb felső sarkának a koordinátáit, amelybe még belefér az összes kör. (A téglalap oldalai párhuzamosak az x és az y tengelyekkel.)

    ```
    Pl.:
    Input:
    3
    1 2 1
    3 2 5
    1 1 4
    Output:
    -3 -3 8 7
    ```