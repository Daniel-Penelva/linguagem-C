#include <stdio.h>
#include <stdlib.h>
int main()
{
int i;
int a[10],b[10];
int soma_a =0;
int soma_b =0;
 
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
     
     soma_a +=a[i];
     
     soma_b +=b[i];
   }
   
printf("\n\n");

   printf("\nSoma do vetor a: %d",soma_a);
   
printf("\n\n");

   printf("\nSoma do vetor b: %d",soma_b);  
   
   
printf("\n\n");  
system("PAUSE");	
return 0;
}
        
   
