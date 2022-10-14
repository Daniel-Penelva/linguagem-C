#include<stdio.h>
#include<stdlib.h>



main()
{  int i;
   int vetor[10];
   float soma=0;
   float media;
   
   for(i=0;i<10;i++){
     printf("digite o numero inteiro:\n");
       scanf("%d", &vetor[i]);
   }
   
   for(i=0;i<10;i++){
     if(vetor[i] % 2 ==0)
       {
         soma += vetor[i];
         
           printf("os numeros pares :%d\n", vetor[i]);         
       }                 
     
     
        if(vetor[i] % 2 ==1)
        {
           media=vetor[i]/10;
           
            printf("os numeros impares e a media:%d %f\n", vetor[i], media);                 
        }
   }
    
     printf("a soma dos pares :%f\n", soma);
    
system("PAUSE");	
return 0;
}
