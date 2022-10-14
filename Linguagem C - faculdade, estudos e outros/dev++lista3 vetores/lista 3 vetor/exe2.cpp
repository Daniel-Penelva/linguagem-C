#include<stdio.h>
#include<stdlib.h>

#define N 4

main()
{ int i;
  float vetor[10];
  float media;
  float soma;
  
  
  for(i=0; i<10; i++){
    printf("Digite o numero inteiro:\n");
      scanf("%f", vetor[i]);         
  }
   
   for(i=0; i<10; i++){
     soma +=vetor[i]; 
      
     media = soma/10;
   }
   
   printf("media:%d\n", media);
   
   
    for(i=0; i<10; i++){
      if(vetor[i]<media)
        {   
          printf("numero menor que a media:%d\n", vetor[i]);    
        }
     }
        
         
system("PAUSE");	
  return 0;
}

  
