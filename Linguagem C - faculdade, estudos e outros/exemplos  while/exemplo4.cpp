#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int valor = 1;

  do{                                         // faça {.....}Enquanto;
    printf("%d  ", valor);
	valor++;                           // aqui vai fazer o cremento do valor
  }while(valor <= 10);                 // aqui quando chegar ate 10 o programa termina

  printf("\n\n");
  system("PAUSE");
  return 0;
}
