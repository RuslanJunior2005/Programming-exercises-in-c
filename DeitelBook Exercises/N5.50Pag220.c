#include <stdio.h>
int main()
{
    int i = 0;
    int f = 0;
    int risulatatoStudente = 0;
    int risultatoCoretto = 0;

    srand(time(NULL));
    srand(time(NULL));
    // generazione del primo numero casuale
    i = rand() % 9 + 1;

    // generazione del secodo numero casuale
    f = rand() % 9 + 1;
  
     risultatoCoretto =  i*f ;

    printf("how much is %d times %d? ", i, f);
    scanf("%d",&risulatatoStudente);

    if(risulatatoStudente==risultatoCoretto)
     printf("very good!");

     


     
}