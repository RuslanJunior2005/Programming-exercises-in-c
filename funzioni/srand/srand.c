#include <stdio.h>
#include <stdlib.h>
int main()
{
    int seed;
    printf("Enter seed: ");
    scanf("%u", &seed);

    srand(seed);

    for (int i = 1; i <=seed; ++i)
    {
        printf("%10d", 1 + (rand() % 6));
        if (i % 5 == 0)
        {
            puts("");
        }
    }
}
