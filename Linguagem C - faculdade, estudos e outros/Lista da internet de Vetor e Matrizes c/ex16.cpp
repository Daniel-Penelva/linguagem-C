#include <stdio.h>
#include <stdlib.h>
int main()
{
int a[10],b[10];
int i,j,k;
int inters=0,intersecao[10];
    
  for(i=0; i<10; i++){
    printf("\nEntre com o %do. vetor de a:",i+1);
    scanf("%d",&a[i]);
    printf("\nEntre com o %do. vetor de b:",i+1);
    scanf("%d",&b[i]);
   }     
    
    
    
 printf("\n\n");
 
 for(i=0; i<10; i++){
   j=0;
     while(j <10 && a[i] != b[j])
       {
         j++;      
       }
         if(j < 10)   // inicio do if
          {
            k=0;
             
             while(k < inters && intersecao[k] != a[i]) 
               {
                 k++;      
               }   
                 if (k >= inters)
                   {
                     intersecao[inters] = a[i];
                     inters++;  
                   }
          } // fim do if 
       } // fim do for
 
 
 printf("\n\n");

printf("\nA Intersecao do Vetor\n");

  for(i=0; i<inters; i++){
    printf("%d ", intersecao[i]);
 } 
  
 printf("\n\n");
 
  
system("PAUSE");	
return 0;
}
      
 

