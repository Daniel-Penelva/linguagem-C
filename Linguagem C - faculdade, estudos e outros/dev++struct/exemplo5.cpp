#include<stdio.h>
#include<stdlib.h>

struct vendedor
{
   char nome[20];
   int idade;       
};

struct produto
{
   char nome[20];
   float preco;        
};

struct venda
{
  struct vendedor funcionario;            // vai aparecer todas as caracteristicas do vendedor
  struct produto mercadoria;              // vai aparecer todas as caracteristicas do produto
};

struct vender fecharVenda(struct vender venda,int qnt);   //struct VENDA = o nome da struct ; fechar_venda = o nome da funçao

main()
{
 
     struct vendedor funcionario;
     struct produto mercadoria;
     struct venda dinheiro;
     
     int qnt;
     char resp;
     
     printf("\nCadastro do vendedor");
     printf("\nEntre com o nome do vendedor:");
     scanf("%s",&funcionario.nome);
     printf("\nEntre com a idade do vendedor:");
     scanf("%d",&funcionario.idade);
     
printf("\n\n");

    printf("\nCadastro do produto");
    printf("\nEntre com o nome do produto:");
    scanf("%s",&mercadoria.nome);
    printf("\nEntre com a idade do vendedor:");
    scanf("%f",&mercadoria.preco);

printf("\n\n");

   dinheiro.funcionario = funcionario;
   dinheiro.mercadoria = mercadoria;   

     printf("\n Fazendo a venda:");
     printf("\nO nome do vendedor : %s e a idade eh: %d ",dinheiro.funcionario.nome, dinheiro.funcionario.idade); 
     printf("\nO nome do produto : %s e a preco eh: %.2f ",dinheiro.mercadoria.nome, dinheiro.mercadoria.preco);
     
printf("\n\n");

    printf("\nEntre com a quantidade:"); 
    scanf("%d",&qnt);
    
    
    do{
       fecharVenda(venda,qnt);
       scanf("%c",&resp);
      }while(resp != 's');
        printf("Venda realizada com sucesso!");
        system("pause");

printf("\n\n");      
system("pause");
return 0;     
}
struct vender fecharVenda(struct vender venda,int qnt)
{
  system("cls")
  printf("Confirmando a venda....\n\n");
  printf("\nVendedor %s, produto %s, prec uni %f ",venda.funcionario.nome,venda.mercadoria.nome,venda.mercadoria.preco);
  printfi("\nQuantidade %d , preço total = %.2f.....",qtd,(float)qtd*venda.mercadoria.preco);  // ou resultado = qtd * venda.mercadoria.preco
  printf("\nConfirmado a venda(s/n)!....");                                                  //teria q declarar assim printf("...",resultado)
       
} 

// site: http://www.youtube.com/watch?v=5h8PBYrTCRY
