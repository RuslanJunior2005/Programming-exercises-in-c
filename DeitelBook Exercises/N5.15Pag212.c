#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int hypotenuse(int x, int y);

int main()
{

    int b2 = 0;
    int a2 = 0;
    int c = 0;
     
    printf("inserisci due lati");

    printf("\nprimo lato: ");
    scanf("%d",b2);

    printf("\nsecondo lato: ");
    scanf("%d",a2);

    c = hypotenuse(a2,b2);

    printf("%d",c);

}

int hypotenuse(int x, int y)
{

    double b2 = 0;
    double a2 = 0;
    double c = 0;

    c = sqrt(a2 + b2);

    return a2,b2,c;
}