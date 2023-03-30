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
int geo(int n, int tab[])
{
    double goes;
    for (int i=0; i<n; i++)
{
    goes = tab[i]*tab[i+1];
}
    goes = pow(goes, 1/n);
    return goes;
}

//4.2.6


//4.2.7


//4.2.10


//4.2.12


int main()
{
printf("Podaj numer zadania 4.2.X np. 1: ");
int w;
scanf("%d", w);
switch (w)
{
    case 1:

int tab[] = {1,2,3,4,5};
int unsigned n = sizeof(tab)/sizeof(tab[0]);
zero(n,tab);
for(int i=0;i<n;i++)
{
    printf("%d", tab[i]);
}
printf("\n");

indeksy(n,tab);
for(int i=0;i<n;i++)
{
    printf("%d", tab[i]);
}
printf("\n");

podwajacz(n,tab);
for(int i=0;i<n;i++)
{
    printf("%d", tab[i]);
}
printf("\n");

absolut(n,tab);
for(int i=0;i<n;i++)
{
    printf("%d", tab[i]);
}
printf("\n");
break;

    case 4:

int unsigned tab[] = {1,2,3,4,5};
int unsigned n = sizeof(tab)/sizeof(tab[0]);
double goes = geo(n,tab);
printf("%lf", goes);
printf("\n");
break;

    case 4.2.6:


break;

    case 4.2.7:


break;

    case 4.2.10:


break;

    case 4.2.12:


break;
}

    return 0;
}
