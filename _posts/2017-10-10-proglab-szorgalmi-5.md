---
title: Programozás Labor - Szorgalmi 5.
description: A programozás alapjai 1. ötödik laborjának szorgalmi feladatai
header: Programozás Labor - Szorgalmi 5.
categories: prog1lab, oktat
---

A szorgalmi feladat elfogadásáért legalább 3 pontnyi feladatot kell beadni. A feladatok beadása a [moodle](https://moodle.hit.bme.hu/) rendszeren keresztül zajlik. A megoldáshoz a .c fájlokat egy .zip csomagba tömörítve adjátok be.

1.  **(1 pont)** `szorgalmi5_kommutativ.c`
    
    A Nexus 3 android gyártósoron a hibás egyedeket kivizsgálásra küldik. Az egyik ilyen selejtes példány vizsgálata közben jössz rá, hogy a gondok fő oka az elromlott logikai egységekben van. A hiba miatt ugyanis a replikánsok folyton felcserélik a műveletek sorrendjeit.
    
    Bizonyítsuk be, hogy a függvényhívás nem kommutatív művelet, keressünk két ilyen megfelelő \\(f\\) és \\(g\\) függvényt. Készítsünk két egyszerű függvényt, melyek egy-egy `int` típusú paramétert kérnek be, és szintén `int` típussal térnek vissza. Hívjuk meg a függvényeket az első 20 pozitív egészre, először \\( f(g(x)) \\), majd \\( g(f(x)) \\) sorrendben, a kapott eredményeket írjuk ki a képernyőre.
    
2. **(1 pont)** `szorgalmi5_binarisell.c`

    A régebbi Nexus replikánsok csak binárisan tudnak kommunikálni. Szavak helyett, 0-s és 1-eseket tartalmazó számsorozatokat küldenek ki a világ felé. Az egyik ilyen elromlott android viszont néha más számjegyeket is kiír, ekkor az ilyen üzenetet figyelmen kívül kell hagyni.

    Írjunk függvényt, amely bemenetként egy egész számot kap, kimenete pedig 1, ha a szám csak 0-s és 1-es számjegyeket tartalmaz, különben 0.

    *Segítség: mindig az 1-es helyiértéken lévő számjegyet ellenőrizzük modulo 10-es maradékkal és folyamatosan osszuk le 10-zel a számot.*

3. `szorgalmi5_collatz.c`

    Úgy döntesz, hogy a problémákat sürgősen jelented a Tyrell vállalat vezérigazgatójának személyesen, dr. Eldon Tyrellnek. Azonban ő csak az igazán magas intelligenciájú emberekkel hajlandó szóbaállni. Titkárnőjén keresztül üzeni, hogy csak akkor fogad, ha megmondod neki, melyik 1 és 1000 közötti számra generálódik a leghosszabb Collatz-sorozat.

    A Collatz-sorozat egészen egyszerű szabályokat követ. Vegyünk egy tetszőleges pozitív egész számot, legyen ez \\(a_0\\). Ha \\(a_0 = 1\\), akkor álljunk le, különben készítsük el a soron következő számot úgy, hogy
    * \\(a_{n + 1} = 3a_n + 1\\), ha \\(a_n\\) páratlan;
    * \\(a_{n + 1} = a_n / 2\\), ha \\(a_n\\) páros.
    
    A sorozat akkor áll le, ha \\(a_n = 1\\). (Az, hogy ez a sorozat minden pozitív egészre megáll, matematikailag nincs bebizonyítva, de az első 1000 számra biztos, hogy igaz.) Például ha \\(a_0 = 6\\), akkor a sorozat a következőképp néz ki: `6 3 10 5 16 8 4 2 1`, és a sorozat hossza 9.

    1. **(1 pont)** Írjuk meg az \\(f(n) = 3n + 1\\) függvényt.
    2. **(1 pont)** Írjuk meg az \\(f(n) = n/2\\) függvényt.
    3. **(1 pont)** Írjunk egy függvényt, amely bemenetként egy egész számot kér be, visszatérési értéke pedig a soron következő Collatz-szám. Használjuk az előző két részfeladat függvényeit!
    4. **(1 pont)** Írjunk egy függvényt, amely bemenetként megkapja az \\(a_0\\)-t, visszatérési értéke pedig az ebből generált Collatz-sorozat hossza. Használjuk az előző részfeladatban megírt függvényt. (Figyeljünk arra, hogy ha a bemenet 1, akkor egyből le kell állni!) *Segítség: `while` ciklus addig, amíg nem kapunk 1-et.*
    5. **(1 pont)** Írjunk egy programot, amely egy 1000 elemű tömbben eltárolja az első 1000 szám által generált Collatz-sorozat hosszát. Írjuk ki a leghosszabb sorozatot (de csak azt!).