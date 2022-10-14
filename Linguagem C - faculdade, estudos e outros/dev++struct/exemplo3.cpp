#include<stdio.h>
#include<stdlib.h>

typedef struct cadastro{
 
 char nome[20];
 int idade;            
}cadastro;

main()
{
int i;     
   struct cadastro cliente[5];
   
   for(i=0; i<5; i++){
   printf("\nDigite seu nome:");
   scanf("%s",cliente[i].nome);     // operador de ponto
   printf("\nDigite sua idade:");
   scanf("%d",&cliente[i].idade); 
  }  

printf("\n\n");
  
  for(i=0; i<5; i++){
  printf("\nMeu nome eh : %s e minha idade eh:%d ",cliente[i].nome,cliente[i].idade);
 } 
  
printf("\n\n");      
system("pause");
return 0;      
}
