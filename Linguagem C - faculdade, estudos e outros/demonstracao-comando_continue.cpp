/*
Escreva um programa que usando o comando Continue, imprima somente os
números ímpares de 500 até 99.
*/
#include <stdio.h>
#include <conio.h>	 

int main()
{

int contador, numero;
	 
  for (contador = 500; contador >= 99; contador = contador-1){
    printf("%d \n",contador);
	 if ((contador % 2) != 0)
	    {
	      continue; // ignora o resto e continua com o for, ou seja a linha de baixo, ou seja, o comando printf() nao eh executada
	      printf("Numero impar: %d \n", contador);
       }
   }
	 
getch();
}
