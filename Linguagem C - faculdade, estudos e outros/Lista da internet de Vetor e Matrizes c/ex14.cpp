#include <stdio.h>
#include <stdlib.h>
  
int main(){
int i,v[20];
int primo=0; 

 
 for(i=1; i<=20; i++){
   printf("\nEntre com o [%d] valor:",i+1);
   scanf("%d",&v[i]);
  }
  
printf("\n\n");
  
  for(i=1; i<=20 && primo <= 3; i++){
    if(v[i] % i == 0)
     {
       primo++;       
     }
   }
   
  for(i=1; i<=20; i++){
     if(primo == 2)
      {
        printf("\n primo -> %d ",v[i]);       
      } 
     else
      {
        printf("\n Nao é  primo -> %d ",v[i]);          
      }
    }


     
printf("\n\n");
system("pause");
return 0;
}
    
    
