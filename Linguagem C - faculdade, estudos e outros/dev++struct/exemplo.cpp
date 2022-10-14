#include<stdio.h>
#include<stdlib.h>

struct cadastro{
 
 char nome[20];
 int idade;            
};
main()
{
      
  struct cadastro cliente;   //esse struct antes do membro e da variavel não é obrigatorio
   
   printf("\nDigite seu nome:");
   scanf("%s",&cliente.nome);     // operador de ponto
   printf("\nDigite sua idade:");
   scanf("%d",&cliente.idade);   

printf("\n\n");

  printf("Meu nome eh : %s e minha idade eh:%d ",cliente.nome,cliente.idade);
     
printf("\n\n");      
system("pause");
return 0;      
}
//struct em c
