#include <stdio.h>
#include <stdlib.h>
int main()
{
int i,B[15]; 
int maior=0;
float vetor[15];  
    
  for(i=0; i<15; i++){
    printf("\nEntre com o %do. vetor de a:",i+1);
    scanf("%d",&B[i]);
    }   
        
   for(i=0; i<15; i++){
     if(B[i] > maior)
      {
        maior = B[i];           
      }
     } 
    
    for(i=0; i<15; i++){ 
      vetor[i] = maior/B[i];     // obs: vetor[i] = é preciso usar os parametros(as colchetes) para que defini todos os valores do vetor
   }
    
printf("\n\n");    
printf("\n Maior valor:%d ",maior); 
    
printf("\n\n"); 
printf("\nDividindo os vetores pelo maior vetor B\n");     
    
    
   for(i=0; i<15; i++){
     printf("\n%.2f ",vetor[i]);
   }
   
     
printf("\n\n");  
system("PAUSE");	
return 0;
}
