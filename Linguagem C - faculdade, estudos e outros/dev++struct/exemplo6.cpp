#include<stdio.h>
#include<stdlib.h>

typedef struct produto
{
  int codigo;
  char nome[20];
  int quantidade;
  float valor_compra; 
  float valor_venda;       
}produto;

main()
{
int i; 
   produto cadastro [2];
 
   printf("\nPreenchendo a variavel:\n\n");
   for(i=0; i<2; i++){
     printf("\nEntre com o codigo:");
     scanf("%d",&cadastro[i].codigo);
     printf("\nEntre com o nome:");
     scanf("%s",&cadastro[i].nome);
     printf("\nEntre com a quantidade:");
     scanf("%d",&cadastro[i].quantidade);
     printf("\nEntre com o valor da compra:");
     scanf("%f",&cadastro[i].valor_compra);
     printf("\nEntre com o valor de revenda:");
     scanf("%f",&cadastro[i].valor_venda);
  }
 
  printf("\nValor do Cadastro:\n\n");
  for(i=0; i<2; i++){
   printf("Codigo:%d \n",cadastro[i].codigo);
   printf("Nome:%s \n",cadastro[i].nome);
   printf("Quantidade:%d \n",cadastro[i].quantidade);
   printf("Compra:%.2f \n",cadastro[i].valor_compra);
   printf("Revenda:%.2f \n\n\n",cadastro[i].valor_venda);
 }
 
 
printf("\n\n");      
system("pause");
return 0;     
}
