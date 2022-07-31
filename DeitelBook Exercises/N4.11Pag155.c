#include <stdio.h>

int main()
{

    int valore = 0;
    int valoreInserito = 0;
    int min = 0;

    printf("quanti numeri voi inserire? ");
    scanf("%d",&valore);

     for(int i = 0;  i<valore; i++)
     {
       printf("inserisci il %d numero: ",i);
       scanf("%d",&valoreInserito);   
           if(i==0)
             min=valoreInserito;
           if(valoreInserito<min)
            min=valoreInserito; 
     } 
  
     printf("il valore più piccolo tra i numeri inseriti è : %d",min);
    
       
     




}