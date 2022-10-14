#include <stdio.h>
#include <stdlib.h>
int main()
{
int i,vetorK[10]; 
int vetorP[10],vezes=0;
int numero_primo;

  for(i=1; i<=10; i++){ 
    printf("\nEntre com o [%d] vetor:",i+1);
    scanf("%d",&vetorK[i]);
  }  
    
    
   for(i=1; i<=10; i++){
      vetorP[i] = vetorK[i];
   }
    
     for(i=1; i<=10; i++){
      printf("\n vetor P = %d",vetorP[i]); 
   }
  
  
  for(i=1; i<=10; i++){
     if(vetorP[i] % i == 0)
      {
        vezes++;            
      } 
    }
     
    for(i=1; i<=10; i++){
     if(vetorP[i] == 2)
     {
        printf("\n numero primo = %d",vetorP[i]);            
     }
   }
   


printf("\n\n");  
system("PAUSE");	
return 0;
}
