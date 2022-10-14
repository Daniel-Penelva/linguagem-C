#include<stdio.h>
#include<conio.h>

float elemento(int[3][3],int);
main()
{
int i,j;
int M[3][3],a; 
   
      
    
   for(i=0; i<3; i++){
     for(j=0; j<3; j++){
        printf("\nEntre com a [%d] linha da [%d] coluna da matriz A:",i,j);
        scanf("%d",&M[i][j]);
     }
   }
printf("\n\n");

 printf("\nEntre com o valor de a:");
 scanf("%d",&a);
   
printf("\n\n");
printf("\nMatriz A\n");
  
  for(i=0; i<3; i++){
     for(j=0; j<3; j++){
       printf("%d  ",M[i][j]);
     }
     printf("\n");
  }

printf("\n\n");   

  for(i=0; i<3; i++){
     for(j=0; j<3; j++){
      printf("%.0f    ",elemento(M,a));
   }
    printf("\n");
 }
  
printf("\n\n");      
        
getch();
      
}
float elemento(int m[3][3],int A)
{
int i,j;  
  
  for(i=0; i<3; i++){
     for(j=0; j<3; j++){
              
      m[i][j] = (A * m[i][j]);
     
     return  m[i][j];
  }
 }
 
}
    
    
