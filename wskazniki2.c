#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// 3.2.13
// double funkcja1(double (*fun)(int), int arg)
// {
//     return fun(arg);
// }

// 3.2.14
// bool porownaj1(int (*fun1)(int), int (*fun2)(int), unsigned int n)
// {
//     for(unsigned int i = 0; i <= n; i++) {
//         if(fun1(i) != fun2(i)) {
//             return false;
//         }
//     }
//     return true;
// }

// int funkcja1(int n) {
//     return n * 2;
// }

// int funkcja2(int n) {
//     return n + 5;
// }

// Zad 3
// int suma_fun(int (*func1)(int), int (*func2)(int), int n)
// {
//     return func1(n) + func2(n);
// }

// int func1(int n)
// {
//     return n * 2;
// }

// int func2(int n)
// {
//     return n * n;
// }

// Zad 4
// int ciag(int n)
// {
//     if (n == 0 || n == 1) {
//         return 1;
//     } else if (n % 3 == 0) {
//         return ciag(n/3);
//     } else if (n % 3 == 1) {
//         return ciag(n/3) + 1;
//     } else {
//         return ciag(n/3) - 1;
//     }
// }

// Zad 5
// int foo(const int* wsk1, const int* wsk2)
// {
//     int roznica = *wsk1 - *wsk2;
//     return roznica;
// }


int main()
{

// 3.2.13
// {
//     int a = 5;
//     double wynik = funkcja1(&funkcja, a);
//     printf("Wynik: %f\n", wynik);

// 3.2.14
// {
// unsigned int n = 10;
//     bool wynik1 = porownaj1(&funkcja1, &funkcja1, n);
//     printf("Funkcja 1 == Funkcja 1? %s\n", wynik1 ? "TAK" : "NIE");
//     bool wynik2 = porownaj1(&funkcja1, &funkcja2, n);
//     printf("Funkcja 1 == Funkcja 2? %s\n", wynik2 ? "TAK" : "NIE");

// Zad 3
// {
// int n = 5;
//     int sum = suma_fun(func1, func2, n);
//     printf("Suma funkcji dla n=%d to %d", n, sum);

// Zad 4
// {
//  int n;
//     printf("Podaj indeks elementu ciagu: ");
//     scanf("%d", &n);
//     printf("a[%d] = %d\n", n, ciag(n));

// Zad 5
// {
// int zmienna = 10;
//     const int stala = 5;
//     const int* wsk_stalej = &stala;
//     const int* wsk_zmiennej = &zmienna;
//     int wynik = foo(wsk_stalej, wsk_zmiennej);
//     printf("Roznica to %d\n", wynik);

return 0;
}
