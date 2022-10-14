#include<stdio.h>
#include<stdlib.h>

int troca(int *ponteiro);
main()
{
      
int valor = 100;
  
 troca(&valor);
 printf("\nvalor = %d",valor);


printf("\n\n");
system("pause");
}
int troca(int *ponteiro)
{
 *ponteiro = 20;
 
}

