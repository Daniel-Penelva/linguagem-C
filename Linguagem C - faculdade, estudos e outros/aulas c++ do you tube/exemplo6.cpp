/* Leia um vetor chamado NUMEROS de 10 numeros inteiros e exiba qual o maior e o menor numero desse vetor*/


#include<stdio.h>
#include<stdlib.h>

main()
{ int i;
  int num[10];
  int maior = -99999, menor = 99999;
 
   
   
   for(i=0; i<10;i++){
     printf("Digite os numeros inteiros:\n");
       scanf("%d", &num[i]);
 }
 
    for(i=0; i<10;i++){
     
     if(num[i]>maior ){
      maior = num[i];
     }
     
     if(num[i]<menor){
      menor = num[i];
     }
     
 }
 printf("O numero maior:%d \n O numero menor:%d\n", maior, menor);
 
 system ("PAUSE");
return 0;
}
