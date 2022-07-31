#include <stdio.h>
int main()
{
    int numero = 0;

    for (int i = 0; i < 5; i++)
    {
        for (int l = 0; l < 5; l++)
        {
            numero = i*l;
        }
        printf("\n%d", numero);
    }
}