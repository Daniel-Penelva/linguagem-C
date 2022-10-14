#include<stdio.h>
#include<stdlib.h>

main()
{
  int i,j;
  float matriz[4][4];
  float soma[4];
  float media;
  
  
   for(i=0; i<4; i++){
      for(j=0; j<4; j++){
        printf("\nDigite o %d numero de populacao no Estado %d:", j+1, i+1);
        scanf("%f", &matriz[i][j]);
      }
   }
   
   printf("\n\n");
   
   for(i=0; i<4; i++){
      for(j=0; j<4; j++){
        printf(" %2.f  ", matriz[i][j]);
      }
       printf("\n");
   }
   
    printf("\n\n");
   
   for(i=0; i<4; i++){
      for(j=0; j<4; j++){
               
       soma [i]= matriz[i][j];   // vai somar as colunas
          
       media = soma[i] /4;
  
       printf("%2.f  ", media); 
       
    }  
     printf("\n"); 
  }
 
printf("\n\n");  

printf("soma:%0.f", soma);      
  
system ("PAUSE");
return 0;
}     
