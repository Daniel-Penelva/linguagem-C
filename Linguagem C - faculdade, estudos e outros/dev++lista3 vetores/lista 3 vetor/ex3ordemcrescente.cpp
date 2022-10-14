#include<stdio.h>
#include<stdlib.h>



main()
{ 
  int i,j,aux;
  int vetor[10];
  
  for(i=0; i<10; i++){
   printf("Digite o numero inteiro:\n");
     scanf("%d", &vetor[i]);
  }
  
   for(i=0; i<9; i++){
    for(j=i+1; j<10; j++){
     
     if(vetor[i] > vetor[j]){       //ordem crescente
      
      aux = vetor[i];
      vetor[i] = vetor[j];
      vetor[j] = aux;
      }
    }
  }
  for(i=0; i<10; i++){
    printf("%d, ",vetor[i]);
  
  }
    printf("ordem crescente\n");
           
system("PAUSE");
return 0;
 }      
