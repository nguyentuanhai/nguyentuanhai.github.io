---
title: Számtud 1. ZH tipikus hibák
description: Tipikus hibák és rossz megoldások a 2017-es 1. számtud nagyZH-ra.
header: Számtud 1. ZH tipikus hibák
categories: sza, oktat
---

1. **15 fiú és 15 lány közül kell kiválasztani egy 10 fős csoportot úgy, hogy legalább 2 fiú és legalább 2 lány legyen.**

    * **Egy tipikus rossz megoldás:** válasszunk ki 2 fiút és 2 lányt, majd a maradék 26 közül még vegyünk 6 embert. Ezt \\( \binom{15}{2}\binom{15}{2}\binom{26}{6} \\)-féleképpen tehetjük meg.
    
        Ez azért rossz, mert egy csomó esetet többször is számolunk. Például követve a rossz megoldás módszerét kiválasztom először a két fiút, Ádámot és Bélát, majd kiválasztom a két lányt Annát és Beát. Utána pedig veszek 6 további embert, mondjuk Cecil, Dénes, Elemér, Fanni, Gábor és Hugó. Most nézzünk egy másik esetet, először kiválasztok megint két fiút, mondjuk Dénest és Hugót, majd két lányt, mondjuk Annát és Fannit. Utána pedig kiválasztok 6 másikat, akik pont Ádám, Béla, Bea, Cecil, Elemér és Gábor. Látjuk, hogy a rossz megoldás ugyanazt az embercsoportot tévesen külön számolta, pedig csak egyszer szabadna.

2. **Bizonyítsuk be, hogy ha egy 10 csúcsú gráfnak 9 csúcsa pontosan 5-ödfokú, akkor a gráf összefüggő.**

    * **Rossz megoldás 1:** Tudjuk, hogy 9 csúcsnak pont 5 a foka, és hogy nem lehet a fokszámok összege páratlan, ezért a tizedik csúcsból muszáj, hogy kiinduljon él. Ez azt jelenti, hogy nem lesz izolált pont, azaz a gráf összefüggő.

        Ez az indoklás nem teljes, mert nem elég azt bizonyítani, hogy a tizedik csúcs nem lesz különálló pont, azt is meg kell mutatni, hogy a maradék gráf is összefüggő. Ez az indoklás nem zárja ki azt az esetet, ha a tizedik csúcsot összezárjuk pár ötödfokú csúccsal, és a maradék csúcsok pedig külön komponenst alkotnak.

    * **Rossz megoldás 2:** Vegyünk 10 csúcsot és próbáljuk meg mohón behúzni az éleket úgy, hogy a fokok száma 5 legyen az első 9 esetben. (Az első csúcsot összekötöm a következő 5 csúccsal, a második csúcsot a rákövetkező 4 csúccsal, stb.) Azt látjuk, hogy így nem sikerül jó nem összefüggő gráfot rajzolni, ezért biztos, hogy összefüggő lesz.

        Attól, hogy még mohón nem lehet rajzolni megfelelő ellenpéldát az nem azt jelenti, hogy más módszerrel sem lehet. Indoklással ki kell zárni azt az esetet is, ha mondjuk akármilyen más módon kötöm össze a gráfot.

3. **Az ábrán lévő irányítatlan, súlyozott gráfba húzzunk be egy új élt. Mennyi legyen az új él súlya, hogy legyen egy olyan minimális feszítőfa, ami tartalmazza az új élt.**

    * Itt sokan rájöttek, hogy ha az új él súlya 5, akkor az még bekerülhet a minimális feszítőfába. Néhányan viszont nem olvasták el figyelmesen a feladatot, ezért azt írták, hogy az élsúly maximum 4 lehet, hogy biztosan bekerüljön a minmális feszítőfába. (Amúgy meg az sincs odaírva, hogy egésznek kell lennie a súlyoknak.)

4. **BFS után hány keresztél lesz a gráfban.**

    * Itt sokan nem tudták, hogy pontosan mi is az a keresztél. Egy rossz tipp az az, hogy a gyökértől azonos távolságra levő pontokat összekötő nem fabeli él. Ezek nyilván kersztélek lesznek, de még ezeken túl minden nem előre- (vagy vissza-, ami itt nincs irányítatlan esetben,) él az keresztél.

5. **Keressük meg azt az utat a gráfban, amely mentén a legtöbb kincset össze tudjuk szedni.**

    * Tulajdonképpen a leghosszabb utat keressük ebben a körmentes (!) gráfban. Néhányan valamilyen Dijkstra vagy Ford módosítással próbálkoztak. Úgy általánosan elmondható, hogy egy gráfban a leghosszabb utak keresése nem egy egyszerű feladat, és Dijkstra-val nem érdemes próbálkozni, mert a maximum függvény nem tesz eleget a jóság függvények szükséges feltételeinek. Ha egész véletlenül mégis kijött a jó megoldás, arra sem adtunk pontot, mert ez egy elvi hiba. A feladatot PERT-tel kellett megoldani, bár a legrövidebb utak algoritmusokat is lehet használni kivételesen (amik jóval hosszabbak és bonyolultabbak, mint a PERT). Bővebben: https://en.wikipedia.org/wiki/Longest_path_problem

6. **Van-e Hamilton-kör a gráfban?**

    * Mivel erre a feladatra nem érkezett be elég sok megoldás, itt nem igazán voltak tipikus hibák. Tulajdonképpen a legtöbben, akik megpróbálkoztak ezzel a feladattal, rájöttek, hogy valahogy Dirac- vagy Ore-tétel kell és ügyes számolgatás után ki is jött, hogy minden csúcs foka 14 lesz, ami teljesíti a Dirac feltételt.

    * Ez nem volt egy nehéz feladat, és mégis kevesen oldották meg. Érdemes megjegyezni, hogy az IMSC pontokat nem a csillagos feladattal, hanem a többlet pontokkal lehet szerezni. Azaz a csillagos feladat kitüntetett szerepe csupán illúzió.

    * Itt egy megjegyzés a Dirac-/Ore-tételekhez, hogy **nem kell kikötni az összefüggőséget**. Ha teljesül a gráfra a feltétel, akkor van benne Hamilton-kör; és ha van benne Hamilton-kör, akkor összefüggő. (Ez már nem igaz az Euler-körökre, ahol az összefüggőség fontos feltétel.)