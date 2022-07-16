#include <stdio.h>

int main(void)
{

    float guadagno = 0;
    int percentuale = 0;
    float salary = 0;

    printf("inserire valore del guadagno dellle vendite: ");
    scanf("%f", &guadagno);
    printf("inserire la percentuale: ");
    scanf("%d", &percentuale);

    salary = ((guadagno / 100) * percentuale) + 200;

    printf("Salary: %2.0f", salary);
}