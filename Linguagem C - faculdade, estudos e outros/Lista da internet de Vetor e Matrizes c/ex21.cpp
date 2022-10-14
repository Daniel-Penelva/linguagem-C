#include <stdio.h>
#include <stdlib.h>
int main()
{
int i, a[10],numero[10]={0};   
   
  for(i=0; i<10; i++){
    printf("\nEntre com o %do. vetor de a:",i+1);
    scanf("%d",&a[i]);
   }   
   
   for(i=0; i<10; i++){
     if(a[i] <= 0)
       {
         numero[i] = 0;       
       } 
      else
       {
         numero[i] = 1;             
       } 
     }
    

printf("\n\n");
    for(i=0; i<10; i++){
      if(numero[i] != 0)  // ou if(numero[i] == 1)
       {
         printf("%d ",a[i]);            
       }
    }


printf("\n\n");  
system("PAUSE");	
return 0;
}
