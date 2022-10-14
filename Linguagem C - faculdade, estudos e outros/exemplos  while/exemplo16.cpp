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
A cada repetição, o algoritmo divide sucessivamente um valor pelo outro e guarda o resto. No final do bloco de repetição, a variável 
numeroA armazena o resto da divisão, e a variável numeroB armazena o último valor da variável numeroA.
A repetição é finalizada quando o resto for nulo, ou seja, quando a variável numeroA armazenar zero.
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
    
