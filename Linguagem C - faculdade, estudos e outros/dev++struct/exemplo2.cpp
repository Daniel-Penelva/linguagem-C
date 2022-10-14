#include<stdio.h>
#include<stdlib.h>

struct cadastro{
 
 char nome[20];
 int idade;            
};
main()
{
int i;     
   struct cadastro cliente[5];
   

   printf("\nDigite seu nome:");
   scanf("%s",cliente[0].nome);     // operador de ponto
   printf("\nDigite sua idade:");
   scanf("%d",&cliente[0].idade); 
  

printf("\n\n");
  

  printf("\nMeu nome eh : %s e minha idade eh:%d ",cliente[0].nome,cliente[0].idade);

  
printf("\n\n");      
system("pause");
return 0;      
}
