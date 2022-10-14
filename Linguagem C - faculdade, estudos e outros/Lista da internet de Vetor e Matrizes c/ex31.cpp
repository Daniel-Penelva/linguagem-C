#include<stdio.h>
#include<conio.h>


main()
{
int i,j;
int A[4][6],B[6][4]; 
   
      
    
   for(i=0; i<4; i++){
     for(j=0; j<6; j++){
        printf("\nEntre com a [%d] linha da [%d] coluna da matriz A:",i,j);
        scanf("%d",&A[i][j]);
     }
   }
printf("\n\n");

   for(i=0; i<6; i++){
     for(j=0; j<4; j++){
        printf("\nEntre com a [%d] linha da [%d] coluna da matriz B:",i,j);
        scanf("%d",&B[i][j]);
        
     }
   }
   
printf("\n\n");
printf("\nMatriz A\n");
  
  for(i=0; i<4; i++){
     for(j=0; j<6; j++){
       printf("%d   ",A[i][j]);
     }
     printf("\n");
  }
      
printf("\n\n");
printf("\nMatriz B\n");
  
  for(i=0; i<6; i++){
     for(j=0; j<4; j++){
       printf("%d   ",B[i][j]);
     }
     printf("\n");
  }
  
  
  
  
  
  
  
  
  

printf("\n\n");      
        
getch();
      
}
int diferenca(int a[4][6], int b[6][4])
{
    

    
    
    
    
    
    
    
}
