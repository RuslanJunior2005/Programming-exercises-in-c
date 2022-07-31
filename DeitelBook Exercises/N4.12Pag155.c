#include <stdio.h>

int main()
{
    int sum=0; 
    for( int i=2; i<=30; i=i+2){
        sum+=2;
        printf("Risultato della somma:%d\n",sum);
    }

}