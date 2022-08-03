#include <stdio.h>
#include "util.h"

#define MAX 10

int main()
{
    int a[MAX];
    int i,t,x,y;
    /* fill array */
    for (i=0; i < MAX; i++)
    {
        a[i]=rand();
        printf("%d\n",a[i]);
    }

    bubble_sort(MAX,a);

    /* print sorted array */
    printf("--------------------\n");
    for (i=0; i < MAX; i++)
        printf("%d\n",a[i]);
}