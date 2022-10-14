/*
Exercício 3) Escreva um programa que receba números inteiros e determine o maior. O programa somente será finalizado quando o usuário digitar o número 0 (zero).
*/

#include<stdio.h>
#include<stdlib.h>

main()
{ 

int vetor[5], i;
int maior = 0;

int continua = 1;
while(continua == 1)
{

   for(i=0; i<5; i++)
    {
     printf("Digite o numero %d: ",i+1);	
     scanf("%d",&vetor[i]);
    }

   for(i=0; i<5; i++)
    {
	  if(vetor[i] > maior)
	    maior = vetor[i];
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
