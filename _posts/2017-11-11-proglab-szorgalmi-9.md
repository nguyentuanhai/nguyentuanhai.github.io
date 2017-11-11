---
title: Programozás Labor - Szorgalmi 9.
description: A programozás alapjai 1. kilencedik laborjának szorgalmi feladatai
header: Programozás Labor - Szorgalmi 9.
categories: prog1lab, oktat
---

A szorgalmi feladat elfogadásáért legalább 3 pontnyi feladatot kell beadni. A feladatok beadása a [moodle](https://moodle.hit.bme.hu/) rendszeren keresztül zajlik. A megoldáshoz a .c fájlokat egy .zip csomagba tömörítve adjátok be.

1. `szorgalmi9_pakli.c`
    Gombóc Artúr eljátszotta minden csokolédáját pókeren. Ezért úgy döntött, hogy otthon elkezd gyakorolni, hogy legközelebb visszanyerhesse midenét. A gyakorláshoz egy számítógépes póker szimulátort szeretne használni. Segítsünk Gombóc Artúrnak megírni egy ilyen programot.

    A pókert franciakártyákkal játsszák. Egy lapnak két attribútuma van, a szám (2-től 10-ig valamint a bubi, a dáma, a király és az ász) és a szín (kőr, káró, treff, )

    1. **(1 pont)** Írjunk programot, amely a [franciapakli.txt][1] fájlból beolvassa egy összekevert pakli lapjait és egy láncolt listába teszi őket. A fájl 52 sort tartalmaz, mindegyik sorban egy lap információi. Soronként az első adat a lap száma (`2-10`, `J`, `Q`, `K`, `A`), a második érték a lap színe (`KOR`, `KARO`, `PIKK`, `TREFF`). Természetesen hozzunk létre megfelelő adatstruktúrát.

    2. **(1 pont)** Írjunk függvényt, amely a pakliból kioszt 5-5 lapot 4 játékosnak. Ehhez a függvény kérjen be egy tömböt, ami a négy játékos kezében lévő lapjainak a láncolt listájának a "fejét" tartalmazza. A lapokat felváltva, egyesével osztogassa. FONTOS: egy lap csak egy emberhez kerülhet!

    3. **(1 pont)** Egy játékos a lapok osztása után dönthet úgy, hogy néhányat eldob, és húz helyette újakat. Írjunk függvényt, mely bemenetként megkapja a játékos lapjait reprezentáló láncolt listát, és egy max 5 elemű tömböt, ami az eldobandó lapok sorszámait tartalmazza. Az egyes sorszámokhoz tartozó lapokat vegyük ki a kézből, és dobjuk el őket, majd adjunk a játékos kezébe annyi lapot a pakli tetejéről, hogy ismét 5 lap legyen a kezében.

    4. Írjunk függvényt, amely egy játékos kezében lévő lapjairól eldönti, hogy tartalmaz-e (ezekre csak akkor kaphatsz pontot, ha az 1-es feladatot megcsináltad):
        * **(1 pont)** [royal flush-t](https://hu.wikipedia.org/wiki/K%C3%A1rtyakombin%C3%A1ci%C3%B3k_(p%C3%B3ker)#Roj.C3.A1lfl.C3.B6s_.28royal_flush.29);
        * **(1 pont)** [színsort](https://hu.wikipedia.org/wiki/K%C3%A1rtyakombin%C3%A1ci%C3%B3k_(p%C3%B3ker)#Sz.C3.ADnsor_.28straight_flush.29);
        * **(1 pont)** [pókert](https://hu.wikipedia.org/wiki/K%C3%A1rtyakombin%C3%A1ci%C3%B3k_(p%C3%B3ker)#P.C3.B3ker_.28four_of_a_kind.29);
        * **(1 pont)** [full house-t](https://hu.wikipedia.org/wiki/K%C3%A1rtyakombin%C3%A1ci%C3%B3k_(p%C3%B3ker)#Full_.28full_house.29);
        * **(1 pont)** [flush-t](https://hu.wikipedia.org/wiki/K%C3%A1rtyakombin%C3%A1ci%C3%B3k_(p%C3%B3ker)#Fl.C3.B6s_.28flush.29);
        * **(1 pont)** [sort](https://hu.wikipedia.org/wiki/K%C3%A1rtyakombin%C3%A1ci%C3%B3k_(p%C3%B3ker)#Sor_.28straight.29);
        * **(1 pont)** [drillt](https://hu.wikipedia.org/wiki/K%C3%A1rtyakombin%C3%A1ci%C3%B3k_(p%C3%B3ker)#Drill_.28three_of_a_kind.29);
        * **(1 pont)** [két párt](https://hu.wikipedia.org/wiki/K%C3%A1rtyakombin%C3%A1ci%C3%B3k_(p%C3%B3ker)#K.C3.A9t_P.C3.A1r_.28two_pair.29);
        * **(1 pont)** [párt](https://hu.wikipedia.org/wiki/K%C3%A1rtyakombin%C3%A1ci%C3%B3k_(p%C3%B3ker)#Egy_P.C3.A1r_.28pair.29).

    [1]: {{ site.url }}/download/franciapakli.txt
   