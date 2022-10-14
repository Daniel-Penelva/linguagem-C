/*Faça uma função chamada EPAR recebendo como parametro um numero inteiro e retornar 1 se o numero for par, e o, caso contrario, fazer 
 na estrutura for - vetor*/

#include<stdio.h>
#include<stdlib.h>

int Epar(int x)
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
{int i;
 int vetor[10];
 
 for(i=0; i<10; i++){
   printf("\nDigite o numero inteiro:");
   scanf("%d", &vetor[i]);
 }
 
 for(i=0; i<10; i++){
   if(Epar (vetor[i]) == 1)
     {
       printf("\n %d - PAR", vetor[i]);      
     }
   else
     {
       printf("\n %d - IMPAR", vetor[i]);       
     }
  }
     
printf("\n\n"); 

system("pause");     
     
}    
     
