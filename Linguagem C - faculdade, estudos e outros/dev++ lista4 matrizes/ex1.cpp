#include<stdio.h>
#include<stdlib.h>

main()
{
  int i,j;
  float matriz[4][4];
  float soma;
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
               
       soma = matriz[0][0] + matriz[0][1] + matriz[0][2] +  matriz[0][3] + matriz[0][4];
       
       media = soma /4;
   }  
  }    
   printf("\n\n");
   
   printf("%2.f  ", media);
      
printf("\n\n");
  
  
system ("PAUSE");
return 0;
}     
      
      
