#include<stdio.h>
#include<stdlib.h>


main()
{  int i,j;
   int vetorA[5];
   int vetorB[5];
   int soma[5];
   int aux;
   
   for(i=0;i<5;i++){
     printf("Digite o valor de A:\n");
       scanf("%d", &vetorA[i]);            
     
     printf("Digite o valor de B:\n");
       scanf("%d", &vetorB[i]);         
   
   }
   
    for(i=0;i<5;i++){
       soma[i] = vetorA[i] + vetorB[i]; 
         printf("soma:%d\n", soma[i]);
   }
   
printf("\n\n>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n\n");  // questao iventada por mim 
   for(i=0; i<4; i++){
    for(j=i+1; j<5; j++){
     if(soma[i] > soma[j])  // ordem crescente
     {
       aux = soma[i];
       soma[i] = soma[j];
       soma[j] = aux;
     } 
   }
  }           
                
  for(i=0; i<5; i++){
   printf("%d ", soma[i]);
 } 
   
   
   
   
printf("\n\n");          
system("PAUSE");	
  return 0;
}
