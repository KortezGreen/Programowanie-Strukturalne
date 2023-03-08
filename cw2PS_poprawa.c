#include <stdio.h>
#include <stdlib.h>

int main()
{

//1.3.1
/*
    int n;

    scanf("%d", &n);

    if (n<0)
    {
    n = n*(-1);
    printf("%d\n", n);
    }
    else if (n>0 || n==0)
    {
    printf("%d\n", n);
    }
*/
    
//1.3.2
/*
   int a, b;

    scanf("%d %d", &a, &b);

    if(a<b)
    {
        printf("%d\n", b);
    }
    else if(a>b)
    {
        printf("%d\n", a);
    }
    else
    {
        printf("%d\n", a);
    }
*/
   
//1.3.3
/*
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int naj=a;

    if(a<=b)
    {
        naj=b;
    }
    if(b<=c)
    {
        naj=c;
    }

    printf("%d", naj);
*/    

//1.3.4
/*
    int a, b, naj;
    scanf("%d %d", &a, &b);

    if(abs(a)<abs(b))
    {
        naj=b;
    }
    if(abs(a)>abs(b))
    {
        naj=a;
    }
    else
    {
        naj=a;
    }

    printf("%d", naj);
*/    

//1.3.5
/*
    double a, b, c, h, polowa, pole;
    int wybor;
    printf("Oblicz pole trojkata:\n 1 dla podstawy i wysokosci\n 2 dla bokow\n");
    scanf("%d", &wybor);

switch (wybor)
{
case 1:
    scanf("%lf %lf", &a, &h);
    pole=((a*h)/2);
    printf("%lf", pole);

break;

case 2:
    scanf("%lf %lf %lf", &a, &b, &c);
    polowa=((a+b+c)/2);
    pole=(((polowa-a)*(polowa-b)*(polowa-c))*(0,5));
    printf("%lf", pole);

break;
}
*/ 

//1.4.1
/*
    int n, m, wielo;
    scanf("%d %d", &n, &m);

    for (int i = 1; i<m; i++)
    {
        wielo = (n*i);

        if(wielo<m)
        {
            printf("%d\n", wielo);
        }
        else
        {
            break;
        }
    }
*/    

//1.4.2
/*
    int n, m, wielo;
    scanf("%d %d", &n, &m);

    for (int i = 1; i<=m; i++)
    {
        wielo = (n*i);
        printf("%d\n", wielo);
    }
*/    

//1.4.3
/*
    int n, m, k, wielo;
    scanf("%d %d %d", &n, &m, &k);

    for (int i = 1; i<k; i++)
    {
        wielo = (n*i);

        if(wielo>m && wielo<k)
        {
            printf("%d\n", wielo);
        }
    }
*/    

//1.4.4
/*
    unsigned int n;
    int silnia = 1;

    scanf("%d", &n);

	for(int i=n;i>1;i--)
    {
        silnia*=i;
    }

    printf("%d\n", silnia);
*/

//1.4.5
/*
    int n;
    unsigned int pol;
    unsigned int suma = 0;

    scanf("%d", &n);

    if (n<0)
    {
        printf("n nie moze byc mniejsze od 0");
    }
    else
    {
        for(int i=0;i<=n;i++)
        {
        pol=i*i;
        suma=suma+pol;
        }
    printf("%d\n", suma);
    }
*/
    
//1.3.6
/*
    //Dane
    printf("Podaj wspolczynniki: \n");

    float a1, b1, c1, a2, b2, c2;

    printf("a1: ");
    scanf("%fl", &a1);

    printf("b1: ");
    scanf("%fl", &b1);

    printf("c1: ");
    scanf("%fl", &c1);

    printf("a2: ");
    scanf("%fl", &a2);

    printf("b2: ");
    scanf("%fl", &b2);

    printf("c2: ");
    scanf("%fl", &c2);

    //Obliczenia
    float wx, wy, w, x, y;
    wx = c1*b2-b1*c2;
    wy = a1*c2-c1*a2;
    w = a1*b2-b1*a2;
    x = wx/w;
    y = wy/w;

    if (w!=0)
    {
        printf("\n x = ", wx/w);
        printf("  y = ", wy/w, "\n");
    }
    else
    {
           if((wx==0)&&(wy==0))
        {
            printf("\nUklad nieoznaczony.\n");
        }
        else
        {
            printf("\nUklad sprzeczny.\n");
        }
    }
*/   
    
    return 0;
}