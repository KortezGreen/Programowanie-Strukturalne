include <stdio.h>
include <stdlib.h>

#2.2.2
int silnia(int n)
{
    if (n == 0)
    {
        return 1;
    }
    int wynik = 1;
    for (int i = 1; i <= n; i++)
    {
        wynik *= i;
    }
    return wynik;
}

#2.2.8
int pierwiastek(int n)
{
    int i = 0;
    while (i * i <= n)
    {
        i++;
    }
    return i - 1;
}

#2.2.12
double potega(double x, int y)
{
    double wynik = 1.0;
    for (int i = 0; i < y; i++)
    {
        wynik *= x;
    }
    return wynik;
}
double suma_pierwiastkow(int n, int m)
    {
    double suma = 0.0;
    for (int i = 0; i <= n; i++)
    {
        suma += potega(i, 1.0 / m);
    }
    return suma;
}

#2.2.17
int ilosc_wywolan = 0;
void zliczanie_wywolan()
{
    ilosc_wywolan++;
    printf("Funkcja zostala wywolana %d razy.\n", ilosc_wywolan);
}

#2.2.20
int silnia(int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return n * silnia(n-1);
    }
}

#2.2.24
int ciag(int n) {
    if (n == 0 || n == 1)
{
        return 1;
    }
    else
        {
        int wynik = 0;
        for (int i = 0; i < n; i++)
        {
            wynik += ciag(i);
        }
        return wynik;
    }
}

#2.2.29
int nwd(int n, int m)
{
    if (m == 0)
    {
        return n;
    } else
    {
        return nwd(m, n % m);
    }
}

int main()
{
#2.2.2
/*
    int n;
    printf("Podaj nieujemną liczbę całkowitą n: ");
    scanf("%d", &n);
    printf("%d! = %d\n", n, silnia(n));
*/

#2.2.4
/*
    int n;
    int wynik = 2;
    scanf("%d", &n);

    if (n<0)
    {
        n=n*(-1);
    }

    for(int i=1;i<n;i++)
    {
        wynik=wynik*2;
    }

    printf("%d", wynik);
*/

#2.2.8
/*
    int n;
    printf("Podaj dodatnią liczbę całkowitą n: ");
    scanf("%d", &n);
    printf(pierwiastek(n));
*/

#2.2.12
/*
    int n, m;
    printf("Podaj nieujemną liczbę całkowitą n: ");
    scanf("%d", &n);
    printf("Podaj liczbę całkowitą m większą od 1: ");
    scanf("%d", &m);
    printf("Suma pierwiastków: %lf\n", suma_pierwiastkow(n, m));
*/

#2.2.17
/*
    zliczanie_wywolan();
    zliczanie_wywolan();
    zliczanie_wywolan();
*/


#2.2.20
/*
    int n;
    printf("Podaj liczbe n: ");
    scanf("%d", &n);
    printf("%d! = %d\n", n, silnia(n));
*/

#2.2.24
/*
    int n;
    printf("Podaj liczbe n: ");
    scanf("%d", &n);
    printf("a%d = %d\n", n, ciag(n));
*/

#2.2.29
/*
    int n, m;
    printf("Podaj liczby n i m: ");
    scanf("%d %d", &n, &m);
    printf("Najwiekszy wspolny dzielnik to %d\n", nwd(n, m));
*/

    return 0;
}
