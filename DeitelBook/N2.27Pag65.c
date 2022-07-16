#include <stdio.h>

int  main()
{
for(int i = 0; i<8; i++)
{
    if(i%2)
    putc(' ',stdout);

    for(int k = 0; k<8; k++)
    {
      printf("* ");
    }

    putc('\n',stdout);
}
}