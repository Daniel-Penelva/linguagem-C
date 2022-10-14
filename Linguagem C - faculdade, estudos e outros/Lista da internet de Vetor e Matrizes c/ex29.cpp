#include<stdio.h>
#include<conio.h>

int multiplicacao(int[3][3],int[3][3]);
main()
{
int i,j;
int A[3][3],B[3][3]; 
   
        
   for(i=0; i<3; i++){
     for(j=0; j<3; j++){
        printf("\nEntre com a [%d] linha da [%d] coluna da matriz A:",i,j);
        scanf("%d",&A[i][j]);
     }
   }
printf("\n\n");

   for(i=0; i<3; i++){
     for(j=0; j<3; j++){
        printf("\nEntre com a [%d] linha da [%d] coluna da matriz B:",i,j);
        scanf("%d",&B[i][j]);
        
     }
   }
   
printf("\n\n");
printf("\nMatriz A\n");
  
  for(i=0; i<3; i++){
     for(j=0; j<3; j++){
       printf("%d   ",A[i][j]);
     }
     printf("\n");
  }
      
printf("\n\n");
printf("\nMatriz B\n");
  
  for(i=0; i<3; i++){
     for(j=0; j<3; j++){
       printf("%d   ",B[i][j]);
     }
     printf("\n");
  }
      
       
printf("\n\n");
printf("\nMultiplicação das matrizes\n");

  for(i=0; i<3; i++){
     for(j=0; j<3; j++){
       printf("%d   ",multiplicacao(A,B));
     }
     printf("\n");
  }



printf("\n\n");      
        
getch();
      
}
int multiplicacao(int A[3][3],int B[3][3])
{
int mult[3][3]={0}; 
int i,j,k;

  for(i=0; i<3; i++){                                          
     for(j=0; j<3; j++){
       for(k=0; k<3; k++){
         
         mult[i][j] = mult[i][j] +(A[i][k] * B[k][j]);
       
       }
     }
  }

    for(i=0; i<3; i++){                                          // o vetor da multiplicação fica com os mesmos indices da matriz B
     for(j=0; j<3; j++){
       
       return mult[i][j];
     }
   }


}

