#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    int n;
    srand(time(NULL));
    for (int i = 0; i <= 0; i++)
    {
        n = rand() % 100 + 1;
        printf("%d\n", n);
    }

    if (n >= 90)
    {
        puts("A");
    }
    else
    {
        if (n >= 80)
        {
            printf("B");
        }
        else
        {
            if (n >= 70)
            {
                printf("C");
            }
            else
            {
                if (n >= 60)
                {
                    printf("D");
                }
                else
                {
                    if (n > 50)
                    {
                        printf("F");
                    }
                }
            }
        }
    }
}
