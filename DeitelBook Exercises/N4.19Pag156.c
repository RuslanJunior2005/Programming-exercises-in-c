#include <stdio.h>

int main()
{
    // numero del prodotto
    int Numeroprodotto = 0;
    //somma dei prodotti 
    float SommmaProdoto =  0;
     //totale dei prodotti 
     float TotProdotti  = 0;
    printf("inserisci il numero del prodotto: ");
    scanf("%d", &Numeroprodotto);

    switch (Numeroprodotto)
    {
    case 1:
        if (Numeroprodotto == 1)
            printf("\ncosto del prodotto 1  è $2.98");
        break;
    case 2:
        if (Numeroprodotto == 2)
            printf("\ncosto del prodotto 2 è $4.50");
        break;
    case 3:
        if (Numeroprodotto == 3)
            printf("\ncosto del prodotto 3 è $9.98");
        break;
    case 4:
        if (Numeroprodotto == 4)
            printf("\ncosto del prodotto 4 è $4.49");
        break;
    case 5:
        if (Numeroprodotto == 5)
            printf("\ncosto del prodotto 5 è $6,87");
        break;
    default: 
     printf("\nil numero del prodotto che hai inserito non esiste");
    }

     printf("\n inserire il numero totale dei prodotti per sapere il totale del guadagno in una settimana: ");
     scanf("%d",&TotProdotti);

     if(TotProdotti==5)
      printf("\nil totale del guadagno in una settima è di %28.82");
    else 
     printf("\nil numero che è stato inserito non corrisponde alla quantita dei prodotti!");


    


}