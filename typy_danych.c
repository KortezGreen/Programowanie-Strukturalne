#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_WYMIAR 100

//7.2.1
struct trojkat
{
   float bokA;
   float bokB;
   float bokC;
};

float obwod(struct trojkat t)
{
   return t.bokA + t.bokB + t.bokC;
}

//7.2.2
void przepisz(struct trojkat troj1, struct trojkat* troj2)
{
   troj2->bokA = troj1.bokA;
   troj2->bokB = troj1.bokB;
   troj2->bokC = troj1.bokC;
}

//7.2.6
struct punktn
{
   int ilosc_wymiarow;
   float wspolrzedne[MAX_WYMIAR];
};

void przepisz_tablice(struct punktn tab1[], struct punktn tab2[], int rozmiar)
{
   for (int i = 0; i < rozmiar; i++)
   {
      tab2[i].ilosc_wymiarow = tab1[i].ilosc_wymiarow;
      for (int j = 0; j < tab1[i].ilosc_wymiarow; j++)
      {
         tab2[i].wspolrzedne[j] = tab1[i].wspolrzedne[j];
      }
   }
}

//7.2.7
struct zespolone
{
   double re; // Część rzeczywista
   double im; // Część urojona
};

struct zespolone dodaj(struct zespolone z1, struct zespolone z2)
{
   struct zespolone wynik7;
   wynik7.re = z1.re + z2.re;
   wynik7.im = z1.im + z2.im;
   return wynik7;
}

//7.2.9
struct lista
{
   int wartosc;
   struct lista* next;
};

//7.2.10
union super_int
{
   int signed_value;
   unsigned int unsigned_value;
};

//7.2.11
union Liczba
{
   int liczba_calkowita;
   double liczba_wymierna;
};

struct Dane
{
   int tp;
   union Liczba zaw;
};

struct Dane wczytaj_dane()
{
   struct Dane dane;

   printf("Wybierz rodzaj liczby:\n");
   printf("1. Liczba calkowita\n");
   printf("2. Liczba wymierna\n");
   printf("Twoj wybor: ");

   int wybor;
   scanf("%d", &wybor);

   if (wybor == 1)
   {
      dane.tp = 0;
      printf("Podaj liczbę calkowitą: ");
      scanf("%d", &dane.zaw.liczba_calkowita);
   }
   else if (wybor == 2)
   {
      dane.tp = 1;
      printf("Podaj liczbę wymierną: ");
      scanf("%lf", &dane.zaw.liczba_wymierna);
   }
   else
   {
      printf("Nieprawidlowy wybor.\n");
   }

   return dane;
}


//7.2.15
enum zwierzak
{
   KOT,
   PIES,
   CHOMIK,
   KANAREK
};


int main()
{
//7.2.1
printf("7.2.1\n");
   struct trojkat t1;
   t1.bokA = 3.0;
   t1.bokB = 4.0;
   t1.bokC = 5.0;

   float wynik = obwod(t1);
   printf("Obwod trojkata: %.2f\n", wynik);

//7.2.2
   printf("7.2.2\n");
   struct trojkat troj1;
   troj1.bokA = 3.0;
   troj1.bokB = 4.0;
   troj1.bokC = 5.0;

   struct trojkat troj2;
   przepisz(troj1, &troj2);

   printf("Zawartosc troj2:\n");
   printf("Bok A: %.2f\n", troj2.bokA);
   printf("Bok B: %.2f\n", troj2.bokB);
   printf("Bok C: %.2f\n", troj2.bokC);


//7.2.6
   printf("7.2.6\n");
   int rozmiar = 3;

   struct punktn tab1[rozmiar];
   for (int i = 0; i < rozmiar; i++)
   {
      tab1[i].ilosc_wymiarow = 3;
      tab1[i].wspolrzedne[0] = 1.0;
      tab1[i].wspolrzedne[1] = 2.0;
      tab1[i].wspolrzedne[2] = 3.0;
   }

   struct punktn tab2[rozmiar];
   przepisz_tablice(tab1, tab2, rozmiar);

   printf("Zawartosc tab2:\n");
   for (int i = 0; i < rozmiar; i++)
   {
      printf("Punkt %d: ", i+1);
      for (int j = 0; j < tab2[i].ilosc_wymiarow; j++)
      {
         printf("%.2f ", tab2[i].wspolrzedne[j]);
      }
      printf("\n");
   }

//7.2.7
   printf("7.2.7\n");
   struct zespolone z1;
   z1.re = 3.5;
   z1.im = 2.0;

   struct zespolone z2;
   z2.re = -1.2;
   z2.im = 4.7;

   struct zespolone wynik7 = dodaj(z1, z2);

   printf("Wynik: %.2f + %.2fi\n", wynik7.re, wynik7.im);

//7.2.9
   printf("7.2.9\n");
   struct lista l1;
   l1.wartosc = 10;
   l1.next = NULL;

   struct lista l2;
   l2.wartosc = 20;
   l2.next = NULL;

   l1.next = &l2;

   printf("Wartosc l1: %d\n", l1.wartosc);
   printf("Wartosc l2: %d\n", l1.next->wartosc);

//7.2.10
   printf("7.2.10\n");
   union super_int super;

   super.signed_value = -10;
   printf("Wartosc signed_int: %d\n", super.signed_value);

   super.unsigned_value = 20;
   printf("Wartosc unsigned_int: %u\n", super.unsigned_value);

//7.2.11
   printf("7.2.11\n");
   struct Dane dane = wczytaj_dane();

   printf("Wprowadzone dane:\n");
   printf("Rodzaj liczby: %s\n", (dane.tp == 0) ? "Liczba calkowita" : "Liczba wymierna");

   if (dane.tp == 0)
   {
      printf("Liczba calkowita: %d\n", dane.zaw.liczba_calkowita);
   }
   else
   {
      printf("Liczba wymierna: %lf\n", dane.zaw.liczba_wymierna);
   }

//7.2.15
   printf("7.2.15\n");
   enum zwierzak moj_zwierzak = KOT;

   switch (moj_zwierzak)
   {
      case KOT:
         printf("Mój zwierzak to kot\n");
         break;
      case PIES:
         printf("Mój zwierzak to pies\n");
         break;
      case CHOMIK:
         printf("Mój zwierzak to chomik\n");
         break;
      case KANAREK:
         printf("Mój zwierzak to kanarek\n");
         break;
      default:
         printf("Nieznany zwierzak\n");
   }



   return 0;
}


