#include <stdio.h>
#include <stdlib.h>

typedef struct qnode_t {
    /* 
        TODO: kétirányban láncolt lista struktúra,
        amely tartalmaz egy gráfpontot (egy számot).
    */
} qnode_t;

qnode_t * create_elem(int vertex) {
    qnode_t * new_elem = NULL;
    /* 
        TODO: új elem létrehozása.
    */
    return new_elem;
}

void push_back(qnode_t ** head, qnode_t ** tail, int vertex) {
    qnode_t * new_elem = create_elem(vertex);
    /* 
        TODO: új csúcs hozzáadása a lista végéhez.
    */
}

qnode_t * pop_front(qnode_t ** head, qnode_t ** tail) {
    qnode_t * res = NULL;
    /* 
        TODO: csúcs kivétele a lista elejéről.
    */
    return res;
}

void print_queue(qnode_t * head) {
    /* 
        TODO: láncolt lista elemei kiíratása.
    */
}

void print_queue_reversed(qnode_t * tail) {
    /* 
        TODO: láncolt lista elemei visszafele.
    */
}

void free_queue(qnode_t * head) {
    /* 
        TODO: láncolt lista felszabadítása.
    */
}

void test_queue() {
    // tesztelő függvény
    qnode_t * head = NULL, * tail = NULL;

    push_back(&head, &tail, 3);
    push_back(&head, &tail, 4);
    push_back(&head, &tail, 2);
    push_back(&head, &tail, 1);
    push_back(&head, &tail, 1);
    push_back(&head, &tail, 9);

    print_queue(head); // 3 4 2 1 1 9
    print_queue_reversed(tail); // 9 1 1 2 4 3

    pop_front(&head, &tail); // return 3
    pop_front(&head, &tail); // return 4
    pop_front(&head, &tail); // return 2

    print_queue(head); // 1 1 9
    print_queue_reversed(tail); // 9 1 1

    pop_front(&head, &tail); // return 1
    pop_front(&head, &tail); // return 1
    pop_front(&head, &tail); // return 9
    pop_front(&head, &tail); // return NULL

    print_queue(head);
    print_queue_reversed(tail);

    free_queue(head);
}

void print_matrix(int ** mat, int cols, int rows) {
    /* 
        TODO: 2D mátrix kiírása képernyőre.
    */
}

void print_array(int * arr, int size) {
    /* 
        TODO: tömb kiírása képernyőre.
    */
}

int * bfs(int ** adj, int root, int n) {
    // prev[i]: melyik csúcsból megy a BFS fa az i. csúcsba.
    int * prev = malloc(n * sizeof(int));

    // visited[i]: 1, ha az i. csúcsot a BFS már meglátogatta.
    int * visited = calloc(n, sizeof(int));
        
    // a BFS-hez FIFO lista eleje és vége. Ez a lista tartalmazza
    // azon csúcsokat, amiket megjelöltünk látogatásra.
    qnode_t * head = NULL, * tail = NULL;

    /* 
        TODO: prev tömb feltöltése -1 értékkel.
    */

    /* 
        TODO: állítsuk be a gyökérpontot meglátogatottnak.
    */
    
    /* 
        TODO: adjuk hozzá azokat a csúcsokat a FIFO-hoz,
        amiket majd meg kell látogatnunk.
    */

    // a ciklus addig megy, amíg van meglátogatandó csúcs, azaz
    // ki nem ürül a FIFO listánk.
    while (head) {
        /*
            TODO: vegyük elő a következő meglátogatandó csúcsot,
            és látogassuk meg (írjuk át a visited tömböt).
        */
        /*
            TODO: rakjuk be a meglátogatott csúcs szomszédjait a FIFO
            listánkba, de csak akkor, ha még nem látogattuk meg őket,
            továbbá jelöljük be a prev tömbben, hogy honnan látogatjuk
            meg őket. Az, hogy kik szomszédok, azt az adj mátrix
            tartalmazza.
        */
        /*
            TODO: szabadítsunk fel minden memóriát, amit már nem fogunk
            használni.
        */
    }
    /*
        TODO: felszabadító hadműveletek végrehajtása.
    */

    // a fa éleit tartalmazó tömböt adjuk vissza.
    // ha prev[root] nem -1, akkor valami el lett rontva.
    return prev;
}

void flow() {
    int n; // csúcsok száma
    int e; // élek száma
    int ** jav; // javító gráf szomszédossági mátrixa.
    FILE * infile = NULL;
    /* 
        TODO: Fájl megnyitása.
    */
        
    if (infile == NULL) {
        printf("Could not open file.\n");
        return;
    }

    /*
        TODO: olvassuk be az élek és a csúcsok számát.
    */

    /*
        TODO: foglaljunk le memóriát az n*n-es mátrixnak,
        és nullázzuk le az elemeit.
    */

    /*
        TODO: olvassuk be az éleket a szomszédossági mátrixba.
        Ne felejtsük el bezárni a fájlt, hiszen már nem kell.
    */
        
    // keressünk utat 0-ból (n-1)-be (s-ből t-be) BFS-sel.
    int * bfs_prev = bfs(jav, 0, n);

    // amíg van út az (n-1)-es csúcsba
    while (bfs_prev[n - 1] != -1) {
        // most a bfs_prev tömbből kellene kihámozni egy utat 0-ból
        // (n-1)-be, majd az úton annyit javítani a jav. gráfon,
        // amennyit csak tudunk.

        int to; // innen indul az él, amit vizsgálunk
        int from; // ide megy az él, amit vizsgálunk
        /*
            TODO: állítsuk be a to és from értékeket. Javaslat: az út
            utolsó élének a két végpontját állítsuk be, tehát ami az
            (n-1)-be mutat.
        */
        int min = jav[from][to]; // ez tárolja az élsúlyt, amivel javítunk.

        /*
            TODO: menjünk végig a 0-ból (n-1)-be vezető úton, és keressük meg
            azt az értéket, amivel javítani tudunk az út mentén (az út él-
            súlyainak a minimuma). Javaslat: hátulról járjuk be az utat, tehát
            (n-1)-ben kezdjünk és 0-ban végezzünk.
        */
        
        /*
            TODO: ismételjük meg a végigmenetelt, de ezúttal végezzük el a ja-
            vításokat a jav gráfban. Megjegyzés: ha jav[i][j]-n csökkentünk,
            akkor a jav[j][i]-n ugyanannyit növelnünk is kell majd.
        */
        free(bfs_prev);
        bfs_prev = bfs(jav, 0, n);
    }

    // algoritmus vége, kérdés: hol fog látszódni a folyam nagysága?

    /*
        TODO: írassunk ki dolgokat és szabadítsunk fel mindent, amit még nem
        szabadítottunk fel.
    */
}

int main() {
    // teszt();
    flow();
}