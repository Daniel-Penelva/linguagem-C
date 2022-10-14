#include<stdio.h>
#include<stdlib.h>

main()
{  int i;
  float vetor[10];
  float soma=0;
  float media;
   
      
   for(i=0;i<10;i++){
      printf("Digite o numero inteiro:\n");
        scanf("%f", &vetor[i]);                 
   }
   
   for(i=0;i<10;i++){
      
      soma+=vetor[i];                
      
   }
   
   media= soma / 10;
   printf("media:%2.f\n", media);
   
    for(i=0;i<10;i++){
      if(vetor[i] < media)              //numeros menores que a media
       {
         printf("numero menor que a media:%.0f\n", vetor[i]);             // .0f = .0 é para eliminar os zeros irrelevantes do float
       }  
       
    }
    
    
system("PAUSE");	
return 0;
}
    
