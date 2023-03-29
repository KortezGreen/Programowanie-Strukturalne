#include <stdio.h>
#include <stdlib.h>

//3.2.1
//int najm(int *a, int *b)
//{
//    if(*a>*b)
//    {
//        return 1;
//    }
//    else if(*a<*b)
//    {
//        return 0;
//    }
//    else
//    {
//        return -1;
//    }
//}

//3.2.2
//int najws(int *a, int *b)
//{
//    if(*a>*b)
//    {
//        printf("%i", *b);
//    }
//    else if(*a<*b)
//    {
//        printf("%i", *a);
//    }
//    else
//    {
//        printf("%i", *a);
//    }
//}

//3.2.4
//int zamiana(int *a, int *b)
//{
//    if(*a>*b)
//    {
//        int z=*a;
//        *a=*b;
//        *b=z;
//        printf("A jest teraz rowne: %d zas B to: %d", *a, *b);
//        return 1;
//    }
//    else
//    {
//        printf("Nic sie nie stalo");
//        return 0;
//    }
//}

//3.2.6
// int zapisz(int n, int *w)
// {
// *w = n;
// }

//3.2.9
//  int* rezerwacja()
//  {
//     int* ptr = (int*)malloc(sizeof(int));
//     return ptr;
// }

//3.2.11
// int* rezerwacja2(int n)
// {
//     int* ptr = (int*)malloc(n * sizeof(int));
//     return ptr;
// }
 
//3.2.12 
// double* rezerwacja_double(int n)
// {
//     double* ptr = (double*)malloc(n * sizeof(double));
//     return ptr;
// }
  
//3.2.16
// void stala_zmienna(const int* ptr_stalej, int* ptr_zmiennej)
// {
//     *ptr_zmiennej = *ptr_stalej;
// }



int main()
{

//3.2.1
//int a;
//int b;
//scanf("%i %i", &a, &b);
//int wynik = najm(&a, &b);
//
//    if(wynik == 1)
//    {
//        printf("%i", b);
//    }
//    else if(wynik == 0)
//    {
//        printf("%i", a);
//    }
//    else
//    {
//        printf("Liczby sa rowne");
//    }

//3.2.2
//int a;
//int b;
//scanf("%i %i", &a, &b);
//najws(&a, &b);

//3.2.4
//int a;
//int b;
//scanf("%i %i", &a, &b);
//zamiana(&a, &b);

//3.2.6
// int n, *w, wartosc;
// *w = wartosc;
// printf("Podaj liczbę n: ");
// scanf("%i", &n);
// zapisz(&n, &*w);

  
//3.2.9
// {
//     int* p = rezerwacja();
//     *p = 42;
//     printf("Wartość zmiennej int to: %d\n", *p);
//     free(p);
// }

//3.2.11
// {
// int n = 5;
// int* p = rezerwacja2(n);

// for (int i = 0; i < n; i++)
// {
//         *(p + i) = i;
// }

// for (int i = 0; i < n; i++)
// {
//         printf("Zmienna int nr %d: %d\n", i, *(p + i));
// }
// free(p);
 
//3.2.12 
// {
// int n = 3;
// double* p = rezerwacja_double(n);

// for (int i = 0; i < n; i++)
// {
// *(p + i) = i + 0.5;
// }

// for (int i = 0; i < n; i++)
// {
// printf("Zmienna double nr %d: %lf\n", i, *(p + i));
// }
// free(p);
  
//3.2.16
// {
// const int a = 10;
// int b = 0;
// stala_zmienna(&a, &b);
// printf("Wartość zmiennej b: %d\n", b);

return 0;
}
