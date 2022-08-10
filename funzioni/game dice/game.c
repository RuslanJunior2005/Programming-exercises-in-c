#include <stdio.h>
#include <stdlib.h>
int main()
{
    int frequenzaq1 = 0;
    int frequenzaq2 = 0;
    int frequenzaq3 = 0;
    int frequenzaq4 = 0;
    int frequenzaq5 = 0;
    int frequenzaq6 = 0;

    for (int roll = 1; roll <= 60000000; roll++)
    {
        int face = 1 + rand() % 6;

        switch(face){
            case 1:
            frequenzaq1++;
            break;
             case 2:
            frequenzaq2++;
            break;
             case 3:
            frequenzaq3++;
            break;
             case 4:
            frequenzaq4++;
            break;
             case 5:
            frequenzaq5++;
            break;
             case 6:
            frequenzaq6++;
            break;
        }
    }
    printf("\n  Faccia   Frequenza ");
    printf("    1%13u\n",frequenzaq1);
    printf("    2%13u\n",frequenzaq2);
    printf("    3%13u\n",frequenzaq3);
    printf("    4%13u\n",frequenzaq4);
    printf("    5%13u\n",frequenzaq5);
    printf("    6%13u\n",frequenzaq6);

}