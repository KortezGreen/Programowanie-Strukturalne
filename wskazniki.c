#include <stdio.h>
#include <stdlib.h>

#3.2.1
int najm(int *a, int *b)
{
    if(*a>*b)
    {
        return 1;
    }
    else if(*a<*b)
    {
        return 0;
    }
    else
    {
        return -1;
    }
}










int main()
{

#3.2.1
int a;
int b;
scanf("%i %i", &a, &b);
int wynik = najm(&a, &b);

    if(wynik == 1)
    {
        printf("%i", b);
    }
    else if(wynik == 0)
    {
        printf("%i", a);
    }
    else
    {
        printf("Liczby sa rwone");
    }

#3.


return 0;
}
