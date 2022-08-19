#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    float x = fabs(7.5);
    float c = floor(7.5);
    float v = fabs(0.0);
    float b = ceil(0.0);
    float n = fabs(-6.4);
    float m = ceil(-6.4);
    float a = (-fabs(-8 + floor(-5.5)));
    printf("%f ", x);
    printf("%f ", c);
    printf("%f ", v);
    printf("%f ", b);
    printf("%f ", n);
    printf("%f ", m);
    printf("%f ", a);
}
