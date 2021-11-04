#include <iostream>

using namespace std;

struct timp {
    int ora;
    int minute;
    int secunde;
};

int main()
{
   // int n;
   // cin >> n;

   // struct timp t1 = { 1,1,1 }, t2;
   // struct timp istoric[2];
   // /*istoric = 00;
   // &(istoric[0]) = istoric = 00;
   // &(istoric[1]) = 01 = istoric       + sizeof(struct timp)
   //                    = &(istoric[0]) + sizeof(struct timp)
   // [00] [01]
   //  3     4 */
   // struct timp* salut;
   // //salut = [03]
   // salut = (struct timp*) malloc(n * sizeof(struct timp));
   ///*
   //salut[0] = 312;
   // ...
   //salut[n - 1] = 3213123;
   //*/
   // salut = (struct timp*) realloc(salut, (n*2) * sizeof(struct timp));
   // /*[<valoare> {adresa_urmator}]*/

    // -------------------2

    /*void* p = (void *)2;
    printf("%p, sizeof(p) = %d\n", p,sizeof(p));*/
    int a = 23;
    &a; // -> (int *)
    int* c = &a;
    *c = 3;
    cout << a << endl;
    char sir[5] = "abcd";
    int i;
    for (i = 0; i < 5; i++) { printf("%d ", sir[i]); } cout << endl;
    
    char* ptr_sir1 = sir;
    *ptr_sir1 = 'P';

    for (i = 0; i < 5; i++) { printf("%d ", sir[i]); } cout << endl;

    *(ptr_sir1 + 1) = 'Z'; // ptr_sir[1]
    for (i = 0; i < 5; i++) { printf("%d ", sir[i]); } cout << endl;
    *(ptr_sir1 + 2 * sizeof(*ptr_sir1)) = 70; //ptr_sir[2]
    for (i = 0; i < 5; i++) { printf("%d ", sir[i]); } cout << endl;

    int* ptr_sir2 = (int *)(void *)sir;
    //*ptr_sir2 = 5;

    ptr_sir2[0] = 5;
    for (i = 0; i < 5; i++) { printf("%d ", (unsigned char)sir[i]); } cout << endl;

    void******************** d;

    /*
    int** matr;
    [
        2 3 4 | < 1 >
        3 3 3 | < 1 >
    ] - > vrem sa adaugam coloana

        void funct(int **matr, ...) {} returneaza -> matr (modificata)
    */

    return 0;
}
