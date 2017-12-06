---
title: Programozás Labor - 2017 - 2. ZH gyakorlás
description: Gyakorlunk Prog1 második ZH-ra.
header: Programozás Labor - 2017 - 2. ZH gyakorlás
categories: prog1lab, oktat
---

1. Egy hatalmas, több, mint 100 villamosmérnök hallgatóból álló csoport várakozik a BME I épületében, ahol A számítástudomány alapjaiból fognak szóbeli vizsgát tenni. A vizsga menete a következőképpen zajlik. A vizsga felügyelője addig hív be hallgatókat, amíg nem lesznek 20-an a teremben. Amint egy hallgató belépett a terembe, azonnal húz egy tételt és elkezdi azt kidolgozni. Amint a hallgató befejezte a tételkidolgozást, jelentkezik, és egy vizsgáztatóval elvonulva elkezdi a szóbelit. Mivel ekkor felszabadul egy hely a teremben, a felügyelő egyből be is hívja a következő vizsgázót.

    Írjunk progamot, amely időrendben kiírja a vizsgázók azonosító neptun kódját és a vizsgájuknak a kezdeti idejét. A hallgatók adatait a [hallgatok_kicsi.dat][1] (vagy a [hallgatok_nagy.dat][2]) bináris fájlfól olvassuk be. A fájlban a hallgatók adatai vannak egymás után: először egy 6 karakterből álló Neptun-kód, majd egy `double` érték, mely megmondja, mennyi idő kell egy hallgatónak a tételének kidolgozásához.

    1. Írjuk meg a hallgatókat tároló láncolt lista struktúráját, ami tartalmazza a hallgató neptun-kódját, gondolkodási idejét, valamint azt, hogy mikor fog sorra kerülni.

    2. Írjunk függvényt, mely megkap egy strázsa nélküli láncolt listát és egy hallgatót, és a sorra kerülés idejének sorrendjében beteszi a hallgatót a listába.

    3. Írjunk függvényt, mely kiveszi és kiírja (valamint kitörli) a következő soron lévő hallgatót a listából, és visszatér a hallgató sorra kerülésének idejével.

    4. Dolgozzuk fel a bináris fájlt, ügyeljünk a 20 fős létszámkorlátra.

    [Megoldás][3]

[1]: {{ site.url }}/download/hallgatok_kicsi.dat
[2]: {{ site.url }}/download/hallgatok_nagy.dat
[3]: https://gist.github.com/nguyentuanhai/49260163d8f594b197f18344b4b4ca3a