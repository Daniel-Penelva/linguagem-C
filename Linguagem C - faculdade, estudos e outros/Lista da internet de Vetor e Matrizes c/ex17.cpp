#include <stdio.h>
#include <stdlib.h>
int main()
{
int a[10],b[10];
int i,j,k;
int diferente[10],d=0;


  for(i=0; i<10; i++){
    printf("\nEntre com o %do. vetor de a:",i+1);
    scanf("%d",&a[i]);
    printf("\nEntre com o %do. vetor de b:",i+1);
    scanf("%d",&b[i]);
   }     
    
   for(i=0; i<10; i++){
   j=0;
     while(j < 10 && a[i] != b[j]) 
       {
         j++;     // vai somando enquanto x for igual y 
       }
         if(j >= 10)
          {
            k=0;    
          }
           while(k <= d && a[i] != diferente[k])
            {
              k++;       
            }
              if(k >= d)
               {
                 diferente[d] = a[i];
                 d++;    
               }
   } // fim do for 
   
printf("\n\n");

   printf("\nVetor Diferente\n");
  
  for(i=0; i<d; i++){
    printf("%d ", diferente[i]);         
  } 
  
printf("\n\n");
 
  
system("PAUSE");	
return 0;
}
