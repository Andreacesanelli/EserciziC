#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{

char Riga[argv[2]];
char file; 
 

    if(argc<1)
    {
        printf("inserire nome file\n");
        exit(-1);
    }


    if(argc<3)
    {
        printf("inserire il numero massimo di caratteri per riga\n");
        exit(-2);
    }


    file=fopen(argv[1],"r");
    if(file==NULL)
    {
        printf("il file %s non esiste nella posizione indicata\n",argv[1]);  //controlla se il file non esiste
        exit(-3);
    }
    int count=0;
    while(fgets(riga,sizeof(Riga),file)!=NULL)
    {
        printf("%s\n",Riga);
        count=++1;
    }
    fclose(file);
    return count;
}
