#include <stdio.h>
#include <stdlib.h> 
int main()
{
  FILE *fd;
   
   char linea[255];
   char *s;
   //apertura file ARTICOLI e controllo file esistenzza 
   fd = fopen( "C:\\Users\\Ruslan\\Desktop\\ARTICOLI.csv", "r");
    if(fd==NULL)
    {
        printf("Error: %m\n");
        exit(1);
    }
    else 
        printf("il file è stato aperto");
    
     while(1)
    {
       s = fgets(linea,255,fd);
       if(s==NULL)
       break;
       printf("\n");
       printf("%s",s);

    }
    //chiusura file 

    fclose(fd);

}
