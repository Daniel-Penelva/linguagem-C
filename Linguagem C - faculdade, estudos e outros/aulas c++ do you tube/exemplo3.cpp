/* receber um vetor de 5 numeros inteiros, em seguida alterar o vetor  multiplicando 
   todos os numeros pares por 3 e somando 1 aos numeros impares. mostrar o vetor alterado.*/


#include<stdio.h>
#include<stdlib.h>

main()
{ int i;
  int v[5];
  
      
  for (i=0; i<5; i++){
    printf("Digite o valor dos numeros:\n");
      scanf("%d", &v[i]);
  }
  
  for (i=0; i<5; i++){
   
   if(v[i] % 2 == 0){         // se no valor mode for igual a zero, logo é par.
    printf("valor par!\n");
   
     v[i] = v[i] * 3;
     
   }
   else {
      v[i] = v[i] + 1;
   }
 } 
   for (i=0; i<5; i++){
     printf("os resultados:%d\n", v[i], v[i]);
   }
 
 
 
system ("PAUSE");
return 0;
} 
    
