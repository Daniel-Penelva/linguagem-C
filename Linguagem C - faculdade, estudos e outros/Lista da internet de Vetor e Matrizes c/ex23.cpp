#include <stdio.h>
#include <stdlib.h>
int main()
{
int i,a[10];
int aluga[10];
int cont[10]={0};
int quantidade_gratis[10];

   for(i=0; i<10; i++){
    printf("\nEntre com a %do. quantidade de filmes da locadora('ate 500 se desejar'):",i+1);
    scanf("%d",&a[i]);
   }   
    
   for(i=0; i<10; i++){
    printf("\n %do. cliente -> Entre com a quantidade de filmes alugados:",i+1);
    scanf("%d",&aluga[i]);
   }    
    
    for(i=0; i<10; i++){        // falta saber como fazer se o usuario botar 30 e contabilizar 2 filmes gratis, nao como fazer isso.
     if(aluga[i] >= 15)
      {
        cont[i]++;  
        
        quantidade_gratis[i] = cont[i];      
      }
      else
      {
        quantidade_gratis[i] = 0;   
      }
     }
    
printf("\n\n");   
   for(i=0; i<10; i++){
     printf("\nO %do. cliente pode pegar = %d filmes gratis:",i+1,quantidade_gratis[i]);
     }
    
     
printf("\n\n");  
system("PAUSE");	
return 0;

}
