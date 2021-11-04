#include <iostream>


using namespace std;

// ...   

int update1(int ceva) 
{
    return ceva;
}
int update2(int tema)
{
    return tema + 1;
}
int update3(int ceva)
{
    int aux = ceva;
    aux++;
    return aux;
}
void update4(int *ceva) 
{
    *ceva = *ceva + 1;
}


void update5(int* arr, int n)
{
    *arr = *arr + 1; // arr[0] = arr[0] + 1;
    
}
void update6(int **sir, int *n)
{
    //*sir = *sir + n; 
    //*(sir - 1) = 3;
    cout << "f:" << sir;
    *sir = (int*)realloc(*sir, (*n+1)*sizeof(int));
    (*n)++;
    cout << " " << sir << endl;
    (*sir)[(*n) - 1] = 9;
}
int main()
{
    int a = -1;
    int* adr_a = &a;
    a = 3;
    cout << a << endl;

    int a1 = -1;
    a1 = update1(a);
    cout << a << " : " << a1 << endl;
    int a2 = -1;
    a2 = update2(a);
    cout << a << " : " << a2 << endl;
    int a3 = -1;
    a3 = update3(a);
    cout << a << " : " << a3 << endl;
    update4(&a);
    cout << a << endl;

    int sir1[] = { 1,2,3,5,6 }; // int *sir1 = mallocat si initializat cu {1,2,3}

    int size_sir1 = sizeof(sir1) / sizeof(int);
    cout << size_sir1 << endl;

    int* sir2 = NULL;
    sir2 = (int*) malloc(2 * sizeof(int));
    sir2[0] = 7;
    sir2[1] = 8;

    int n = 2;
    cout << "main: " << sir2 << endl;
    update6(&sir2, &n);
    cout << " main: " << sir2 << endl;
    int i; 
    for (i = 0; i < n; i++) 
    {
        cout << sir2[i] << " ";
    }
    cout << endl;

    //sir2[0] = 1;
    //sir2[1] = 2;
    //sir2[2] = 3;
    //for (i = 0; i < n + 1; i++)
    //{
    //    cout << sir2[i] << " ";
    //}
    //cout << endl;


    return 0;
}
