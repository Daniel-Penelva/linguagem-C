#include <stdio.h>
#include <stdlib.h>
int main()
{
int i,j,aux;
int a[10],b[10],c[10];

 
  for(i=0; i<10; i++){
    printf("\nEntre com o %do. vetor de a:",i+1);
    scanf("%d",&a[i]);
   }   
    
printf("\n\n");
  for(i=0; i<10; i++){
    printf("\nEntre com o %do. vetor de b:",i+1);
    scanf("%d",&b[i]);
   }     
    
   for(i=0; i<10; i++){
       
      c[i] = a[i] + b[i];
   } 

printf("\n\n");    
printf("\nValor do vetor c\n");    
   for(i=0; i<10; i++){
    printf("\n%d ",c[i]);
   }     
    
     for(i=0; i<9; i++){
        for(j=i+1; j<10; j++){
           if(c[i] < c[j])
            {
              aux = c[i];
              c[i] = c[j];
              c[j] = aux;      
            } 
         }
      }  
    
printf("\n\n");    
printf("\nOrdem decrescente \n");  
       
    for(i=0; i<10; i++){
     printf("%d ",c[i]);
    }
    
    
printf("\n\n");
system("pause");
return 0;
}
    
