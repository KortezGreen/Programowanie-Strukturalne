#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//4.2.1
void zero(int n, int tab[])
{
    for (int i=0; i<n; i++)
{
    tab[i] = 0;
}
}

void indeksy(int n, int tab[])
{
    for (int i=0; i<n; i++)
{
    tab[i] = i;
}
}

void podwajacz(int n, int tab[])
{
    for (int i=0; i<n; i++)
{
    tab[i] = tab[i]*2;
}
}

void absolut(int n, int tab[])
{
    for (int i=0; i<n; i++)
{
    tab[i] = abs(tab[i]);
}
}

//4.2.4
double geo(unsigned int n, unsigned int tab[])
{
    double iloczyn = 1.0;
    for (unsigned int i = 0; i < n; i++)
    {
        iloczyn *= tab[i];
    }
    return pow(iloczyn, 1.0 / n);
}

//4.2.6
void przepisz(int n, int tab1[], int tab2[]) {
    for (int i = 0; i < n; i++) {
        tab2[i] = tab1[i];
    }
}

void odwrotnie(int n, int tab1[], int tab2[]) {
    for (int i = 0; i < n; i++) {
        tab2[n-1-i] = tab1[i];
    }
}

//4.2.7
void sumuj_t(int n, int tab1[], int tab2[], int tab3[]) {
    for (int i = 0; i < n; i++) {
        tab3[i] = tab1[i] + tab2[i];
    }
}

void wieksze_t(int n, int tab1[], int tab2[], int tab3[])
{
    for (int i = 0; i < n; i++) {
        tab3[i] = (tab1[i] > tab2[i]) ? tab1[i] : tab2[i];
    }
}

void przepisz_t(int n, int tab1[], int tab2[], int tab3[])
{
    for (int i = 0; i < n; i++) {
        tab2[i] = tab1[i];
        tab3[i] = tab2[i];
        tab1[i] = tab3[i];
    }
}

//4.2.10
int findMax(int n, int tab[])
{
    int max = tab[0];
    for(int i = 1; i < n; i++)
    {
        if(tab[i] > max)
        {
            max = tab[i];
        }
    }
    return max;
}

int findMin(int n, int tab[])
{
    int min = tab[0];
    for(int i = 1; i < n; i++)
    {
        if(tab[i] < min)
        {
            min = tab[i];
        }
    }
    return min;
}

int findMaxIndex(int n, int tab[])
{
    int max = tab[0];
    int maxIndex = 0;
    for(int i = 1; i < n; i++)
    {
        if(tab[i] > max)
        {
            max = tab[i];
            maxIndex = i;
        }
    }
    return maxIndex;
}

int findMinIndex(int n, int tab[])
{
    int min = tab[0];
    int minIndex = 0;
    for(int i = 1; i < n; i++)
    {
        if(tab[i] < min)
        {
            min = tab[i];
            minIndex = i;
        }
    }
    return minIndex;
}

int findMaxAbs(int n, int tab[])
{
    int max = abs(tab[0]);
    for(int i = 1; i < n; i++)
    {
        if(abs(tab[i]) > max)
        {
            max = abs(tab[i]);
        }
    }
    return max;
}

int findMaxAbsIndex(int n, int tab[])
{
    int max = abs(tab[0]);
    int maxIndex = 0;
    for(int i = 1; i < n; i++)
    {
        if(abs(tab[i]) > max)
        {
            max = abs(tab[i]);
            maxIndex = i;
        }
    }
    return maxIndex;
}

//4.2.12

void reverse(int n, int tab[])
{
    int temp;
    for (int i = 0; i < n/2; i++)
    {
        temp = tab[i];
        tab[i] = tab[n-i-1];
        tab[n-i-1] = temp;
    }
}

void shift_left(int n, int tab[])
{
    int temp = tab[0];
    for (int i = 1; i < n; i++)
    {
        tab[i-1] = tab[i];
    }
    tab[n-1] = temp;
}

void shift_right(int n, int tab[])
{
    int temp = tab[n-1];
    for (int i = n-2; i >= 0; i--)
    {
        tab[i+1] = tab[i];
    }
    tab[0] = temp;
}

void sort_asc(int n, int tab[])
{
    int temp;
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (tab[i] > tab[j])
            {
                temp = tab[i];
                tab[i] = tab[j];
                tab[j] = temp;
            }
        }
    }
}

