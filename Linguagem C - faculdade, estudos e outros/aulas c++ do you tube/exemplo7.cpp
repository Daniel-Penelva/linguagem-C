/*Fa�a um programa q pegue 10 numeros e dentre esses 10 numeros fa�a uma compara��o para pegar os 10 maiores numeros.
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
       
       if(vetor[i]<vetor[j]){    // decrescente
         
         aux = vetor[i];
         vetor[i] = vetor[j];
         vetor[j] = aux;
         }
      }
   }
      
     for(i=0; i<10; i++){
      printf("%d , ", vetor[i]);
     }
      
    
system ("PAUSE");
return 0;
}
 
   
