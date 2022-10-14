#include<stdio.h>
#include<stdlib.h>



main()
{ int i=0;
  int vetor[10];
  float pot=0;
  float media=0;
  float soma=0;
   
  for(i=0; i<10; i++){
   printf("Digite os numeros inteiros:\n");
     scanf("%d", &vetor[i]);
  }
  
  for(i=0; i<10; i++){
   if(vetor[i] % 2 ==0)
   {
     printf("numeros pares:%d\n", vetor[i]);
     
     pot= vetor[i] % 100;
      printf("potencia:%f\n", pot);
   }
   
   else
     if(vetor[i] % 2 ==1)
     {
     printf("numeros impares:%d\n", vetor[i]);
       
       soma +=vetor[i];
      
     }
 }   
     media = soma /10;     
       printf("media:%f\n", media);
       printf("soma:%f\n",soma);    


system("PAUSE");	
  return 0;
}
