#include<stdlib.h>
#include<stdio.h>

int main() 
{
    FILE *fd;
    char ch;

    fd = fopen("C:\\Users\\Ruslan\\Desktop\\Prova\\ciao.txt", "w");

    printf("Inserisci i dati: ");
    while((ch = getchar()) != ' ')
    {
        putc(ch,fd);
    }

    fclose(fd);

    fd = fopen("C:\\Users\\Ruslan\\Desktop\\Prova\\ciao.txt", "r");

    puts("Contenuto di Ciao.txt");
    while((ch = getc(fd)) != EOF)
    {
        putc(ch, stdout);
    }

    fclose(fd);
}
