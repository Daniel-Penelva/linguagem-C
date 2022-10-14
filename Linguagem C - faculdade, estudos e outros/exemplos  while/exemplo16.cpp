#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
int numeroA;
int numeroB;
int resto;

  printf("Digite dois numeros (ordem crescente): ");
  scanf("%d %d", &numeroA, &numeroB);
   
/*
A cada repeti��o, o algoritmo divide sucessivamente um valor pelo outro e guarda o resto. No final do bloco de repeti��o, a vari�vel 
numeroA armazena o resto da divis�o, e a vari�vel numeroB armazena o �ltimo valor da vari�vel numeroA.
A repeti��o � finalizada quando o resto for nulo, ou seja, quando a vari�vel numeroA armazenar zero.
*/  
   while (numeroA > 0){
    resto = numeroB % numeroA;
    printf("numeroB = %d; numeroA = %d; ", numeroB, numeroA);
    printf("resto = %d\n", resto);
    
    numeroB = numeroA;
    numeroA = resto;
   }
  
 printf("MDC: %d", numeroB);
system("pause");
return 0;
}
    
