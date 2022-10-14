/*
Trabalho: Lógica de Programação
Aluno: Daniel Penelva de Andrade - Matricula:2014000067
Exercício 3) Escreva um programa que receba números inteiros e determine o maior. O programa somente será finalizado quando o usuário digitar o número 0 (zero).
*/

#include<stdio.h>
#include<stdlib.h>

main()
{ 

int n1, n2, n3, n4, n5;
int maior = 0;

int continua = 1;
while(continua == 1)
{
   printf("Digite o primeiro numero: ");
   scanf("%d",&n1);

   printf("Digite o segundo numero: ");
   scanf("%d",&n2);   

   printf("Digite o terceiro numero: ");
   scanf("%d",&n3);  
   
   printf("Digite o quarto numero: ");
   scanf("%d",&n4);   

   printf("Digite o quinto numero: ");
   scanf("%d",&n5);     
   
   if(n1 > maior)
    {
      maior = n1;
    }
   if(n2 > maior)
   {
      maior = n2;
   }
   if(n3 > maior)
    {
      maior = n3;
    }
   if(n4 > maior)
   {
   	  maior = n4;
   }   
  if(n5 > maior)
   {
   	  maior = n5;
   }   
    

   printf("\n");
   printf("Maior valor determinado eh: %d \n",maior);
  
   printf("Digite (0) para finalizar: \n");
   scanf("%d",&continua);
}

printf("\n");
system("pause");
return 0;
}
