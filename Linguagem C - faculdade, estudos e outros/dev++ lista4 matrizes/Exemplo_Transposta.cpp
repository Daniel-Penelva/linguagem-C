#include<stdio.h>
#include<stdlib.h>

main()
{
      
int matriz[3][2];
int matriz_transposta[2][3];
int i,j;


   
   for(i=0; i<3; i++){
    for(j=0; j<2; j++){
      printf("Entre com a [%d] ° linha da [%d] ° coluna:",i+1,j+1);
      scanf("%d",&matriz[i][j]);   
    }
   }
    
      
   for(i=0; i<3; i++){
    for(j=0; j<2; j++){
      printf("%d ",matriz[i][j]);  
    }
     printf("\n");
   }   
   
 printf("\n\n");
 printf("Matriz Transposta \n");
 
  for(i=0; i<2; i++){
    for(j=0; j<3; j++){
      matriz_transposta[i][j] = matriz[j][i];
    }
   }    
      
  for(i=0; i<2; i++){
    for(j=0; j<3; j++){
      printf("%d ",matriz_transposta[i][j]);
    }
     printf("\n");
   }        
      
      
      
      
printf("\n\n");
system("pause"); 
return 0;     
}
//http://www.youtube.com/watch?v=FZt2tgynuYU
