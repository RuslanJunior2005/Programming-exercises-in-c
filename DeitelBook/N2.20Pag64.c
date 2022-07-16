#include <stdio.h>

int main()
{
    // inlizazione costante Pitagora
    float const π = 3.14;
    //inilizazione varibile Cercrchio,Area,raggio,diametro
    float C = 0;
    float d = 0;
    float r = 0; 
    float A = 0;

    printf("per favore inserisci il raggio del cerchio: ");
    scanf("%f",&r); 
   
    d = 2*r;
    C =d*π;
    A = π*r*r; 

    printf("\ncircoferenza del cerchio: %f",C);
    printf("\nArea del cerchio: %f",A);
    printf("\nDiametro del cerchio: %f",d);
    

}
