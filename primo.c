#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[])  {
  int anni;
  printf("forse...(numero parametri: %d) %s\n", argc, argv[0]);
  if (argc>1) printf("primo argomento utente: %s\n", argv[1]);
  if (argc>2)  {
  anni = atoi(argv[2]);
  if (anni != 0)  {
         printf("Secondo argomento utente (%s) valido %d\n", argv[2], anni);
                  } 
                  
                  else  {
                  
                     printf("Secondo argomento utente (%s) non valido %d\n", argv[2], anni);  
                     return -1;
                  } 
                  
                } 
  return 0;
  
} 
