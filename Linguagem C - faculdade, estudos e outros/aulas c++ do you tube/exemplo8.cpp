/*Fa�a um programa q pegue 10 numeros e dentre esses 10 numeros fa�a uma compara��o para pegar os 5 maiores numeros.
Determine o comando colocando em ordem decrescente.*/

#include<stdio.h>
#include<stdlib.h>

main()
{
  int i,j,aux;
  int vetor[10];
 
      
  for(i=0; i<10; i++){
   printf("Digite os numeros inteiros:\n");
      scanf("%d", &vetor[i]);
  }
    
   for(i=0; i<9; i++){            // esse la�o for fazem as compara�oes dos elementos   // faz do zero ao 8
      for(j=i+1; j<10; j++){      //faz 1 ao 10
       
       if(vetor[i]<vetor[j]){
         
         aux = vetor[i];
         vetor[i]=vetor[j];
         vetor[j]=aux;
         }
      }
   }
      printf("Os cinco maiores numeros:%d %d %d %d %d\n", vetor[0],vetor[1],vetor[2],vetor[3],vetor[4]);
      
system ("PAUSE");
return 0;
}
 
