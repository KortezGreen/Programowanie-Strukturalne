#include <stdio.h>
#include <stdlib.h>
#include <wchar.h>
#include <string.h>

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
int porownaj(char* nap1, char* nap2)
{
    int i;
    for (i = 0; nap1[i] != '\0' || nap2[i] != '\0'; i++)
    {
        if (nap1[i] != nap2[i])
        {
            return 0;
        }
    }
    return 1;
}

//5.2.6
void kopiujn(char nap1[], char nap2[], int n)
{
    int len = strlen(nap1);
    if (n > len)
    {
        n = len;
    }
    strncpy(nap2, nap1, n);
    nap2[n] = '\0';
}

void kopiujn2(wchar_t nap1[], wchar_t nap2[], int n)
{
    int len = wcslen(nap1);
    if (n > len)
    {
        n = len;
    }
    wcsncpy(nap2, nap1, n);
    nap2[n] = L'\0';
}


//5.2.8
void zamien_na_wielkie(char napis[])
{
    int len = strlen(napis);
    for (int i = 0; i < len; i++)
    {
        if (islower(napis[i]))
        {
            napis[i] = toupper(napis[i]);
        }
    }
}

//5.2.11
void wytnijz(char nap1[], char nap2[])
{
    int i, j, k;
    int len1 = strlen(nap1);
    int len2 = strlen(nap2);
    for (i = 0; i < len2; i++)
    {
        for (j = 0, k = 0; j < len1; j++)
        {
            if (nap1[j] != nap2[i])
            {
                nap1[k++] = nap1[j];
            }
        }
        nap1[k] = '\0';
        len1 = strlen(nap1);
    }
}


void wytnijzw(wchar_t nap1[], wchar_t nap2[])
{
    int i, j, k;
    int len1 = wcslen(nap1);
    int len2 = wcslen(nap2);
    for (i = 0; i < len2; i++)
    {
        for (j = 0, k = 0; j < len1; j++)
        {
            if (nap1[j] != nap2[i])
            {
                nap1[k++] = nap1[j];
            }
        }
        nap1[k] = L'\0';
        len1 = wcslen(nap1);
    }
}

//5.2.20
char* godzina(int godz, int min, int sek)
{
    char* wynik = (char*) malloc(sizeof(char) * 9);
    sprintf(wynik, "%02d:%02d:%02d", godz, min, sek);
    return wynik;
}

wchar_t* godzina_w(int godz, int min, int sek)
{
    wchar_t* wynik = (wchar_t*) malloc(sizeof(wchar_t) * 9);
    swprintf(wynik, 9, L"%02d:%02d:%02d", godz, min, sek);
    return wynik;
}


int main()
{
    printf("Zadanie 5.2.2\n");

    char napis[] = "Ala ma kota";
    int wynik = dlugosc(napis);
    printf("Dlugosc wynosi : %d\n", wynik);
//
//    wchar_t napis2[] = L"Ala nie ma kota";
//    int wynik2 = dlugosc2(napis);
//    wprintf(L"Dlugosc wynosi : %d\n", wynik2);

    printf("Zadanie 5.2.3\n");
//    char nap1[] = "Ala ma kota";
//    char nap2[] = "Ala ma kota";
//    char nap3[] = "Ala ma psa";
//
//    printf("%d\n", porownaj(nap1, nap2));
//    printf("%d\n", porownaj(nap1, nap3));

//    wchar_t nap1[] = L"Świat jest piękny";
//    wchar_t nap2[] = L"Świat jest piękny";
//    wchar_t nap3[] = L"Świat jest okrutny";
//
//    printf("%d\n", porownaj(nap1, nap2));
//    printf("%d\n", porownaj(nap1, nap3));

    printf("Zadanie 5.2.6\n");
//    char nap1[] = "Hello, World!";
//    char nap2[20];
//    kopiujn(nap1, nap2, 5);
//    printf("%s\n", nap2);

//    wchar_t nap1[] = L"Świecie, witaj!";
//    wchar_t nap2[20];
//    kopiujn2(nap1, nap2, 5);
//    wprintf(L"%ls", nap2);

//    printf("Zadanie 5.2.8\n");
//    char napis[] = "to jest napis testowy";
//    zamien_na_wielkie(napis);
//    printf("%s", napis);
//    return 0;

    printf("Zadanie 5.2.11\n");
//    char nap1[] = "to jest napis testowy";
//    char nap2[] = "test";
//    wytnijz(nap1, nap2);
//    printf("%s", nap1);

//    wchar_t nap1[] = L"to jest napis testowy";
//    wchar_t nap2[] = L"tys";
//    wytnijzw(nap1, nap2);
//    wprintf(L"%ls", nap1);

    printf("Zadanie 5.2.20\n");
    char* wynik_char = godzina(12, 34, 56);
    printf("Godzina: %s\n", wynik_char);
    free(wynik_char);

    wchar_t* wynik_wchar = godzina_w(23, 59, 59);
    wprintf(L"Godzina: %ls\n", wynik_wchar);
    free(wynik_wchar);



    return 0;
}
