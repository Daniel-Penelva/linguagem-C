/*Faça uma função chamada EPAR recebendo como parametro um numero inteiro e retornar 1 se o numero for par, e o, caso contrario */

#include<stdio.h>
#include<stdlib.h>
//int = tipo de retorno ; EPAR = nome da função ; parametro = numero inteiro = int ; variavel = x

int Epar(int x)                                                       // x um numero qualquer
{
  if(x % 2 == 0)
   {
     return 1;    
   }  
  else 
   {
     return 0;    
   }

}

main()
{ 
  int num;
  
  printf("\nDigite um valor inteiro:");
  scanf("%d", &num);                         // o num vai fazer referencia a variavel x.......
  
  if(Epar(num) == 1)                         // aqui chamei a função que vai comparar se é par ou impar.....
   {
     printf(">> PAR \n");            
   }
  else
   {
     printf(">> IMPAR \n");            
   }   
   
  
system("pause");

}
