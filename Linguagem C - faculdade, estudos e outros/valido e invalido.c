/*
Trabalho: L�gica de Programa��o
Aluno: Daniel Penelva de Andrade - Matricula:2014000067
Exerc�cio 2) Escreva um programa que receba n�meros entre 1 e 10. Se o usu�rio digitar um n�mero diferente, mostrar a mensagem "numero invalido" e solicitar 
o n�mero novamente. Se digitar correto mostrar o n�mero digitado e finalizar o programa.
*/

#include<stdio.h>
#include<stdlib.h>

main()
{ 

int  numero;
int continua = 1;

while(continua == 1)
{

 printf("Digite um numero: ");
 scanf("%d",&numero);
 
  if(numero > 10)
   {
 	 printf("NUMERO INVALIDO! \n");
   }
   else
   {
   	printf("Numero digitado: %d \n",numero);
    break;
   }
 
  //printf("Voce digitou o numero invalido - aperte 1 para continuar: ");
  //scanf("%d",&continua);
  continua = 1;
}
 
 printf("\n");
system("pause");
return 0;
}
