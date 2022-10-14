#include <stdio.h>
#include <conio.h>

float diagonal(int[4][4]);
main()
{
int i,j;
int matriz[4][4];
    

  for(i=0; i<4; i++){
    for(j=0; j<4; j++){
    printf("\nEntre com a [%d] linha da [%d] coluna da matriz:",i+1,j+1);
    scanf("%d",&matriz[i][j]);
   }     
  }    
  
printf("\n\n");   
    for(i=0; i<4; i++){
     for(j=0; j<4; j++){
     printf("%d ",matriz[i][j]);
   }     
   printf("\n");
  }


 
printf("\n\n");   
   for(i=0; i<4; i++){
     for(j=0; j<4; j++){
       printf("%.2f   ",diagonal(matriz));
     }
      printf("\n");
   }
  
  
printf("\n\n");  
getch();	
}
float diagonal(int m[4][4]) 
{
int i,j;
int maior=0;

  for(i=0; i<4; i++){
     for(j=0; j<4; j++){
       if((i - j == 0) && (m[i][j] > maior))  // diagonal principal
        {
          maior = m[i][j];  
        }     
      }  
  }     
          
          
        for(i=0; i<4; i++){
     for(j=0; j<4; j++){   
          
           m[i][j] = maior / m[i][j];
           
           return m[i][j];
        
        }     
      }
}

 
