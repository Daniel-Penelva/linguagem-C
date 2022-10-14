#include<stdio.h>
#include<stdlib.h>
      
int matriz_linha(int[],int);
int matriz_coluna(int[],int); 
main()
{
      
int i,j;
int a[2][2];
int numero;
     
    for(i=0; i<2; i++){
      for(j=0; j<2; j++){  
        printf("Entre com a [%d] linha da [%d] coluna da matriz:",i+1,j+1);
        scanf("%d",&a[i][j]);
      }
    }
    
    
    printf("\nEntre com um valor:");
    scanf("%d",&numero);
    
    for(i=0; i<2; i++){
      for(j=0; j<2; j++){  
        printf("%d  ",a[i][j]);
      }
     printf("\n"); 
    }
printf("\n\n");  

  
    for(i=0; i<2; i++){
      for(j=0; j<2; j++){  
        printf("%d  ",matriz_linha(a,numero));
      }
     printf("\n");
    }
printf("\n\n");      
      
   
   for(i=0; i<2; i++){
      for(j=0; j<2; j++){  
        printf("%d  ",matriz_coluna(a,numero));
      }
     printf("\n");
    }
    
 
printf("\n\n");     
      
system ("PAUSE");
return 0;
} 
int matriz_linha(int m[2],int n)
{
int i,j;
int matriz[2][2];
   
  for(i=0; i<2; i++){
      for(j=0; j<2; j++){
      
      matriz[i][j] =m[i] * n;
      return matriz[i][j];
    }
  }    
      
} 
int matriz_coluna(int m[2],int n) 
{
int i,j;
int matriz1[2][2];  
 
  for(i=0; i<2; i++){
      for(j=0; j<2; j++){
      
      matriz1[i][j] =m[j] * n;
      return matriz1[i][j];
    }
  }                         
                  
}   
