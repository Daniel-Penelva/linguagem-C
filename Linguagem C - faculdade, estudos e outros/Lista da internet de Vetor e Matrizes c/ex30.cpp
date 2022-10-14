#include<stdio.h>
#include<conio.h>

int soma(int[2][2],int[2][2]);
main()
{
int i,j;
int A[2][2],B[2][2]; 
   
      
    
   for(i=0; i<2; i++){
     for(j=0; j<2; j++){
        printf("\nEntre com a [%d] linha da [%d] coluna da matriz A:",i,j);
        scanf("%d",&A[i][j]);
     }
   }
printf("\n\n");

   for(i=0; i<2; i++){
     for(j=0; j<2; j++){
        printf("\nEntre com a [%d] linha da [%d] coluna da matriz B:",i,j);
        scanf("%d",&B[i][j]);
        
     }
   }
   
printf("\n\n");
printf("\nMatriz A\n");
  
  for(i=0; i<2; i++){
     for(j=0; j<2; j++){
       printf("%d   ",A[i][j]);
     }
     printf("\n");
  }
      
printf("\n\n");
printf("\nMatriz B\n");
  
  for(i=0; i<2; i++){
     for(j=0; j<2; j++){
       printf("%d   ",B[i][j]);
     }
     printf("\n");
  }
      
       
printf("\n\n");
printf("\nSoma das matrizes\n");

  for(i=0; i<2; i++){
     for(j=0; j<2; j++){
       printf("%d  ",soma(A,B));
     }
     printf("\n");
  }



printf("\n\n");      
        
getch();
      
}
int soma(int A[2][2],int B[2][2])
{
 int i,j;
 int somatorio[2][2];
    
  
   for(i=0; i<2; i++){
     for(j=0; j<2; j++){
      somatorio[i][j] = A[i][j] + B[i][j];
     
     }
   }
   
    for(i=0; i<2; i++){
     for(j=0; j<2; j++){
      return somatorio[i][j];
     }
  }

}
