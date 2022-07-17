#include <stdio.h>
int main()
{
    float kilometri = 0; 
    float  litri =0; 
    float kilometriPerLitro = 0;
    char risposta = ' '; 
    risposta = 'N';

     do
    {

    printf("\ninserisci i litri che hai messo nella vettura: ");
    scanf("%f",&litri);

    printf("\ninserisci i kelometri che hai percorso: ");
    scanf("%f",&kilometri); 

   kilometriPerLitro = (kilometri/litri);

   printf("\nkilometri percorsi per litri: %f",kilometriPerLitro);

    printf("\nvoi continare si o no ? S/N:  ");
    scanf(" %c",&risposta);

    }while (risposta=='S');

}