#include <stdio.h>
#include <stdlib.h>
/*
INCREMENTO E DECREMENTO
O novo valor é atribuído à variável, cujo valor estará acrescido de uma unidade.
O novo valor, já acrescido da unidade, é retornado como o valor do cálculo da expressão.
*/
int main(int argc, char *argv[]) {

int numero = 1;
int variavel, num = 50;
int val,NUMERO = 90;
int Numero = 80;

  while (numero <= 10) {
   printf("%d\n" , numero);
   ++numero;     //que é igual a isso: numero = numero + 1;
  }

printf("\n\n");
   /*EXEMPLO 1*/
   
   variavel = num++;
   printf("variavel = %d, numero:%d ",variavel, num);
   
printf("\n\n");
   /*EXEMPLO 2*/
  
   variavel = ++num;
   printf("variavel = %d, numero:%d ",variavel, num);
   

printf("\n\n");
  /*EXEMPLO 3*/
  
   val = NUMERO--;
   printf("val = %d, numero = %1d\n" , val, NUMERO);
   
   
printf("\n\n");
  /*EXEMPLO 4*/
  
   val = --Numero;
   printf("val = %d, numero = %1d\n" , val, Numero);   

system("pause");
return 0;
}
