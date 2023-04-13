#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//3.2.13
double fun(double (*fun2)(int),int n)
{
    return fun2(n);
}

double fun3(unsigned int x)
{
    return x * x;
}

//4.2.19

int *zero(int *tab1, int n)
{
    int i, j = 0, *tab2;
    for (i = 0; i < n; i++)
    {
        if (tab1[i] != 0)
        {
            j++;
        }
    }

    tab2 = (int*)malloc(j * sizeof(int));

    for (i = 0, j = 0; i < n; i++)
        {
        if (tab1[i] != 0)
        {
            tab2[j++] = tab1[i];
        }
    }

    return tab2;
}


int main()
{
//3.2.13
//    unsigned int n = 5;
//    double wynik = fun(&fun3, n);
//    printf("Wynik to %u: %f\n", n, wynik);

//4.2.19
    int tab1[] = {1, 3, 2, 8, 7, 4, 0, 5};
    int n = 8, i;
    int *tab2 = zero(tab1, n);

    for (i = 0; i < n; i++)
    {
        printf("%u ", tab2[i]);
    }
    printf("\n");

    free(tab2);


return 0;
}
