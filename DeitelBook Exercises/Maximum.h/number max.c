#include <stdio.h>
#include "utilMaximum.h"

int main()
{
  int number1 = 0;
  int number2 = 0;
  int number3 = 0;

  printf("%s", "emetti i numeri: ");
  scanf("%d%d%d", &number1, &number2, &number3);

  printf("Maximum is: %d\n", maximum(number1, number2, number3));
}



