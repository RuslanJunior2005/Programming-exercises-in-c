#include <stdio.h>

int main()
{
    int num;
    printf("inserire un numero: ");
    scanf("%d", &num);
    if (num % 2 == 0)
        printf("il numero inserito è pari");
    else
        printf("il numero inserito è dispari");
}
