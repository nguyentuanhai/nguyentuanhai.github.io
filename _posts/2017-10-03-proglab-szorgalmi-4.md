---
title: Programozás Labor - Szorgalmi 4.
description: A programozás alapjai 1. negyedik laborjának szorgalmi feladatai
header: Programozás Labor - Szorgalmi 4.
categories: prog1lab, oktat
---

A szorgalmi feladat elfogadásáért legalább 3 pontnyi feladatot kell beadni. A feladatok beadása a [moodle](https://moodle.hit.bme.hu/) rendszeren keresztül zajlik. A megoldáshoz a .c fájlokat egy .zip csomagba tömörítve adjátok be.

1.  `szorgalmi4_szonyegdarab.c`
    
    *Egy játékterem közepén ülsz, mikor hirtelen egy laborköpenyes öregember egy hatalmas sisakot erőszakol a fejedre. A világ hirtelen elsötétül körülötted és a gondolataid, mint valami turmixgépben, szilánkokká bomlanak és egy összetett keverékké kavarodnak. Mikor ismét kinyitod a szemed, a saját ágyadban találod magad. "Csak egy rossz álom volt" mondod magadban, hiszen te Roy vagy, egy egyszerű vidéki szőnyegárus...*
    
    * **(1 pont)**
        Egy szőnyegboltban dolgozol és egy új rakomány szőnyeg érkezett a reggel. Húszfajta szőnyegből rendeltél. Számoljuk meg, hogy az egyes fajtákból mennyi érkezett.

        Írjunk programot, mely elsőként beolvassa, hogy hány szőnyeg érkezett (legyen ez a szám n), majd beolvas n darab számot (1 és 20 között), melyek a szőnyeg típusát határozzák meg. Tároljuk el az adatokat egy 20 elemű tömbben és írjuk ki a program végén, hogy melyik szőnyegfajtából mennyi érkezett.

    * **(1 pont)**
        A szőnyegeket egy hatalmas szekrény polcain tárolod. Egy polcra max 3 szőnyeg fér fel,  és csak egyfajtát rakhatsz rá. Egy polcon pontosan 3 darab szőnyeg lehet, azaz ha maradt még (3-nál kevesebb) szőnyeg, akkor azokat behajítod egy szekrénybe tartaléknak. Hány szőnyeg kerül így a tartalék szekrénybe?

        Írjunk progamot, ami megszámolja, hogy az egyes szőnyegfajtákból hány marad, miután megpróbáltuk felrakni őket a polcra, és írjuk ki az összes maradék szőnyeg számát.


        ```
        Pl.:
        Input:
        5
        2
        2
        2
        2
        1
        Output: Osszesen 2 maradek van.
        ```

2. **(1 pont)** `szorgalmi4_szonyeghossz.c`
    
    Minden egyes szőnyegfajtából pontosan 200 méternyit rendeltél. Sajnos a szőnyeggyárban kavarodás történt. Egyrészt nem sikerült egységesen legyártani a termékeket, így előfordulhat, hogy különböző hosszúak, másrészt nem sikerült rendesen felvenniük a rendelésed, ezért lehet, hogy valamelyik szőnyegfajtából nem sikerült 200 métert feladniuk, valamiből pedig lehet, hogy túl sokat gyártottak neked. Számoljuk meg, hogy mely szőnyegfajtákból adtak fel túl sokat, és melyekből túl keveset.
    
    Írjunk programot, mely elsőként beolvassa, hogy hány szőnyeg érkezett (legyen ez a szám n), majd beolvas n darab számpárt, mely közül az első a szőnyeg típusát, a második a szőnyeg hosszát jelenti. Először írjuk ki, hogy mely szőnyegfajtákból nem érkezett elég, majd írjuk ki, hogy mely szőnyegfajtákból jött túl sok.

    ```
    Pl.:
    Input:
    5
    1 100
    2 110
    1 50
    3 220
    2 80
    Output:
    1 tipusubol meg 50 meter hianyzik.
    2 tipusubol meg 10 meter hianyzik.
    3 tipusubol 20 meterrel tobb van.
    ```

3. **(2 pont)** `szorgalmi4_szonyegakcio.c`

    Kiárusítás alkalmával egy különleges akció keretén belül különféle kedvezményeket kaphatnak a vevők. Ha valaki egy bizonyos fajtájú szőnyegből legalább 3-at vásárol, akkor a legolcsóbbat megkapja ingyen. Számoljuk ki, hogy így mennyit kell fizetnie egy vásárlónak összesen a szőnyegekért.

    Írjunk programot, amely bekéri a vásárolt szőnyegek számát (n), majd utána bekér n darab számpárt, mely közül az első a szőnyeg típusát határozza meg, a második a szőnyeg árát. Írjuk ki a fizetendő összeget, figyelembe véve a kedvezményt.

    ```
    Pl.:
    Input:
    4
    1 15
    1 32
    1 8
    2 24
    Output: 71
    ```

4. **(2 pont)** `szorgalmi4_primek.c`

    Egy munkatársad arra kér, hogy emeld le neki a perzsaszőnyeget a polcról. Felállsz a sámlira, és már nyújtanád a karjaid a szőnyegért, mikor megcsúszol a sámlin, és az kibillen alólad. Hanyattvágódsz és összetöröd magad. A világ ismét elsötétül és elkezd filmszalagként leperegni előtted a csodálatos életed. De az emlékfoszlányok mellett számok is megjelennek az elmédben. Méghozzá az első 1000 szám, ráadásul úgy, hogy a prímek piros színnel, a nem prímek kék színnel.

    Írjunk programot, mely meghatározza az első 1000 számról, hogy prím-e vagy sem. Hozzunk létre egy 1000 elemű tömböt, ami csak 1-eseket tartalmaz, majd írjuk át a tömb elemeit 0-ra, ha azok nem prímek!

    *Segítség: azokat a tömbelemeket kell átírni 0-ra, melyeknek az indexe osztható valamely másik (nem 1) tömbindexszel.*
    
    *Segítség2: keressük Arkhimédész jóbarátját.*