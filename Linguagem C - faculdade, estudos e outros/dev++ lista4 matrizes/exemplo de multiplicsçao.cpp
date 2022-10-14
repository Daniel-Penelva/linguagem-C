#include<stdio.h>
#include<conio.h>

main()
{
int i,j,k;
int A[3][4],B[4][3]; 
int mult[4][3]={0};   
      
    
   for(i=0; i<3; i++){
     for(j=0; j<4; j++){
        printf("\nEntre com a [%d] linha da [%d] coluna da matriz A:",i,j);
        scanf("%d",&A[i][j]);
     }
   }
printf("\n\n");

   for(i=0; i<4; i++){
     for(j=0; j<3; j++){
        printf("\nEntre com a [%d] linha da [%d] coluna da matriz B:",i,j);
        scanf("%d",&B[i][j]);
        
     }
   }
      
   for(i=0; i<4; i++){
     for(j=0; j<3; j++){ 
       for(k=0; k<4; k++){
           
         mult[i][j] = mult[i][j] + (A[i][k] * B[k][j]);  
       }
     }
   }
   
printf("\n\n");
printf("\nMatriz A\n");
  
  for(i=0; i<3; i++){
     for(j=0; j<4; j++){
       printf("%d  ",A[i][j]);
     }
     printf("\n");
  }
      
printf("\n\n");
printf("\nMatriz B\n");
  
  for(i=0; i<4; i++){
     for(j=0; j<3; j++){
       printf("%d  ",B[i][j]);
     }
     printf("\n");
  }
      
       
printf("\n\n");
printf("\nMultiplicação das matrizes\n");
  
  for(i=0; i<4; i++){
     for(j=0; j<3; j++){
       printf("%d  ",mult[i][j]);   // OBS: o vetor da multiplicação fica com os mesmos indices da matriz B
     }
     printf("\n");
  }
      
       
printf("\n\n");      
        
 getch();
      
}
