#include<stdio.h>
#include<stdlib.h>

main()
{
      
int valor = 100;
int *pontValor;

  pontValor = &valor;
  
   printf("\nvalor = %d",valor);  //imprimi o valor da variavel
   printf("\npontValor = %d",pontValor); //imprimi o endereço da variavel na MP  
   printf("\n*pontValor = %d",*pontValor);//imprimi o valor da variavel
   printf("\nvalor = %d ",&valor);//imprimi o endereço da variavel na MP 

printf("\n\n");
system("pause");
}
