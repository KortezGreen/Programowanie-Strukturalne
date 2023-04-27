#include <stdio.h>
#include <stdlib.h>
#include <wchar.h>

//5.2.2
int dlugosc(char napis[])
{
    int i = 0;
    while (napis[i] != '\0')
    {
        i++;
    }
    return i;
}

int dlugosc2(wchar_t napis[])
{
    int i = 0;
    while (napis[i] != L'\0')
    {
        i++;
    }
    return i;
}

//5.2.3


//5.2.6


//5.2.8


//5.2.11


//5.2.20


int main()
{
    printf("Zadanie 5.2.2\n");

    char napis[] = "Ala ma kota";
    int wynik = dlugosc(napis);
    printf("Dlugosc wynosi : %d\n", wynik);

    wchar_t napis2[] = L"Ala nie ma kota";
    int wynik2 = dlugosc2(napis);
    wprintf(L"Dlugosc wynosi : %d\n", wynik2);

    printf("Zadanie 5.2.3\n");

    printf("Zadanie 5.2.6\n");

    printf("Zadanie 5.2.8\n");

    printf("Zadanie 5.2.11\n");

    printf("Zadanie 5.2.20\n");


    return 0;
}