void sort_desc(int n, int tab[])
{
    int temp;
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (tab[i] < tab[j])
            {
                temp = tab[i];
                tab[i] = tab[j];
                tab[j] = temp;
            }
        }
    }
}

int main()
{
    
//4.2.1
// int tab[] = {1,2,3,4,5};
// int unsigned n = sizeof(tab)/sizeof(tab[0]);
// zero(n,tab);
// for(int i=0;i<n;i++)
// {
//     printf("%d", tab[i]);
// }
// printf("\n");

// indeksy(n,tab);
// for(int i=0;i<n;i++)
// {
//     printf("%d", tab[i]);
// }
// printf("\n");

// podwajacz(n,tab);
// for(int i=0;i<n;i++)
// {
//     printf("%d", tab[i]);
// }
// printf("\n");

// absolut(n,tab);
// for(int i=0;i<n;i++)
// {
//     printf("%d", tab[i]);
// }
// printf("\n");


// //4.2.4
// unsigned int n = 5;
// unsigned int tab[] = {1, 2, 3, 4, 5};
// double wynik = geo(n, tab);
// printf("Srednia geometryczna: %lf\n", wynik);

// //4.2.6
// int n = 5;
// int tab1[] = {1, 2, 3, 4, 5};
// int tab2[n];
// int tab3[n];

//     przepisz(n, tab1, tab2);

//     printf("tab1: ");
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d ", tab1[i]);
//     }
//     printf("\n");

//     printf("tab2: ");
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d ", tab2[i]);
//     }
//     printf("\n");

//     odwrotnie(n, tab1, tab3);

//     printf("tab3: ");
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d ", tab3[i]);
//     }
//     printf("\n");

// //4.2.7
// int n = 5;
//     int tab1[] = {1, 2, 3, 4, 5};
//     int tab2[] = {6, 7, 8, 9, 10};
//     int tab3[n];

//     sumuj_t(n, tab1, tab2, tab3);

//     printf("Suma: ");
//     for (int i = 0; i < n; i++) {
//         printf("%d ", tab3[i]);
//     }
//     printf("\n");

//     wieksze_t(n, tab1, tab2, tab3);

//     printf("Większe: ");
//     for (int i = 0; i < n; i++) {
//         printf("%d ", tab3[i]);
//     }
//     printf("\n");

//     przepisz_t(n, tab1, tab2, tab3);

//     printf("Tab1: ");
//     for (int i = 0; i < n; i++) {
//         printf("%d ", tab1[i]);
//     }
//     printf("\n");

//     printf("Tab2: ");
//     for (int i = 0; i < n; i++) {
//         printf("%d ", tab2[i]);
//     }
//     printf("\n");

//     printf("Tab3: ");
//     for (int i = 0; i < n; i++) {
//         printf("%d ", tab3[i]);
//     }
//     printf("\n");

// //4.2.10
// int n = 5;
// int tab[] = {3, -2, 5, 0, 1};
// printf("Największa wartość: %d\n", findMax(n, tab));
// printf("Najmniejsza wartość: %d\n", findMin(n, tab));
// printf("Indeks elementu o największej wartości: %d\n", findMaxIndex(n, tab));
// printf("Indeks elementu o najmniejszej wartości: %d\n", findMinIndex(n, tab));
// printf("Największa wartość bezwzględna: %d\n", findMaxAbs(n, tab));
// printf("Indeks elementu o największej wartości bezwzględnej: %d\n", findMaxAbsIndex(n, tab));

// //4.2.12
// int tab[] = {1, 2, 3, 4, 5};
//     int n = 5;

//     reverse(n, tab);
//     for (int i = 0; i < n; i++) {
//         printf("%d ", tab[i]);
//     }
//     printf("\n");

//     shift_left(n, tab);
//     for (int i = 0; i < n; i++) {
//         printf("%d ", tab[i]);
//     }
//     printf("\n");

//     shift_right(n, tab);
//     for (int i = 0; i < n; i++) {
//         printf("%d ", tab[i]);
//     }
//     printf("\n");

//     sort_asc(n, tab);
//     for (int i = 0; i < n; i++) {
//         printf("%d ", tab[i]);
//     }
//     printf("\n");

//     sort_desc(n, tab);
//     for (int i = 0; i < n; i++) {
//         printf("%d ", tab[i]);
//     }
//     printf("\n");


    return 0;
}
