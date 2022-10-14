#include <stdio.h>
#include <stdlib.h>
int main()
{
int i;
int a[10],b[10];
int produto[10];

 
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
     
     produto[i] = a[i] * b[i];
   }
   
printf("\n\n"); 
 printf("\nO produto\n");  
   for(i=0; i<10; i++){
    printf("%d ",produto[i]);         
  } 



printf("\n\n");  
system("PAUSE");	
return 0;
}



