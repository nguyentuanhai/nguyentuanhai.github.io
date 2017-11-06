---
title: Programozás Labor - Szorgalmi 8.
description: A programozás alapjai 1. nyolcadik laborjának szorgalmi feladatai
header: Programozás Labor - Szorgalmi 8.
categories: prog1lab, oktat
---

A szorgalmi feladat elfogadásáért legalább 3 pontnyi feladatot kell beadni. A feladatok beadása a [moodle](https://moodle.hit.bme.hu/) rendszeren keresztül zajlik. A megoldáshoz a .c fájlokat egy .zip csomagba tömörítve adjátok be.

1. `szorgalmi8_boston.c`
    A bostoni maraton a világ egyik leghíresebb és legrégebbi versenye. Minden évben többtízezren jelentkeznek, de csak 35 ezren indulhatnak el. Ezért a jelentkezés nagyon szigorú szabályokhoz kötött: egy nemzetközileg is elismert egyesület által hitelesített másik maratonon kell szintidőn belül teljesíteni a távot az azt megelőző évben.
    
    A [szintido.txt][1] fájl tartalmazza az egyes korcsoportok szintidejét nemek szerint. A fájl első sora egy fejléc. Egy soron belül a külön oszlopokhaz tartozó adatok tabulátorral (`\t` karakterrel) vannak elválasztva. Pl. a `18-34\t3hrs 05min 00sec\t3hrs 35min 00sec` sor azt jelenti, hogy a 18 és 34 év közötti férfiaknak 3 óra 5 perc alatt, a nőknek pedig 3 óra 35 perc alatt kell lefutniuk a maratont.
    
    Az [eredmenyek.txt][2] tartalmazza a 2017-es budapesti maraton eredményeit. Az első sorban egy `n` szám található, a befutók száma. Utána `n` sor következik, minden sorban egy futó eredménye, amely 5 adatból áll: név, születési év, országkód, nem, eredmény `hh:mm:ss` formátumban, tabulátorokkal (`\t` karakterekkel) elválsztva.

    Készítsünk struktúrákat a megfelelő adatok eltárolására. Olvassuk be az adatokat a fájlokból és tároljuk el dinamikusan allokált tömbökben. A fájlokat csak egyszer szabad megnyitni és végigolvasni, a [szintido.txt][1] fájlról nem ismerjük a sorok számát! Az egyes adatelemekről (pl. név) feltételezhetjük, hogy 100 karakternél nem hosszabbak.

    *Segítség: a tabulátorok szerinti szétszedéshez használhatjuk például az `strtok()` függvényt. A szintidők beolvasásakor használhatunk `realloc()`-ot.*

    1. **(3 pont)** Hány futónak sikerült kvalifikálnia magát a bostoni maratonra, ebből hány magyar és hány külföldi?

    Megjegyzés: ez a feladat jellegében hasonlít a nagyházira.

    [1]: {{ site.url }}/download/szintido.txt
    [2]: {{ site.url }}/download/eredmenyek.txt

2. `szorgalmi8_szokereso.c`
    Picur már egészen jól tud programozni. Ezért már nem is kell figyelnie a programozás gyakorlatokon, helyette rejtvényeket fejt a pad alatt. A szókereső viszont nagyon lassan megy neki. Segítsünk Picurnak megtalálni a szavakat a szókeresőben. A rejtvényt a [szokereso.txt][3] fájlból olvassuk be. A fájl első  sora egy `n` szám, amely az n-szer n-es négyzet alakú betűkből álló tábla méretét írja le. Utána következik `n` sor, mindegyik sorban `n` darab betű.

    Tároljuk el a keresztrejtvényt egy n-szer n-es dinamikusan allokált kétdimenziós tömbben. Írjunk programot, mely a standard bemenetről egy legfeljebb 50 karakter hosszú szót kér be, és kiírja, hogy benne van-e a szó a táblázatban vagy sem.

    1. **(1 pont)** Oldjuk meg a feladatot úgy, hogy a szavak csak függőlegesen lefele vagy vízszintesen balról jobbra lehetnek.

    2. **(2 pont)** Oldjuk meg a feladatot úgy, hogy átlósan és/vagy akár fordítva is lehetnek a szavak.

    Megjegyzés: az alábbi szavakat kell megkeresni: ERTEK, FORDITO, KARAKTER, LISTA, MUVELET, NYELV, OPERATOR, PROGRAM, STRUKTURA, SZAM, SZO, TOMB, VALTOZO.

    [3]: {{ site.url }}/download/szokereso.txt