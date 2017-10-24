---
title: Programozás Labor - Szorgalmi 7.
description: A programozás alapjai 1. hetedik laborjának szorgalmi feladatai
header: Programozás Labor - Szorgalmi 7.
categories: prog1lab, oktat
---

A szorgalmi feladat elfogadásáért legalább 3 pontnyi feladatot kell beadni. A feladatok beadása a [moodle](https://moodle.hit.bme.hu/) rendszeren keresztül zajlik. A megoldáshoz a .c fájlokat egy .zip csomagba tömörítve adjátok be.

1. `szorgalmi7_csokik.c`
    Gombóc Artúr imádja a csokoládékat. Különösképpen a kerek, a szögletes, a hosszú, a rövid, a gömbölyű, a lapos, a tömör, a lyukas, a csomagolt, a meztelen, az egész, a megkezdett, az édes, a keserű, a csöves,a mogyorós, a tej-, a likőrös, a tavalyi, az idei és minden egyéb csokoládét.

    1. **(1 pont)** Hozzunk létre egy `enum` típust a Gombóc Artúr által szeretett csokoládéfajtákra.

    2. **(1 pont)** Gombóc Artúr születésnapjára különféle méretű bonbonos dobozokat kapott, melyek több, különböző típusú csokoládét is tartalmaznak. Főhősünk úgy döntött, hogy a csokoládékat leltárba veszi. Hozzunk létre egy csokileltár struktúrát, ami számon tartja, hogy az egyes típusú csokoládékból összesen hány darabja van Gombóc Artúrnak. Írjunk egy függvényt, mely bemenetként bekéri a leltár címét és egy bonbonos doboz tartalmát tömb formájában és ez alapján frissíti a leltárat.

    3. **(1 pont)** A csokoládék sajnos nagyon hízlalják Gombóc Artúrt. A rövid, a lapos, a lyukas, a megkezdett és a keserű csokoládétól 1 kilót, az édes és a tejcsokitól 3 kilót, minden más csokitól 2 kilót hízik. Továbbá az is köztudott, hogy Artúr mindig abból a csokoládéfajtából eszik meg egyet, amelyikből a legtöbb van neki (ha több ilyen is van, akkor azok közül valamelyiket). Írjunk függvény, amely egy csokoládéfogyasztást ír le. Bemenetként megkapja a leltár címét, és a leltárból levonja a megfelelő típusú csokoládét. Visszatérési értékként pedig visszaadja, hogy mennyit hízott Gombóc Artúr a csokoládétól.

    4. **(1 pont)** A Radírpók is nagyon szereti a csokit. A kedvence a keserű csokoládé, viszont az édes csokoládét nem kedveli annyira. Gombóc Artúr ezért nagyvonalúan megengedi neki, hogy a bonbonos dobozaiból a keserű csokoládékat kivegye, azonban a helyükbe egy-egy édes csokoládét kell tennie cserébe. Írjunk függvényt, amely bemenetként megkap egy csokis tömböt, azokban kicseréli a keserű csokikat édesre és visszatér a megszerzett keserű csokoládék számával.