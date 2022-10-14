#include<stdio.h>
#include<stdlib.h>

main()
{ int i;
  int vetor[10];

 
 
 for(i=0; i<9; i++){
   printf("Digite os numeros inteiros de 1 ate 9:"); 
   scanf("%d", &vetor[i]);
  }
  
  
  
  for(i=0; i<9; i++){        
  
  printf("%d ", vetor[i]);
 }
 
printf("\n\n");
 
 for(i=1; i<9; i++){
  printf("%d ", vetor[i]);
 }
      
printf("\n\n");   

 for(i=2; i<9; i++){
  
  printf("%d ", vetor[i]);
 }
   
printf("\n\n");   

 for(i=3; i<9; i++){
  printf("%d ", vetor[i]);
 } 
  
printf("\n\n");   

 for(i=4; i<9; i++){
  printf("%d ", vetor[i]);
 } 
  
      
      
      
      

printf("\n\n");     
      
system ("PAUSE");
return 0;
}     
      
