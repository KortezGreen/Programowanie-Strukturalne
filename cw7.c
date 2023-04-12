#include <stdio.h>
#include <stdlib.h>
#include <math.h>


//4.2.14 
double* dynamiczna(int n)
{
    double* tab = (double*) malloc(n * sizeof(double));
    return tab;
}

//4.2.16 
void dynamiczna2(double* tabl, int n)
{
    if (tabl != NULL)
    {
        free(tabl);
    }
}

//4.2.17 

double* kopia_tab(int n, double* tab)
{
    double* kopia = (double*) malloc(n * sizeof(double));
    for (int i = 0; i < n; i++)
    {
        kopia[i] = tab[i];
    }
    return kopia;
}

//4.2.19
int* zero(int n, int* tab1)
{
    int licz = 0;
    for (int i = 0; i < n; i++)
    {
        if (tab1[i] != 0)
        {
            licz++;
        }
    }
    int* tab2 = (int*) malloc(licz * sizeof(int));
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        if (tab1[i] != 0)
        {
            tab2[j] = tab1[i];
            j++;
        }
    }
    return tab2;
}


int main()
{

//4.2.14 
int n = 10;
double* tab = dynamiczna(n);
for (int i = 0; i < n; i++)
{
    tab[i] = i * 0.1;
    printf("%f ", tab[i]);
}
    free(tab);

//4.2.16 
int n = 10;
double* tabl = (double*) malloc(n * sizeof(double));
for (int i = 0; i < n; i++)
{
    tabl[i] = i * 0.1;
    printf("%f ", tabl[i]);
}
dynamiczna2(tabl, n);

//4.2.17 
    int n = 10;
    double tab[n];
    for (int i = 0; i < n; i++)
    {
        tab[i] = i * 0.1;
    }
    double* kopia = kopia_tab(n, tab);
    printf("Pierwotna tabela: ");
    for (int i = 0; i < n; i++)
    {
        printf("%f ", tab[i]);
    }
    printf("\n");
    printf("Kopia tabeli: ");
    for (int i = 0; i < n; i++)
    {
        printf("%f ", kopia[i]);
    }
    printf("\n");
    free(kopia);


//4.2.19
    int n = 10;
    int tab1[] = {1, 0, 3, 0, 5, 0, 7, 0, 9, 0};
    int* tab2 = zero(n, tab1);
    printf("Tablica: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", tab1[i]);
    }
    printf("\n");
    printf("Niezerowe: ");
    for (int i = 0; i < n/2; i++)
    {
        printf("%d ", tab2[i]);
    }
    printf("\n");
    free(tab2);


    return 0;
}
