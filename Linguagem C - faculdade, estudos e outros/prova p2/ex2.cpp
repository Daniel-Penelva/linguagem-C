#include<stdio.h>
#include<stdlib.h>

main()
{ int i,j,aux;
  int vetor[20];
  
  for(i=0; i<20; i++){
   printf("\nDigite o %do. valor do vetor x:", i+1);
   scanf("%d", &vetor[i]);
  
  }

  for(i=0; i<19; i++){
    for(j =i+1; j<20; j++){
     if(vetor[i] < vetor[j])  //ordem decrescente
      {
        aux = vetor[i];
        vetor[i] = vetor[j];
        vetor[j] = aux;            
      }
    }
  }
  
printf("\nVetor em ordem decresente\n");
printf("\n\n");

  for(i=0; i<20; i++){
    printf("%d ", vetor[i]);
  }


printf("\n\n");
 
  
system("PAUSE");	
return 0;
}
