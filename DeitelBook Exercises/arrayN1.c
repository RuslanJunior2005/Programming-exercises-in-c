#include <stdio.h>

int main()
{

    int n[5] = {23, 45, 56, 67, 89};

    printf("%s%13s\n", "Element", "Value");

    for (size_t i = 0; i < 5; ++i)
        printf("%7u%13d\n", i, n[i]);

        

}