---
layout: page
title: Oktat
---

# A programozás alapjai 1.

## Gyakori hibák

* **Változó méretű tömb**
    
    Az első kisZH-ban gyakori *"hiba"* volt, hogy beolvasunk egy `n` értéket, ezután megpróbálunk deklarálni egy `n` méretű tömböt.

    ```
    int foo() {
        int size;
        scanf("%d", &size);
        int array[size];
    }
    ```

    Ezt az újabb szabványok megengedik, és a kód le is fordul egyes fordítók esetén (`gcc` vagy `clang`), azonban ez a funkció nincs mindenhol beépítve így az általunk (azaz a Visual Studio által) használt `MSVC`-ben sem. Ha a tömb méretét futás közben (futási időben) szeretnénk megadni, akkor használjunk `malloc`-ot (amit később tanulunk).

    ```
    int foo() {
        int size;
        scanf("%d", &size);
        int * array = (int *) malloc(size * sizeof(int));
        // ...
        free(array);
    }
    ```

* **Változó inkrementálása**

    Néhány embernél tapasztaltuk a következő hibát mind kis- és nagyZH-ban.

    ```
    a = a++;
    ```

    A költő itt valószínűleg meg akarta növelni `a` értékét 1-gyel, azonban ahhoz elég az `a++` vagy az `a = a + 1`. A fenti kód egy ún. `undefined behavior`, azaz nem definiált viselkedés, ami szimplán azt jelenti, hogy akármi lehet, tehát hibás.