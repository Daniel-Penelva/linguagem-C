#include<stdio.h>
#include<stdlib.h>
      
int matriz(int[2][2]);
main()
{
      
int i,j;
int a[2][2];

     
    for(i=0; i<2; i++){
      for(j=0; j<2; j++){  
        printf("Entre com a [%d] linha da [%d] coluna da matriz:",i+1,j+1);
        scanf("%d",&a[i][j]);
      }
    }
    
     for(i=0; i<2; i++){
      for(j=0; j<2; j++){  
        if(matriz(a)==0)
         {
                             
         }
      }
    }
      
      
 
printf("\n\n");     
      
system ("PAUSE");
return 0;
} 
int matriz(int m[2][2])
{
int i,j;
   
  for(i=0; i<2; i++){
      for(j=0; j<2; j++){
        if(m[i][j] < 0)
         {
           
           
           return 0;          
         }  
      }
  }    
      
}     
