#include<stdlib.h>
#include<stdio.h>

int main() 
{
    FILE *fd;
    char   Buf[200];
    char *Res;
    //epertura file e controllo 
    fd = fopen( "C:\\Users\\Ruslan\\Desktop\\SchedeAlunniClasse.c","r" );
    if(fd==NULL)
    {
        printf("Error: %m\n");
        exit(1);
    }
    else 
        printf("il file è stato aperto");
    //letture riga per riga e la stampa     
    while(1)
    {
       Res=fgets(Buf,200,fd);
       if(Res==NULL)
       break;
       printf("\n");
       printf("%s",Buf);

    }
    //chiusura file 

    fclose(fd);
