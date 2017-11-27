#include <stdio.h>
#include <stdlib.h>

typedef struct qnode_t {
    /* 
        TODO: ketiranyban lancolt lista struktura,
        amely tartalmaz egy grafpontot (egy szamot).
    */
} qnode_t;

qnode_t * create_elem(int vertex) {
    qnode_t * new_elem = NULL;
    /* 
        TODO: uj elem letrehozasa.
    */
    return new_elem;
}

void push_back(qnode_t ** head, qnode_t ** tail, int vertex) {
    qnode_t * new_elem = create_elem(vertex);
    /* 
        TODO: uj csucs hozzaadasa a lista vegehez.
    */
}

qnode_t * pop_front(qnode_t ** head, qnode_t ** tail) {
    qnode_t * res = NULL;
    /* 
        TODO: csucs kivetele a lista elejerol.
    */
    return res;
}

void print_queue(qnode_t * head) {
    /* 
        TODO: lancolt lista elemei kiiratasa.
    */
}

void print_queue_reversed(qnode_t * tail) {
    /* 
        TODO: lancolt lista elemei visszafele.
    */
}

void free_queue(qnode_t * head) {
    /* 
        TODO: lancolt lista felszabaditasa.
    */
}

void test_queue() {
    // tesztelo fuggveny
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
        TODO: 2D matrix kiirasa kepernyore.
    */
}

void print_array(int * arr, int size) {
    /* 
        TODO: tomb kiirasa kepernyore.
    */
}

int * bfs(int ** adj, int root, int n) {
    // prev[i]: melyik csucsbol megy a BFS fa az i. csucsba.
    int * prev = malloc(n * sizeof(int));

    // visited[i]: 1, ha az i. csucsot a BFS mar meglatogatta.
    int * visited = calloc(n, sizeof(int));
        
    // a BFS-hez FIFO lista eleje es vege. Ez a lista tartalmazza
    // azon csucsokat, amiket megjeloltunk latogatasra.
    qnode_t * head = NULL, * tail = NULL;

    /* 
        TODO: prev tomb feltoltese -1 ertekkel.
    */

    /* 
        TODO: allitsuk be a gyokerpontot meglatogatottnak.
    */
    
    /* 
        TODO: adjuk hozza azokat a csucsokat a FIFO-hoz,
        amiket majd meg kell latogatnunk.
    */

    // a ciklus addig megy, amig van meglatogatando csucs, azaz
    // ki nem urul a FIFO listank.
    while (head) {
        /*
            TODO: vegyuk elo a kovetkezo meglatogatando csucsot,
            es latogassuk meg (irjuk at a visited tombot).
        */
        /*
            TODO: rakjuk be a meglatogatott csucs szomszedjait a FIFO
            listankba, de csak akkor, ha meg nem latogattuk meg oket,
            tovabba jeloljuk be a prev tombben, hogy honnan latogatjuk
            meg oket. Az, hogy kik szomszedok, azt az adj matrix
            tartalmazza.
        */
        /*
            TODO: szabaditsunk fel minden memoriat, amit mar nem fogunk
            hasznalni.
        */
    }
    /*
        TODO: felszabadito hadműveletek vegrehajtasa.
    */

    // a fa eleit tartalmazo tombot adjuk vissza.
    // ha prev[root] nem -1, akkor valami el lett rontva.
    return prev;
}

void flow() {
    int n; // csucsok szama
    int e; // elek szama
    int ** jav; // javito graf szomszedossagi matrixa.
    FILE * infile = NULL;
    /* 
        TODO: Fajl megnyitasa.
    */
        
    if (infile == NULL) {
        printf("Could not open file.\n");
        return;
    }

    /*
        TODO: olvassuk be az elek es a csucsok szamat.
    */

    /*
        TODO: foglaljunk le memoriat az n*n-es matrixnak,
        es nullazzuk le az elemeit.
    */

    /*
        TODO: olvassuk be az eleket a szomszedossagi matrixba.
        Ne felejtsuk el bezarni a fajlt, hiszen mar nem kell.
    */
        
    // keressunk utat 0-bol (n-1)-be (s-bol t-be) BFS-sel.
    int * bfs_prev = bfs(jav, 0, n);

    // amig van ut az (n-1)-es csucsba
    while (bfs_prev[n - 1] != -1) {
        // most a bfs_prev tombbol kellene kihamozni egy utat 0-bol
        // (n-1)-be, majd az uton annyit javitani a jav. grafon,
        // amennyit csak tudunk.

        int to; // innen indul az el, amit vizsgalunk
        int from; // ide megy az el, amit vizsgalunk
        /*
            TODO: allitsuk be a to es from ertekeket. Javaslat: az ut
            utolso elenek a ket vegpontjat allitsuk be, tehat ami az
            (n-1)-be mutat.
        */
        int min = jav[from][to]; // ez tarolja az elsulyt, amivel javitunk.

        /*
            TODO: menjunk vegig a 0-bol (n-1)-be vezeto uton, es keressuk meg
            azt az erteket, amivel javitani tudunk az ut menten (az ut el-
            sulyainak a minimuma). Javaslat: hatulrol jarjuk be az utat, tehat
            (n-1)-ben kezdjunk es 0-ban vegezzunk.
        */
        
        /*
            TODO: ismeteljuk meg a vegigmenetelt, de ezuttal vegezzuk el a ja-
            vitasokat a jav grafban. Megjegyzes: ha jav[i][j]-n csokkentunk,
            akkor a jav[j][i]-n ugyanannyit novelnunk is kell majd.
        */
        free(bfs_prev);
        bfs_prev = bfs(jav, 0, n);
    }

    // algoritmus vege, kerdes: hol fog latszodni a folyam nagysaga?

    /*
        TODO: irassunk ki dolgokat es szabaditsunk fel mindent, amit meg nem
        szabaditottunk fel.
    */
}

int main() {
    // teszt();
    flow();
}