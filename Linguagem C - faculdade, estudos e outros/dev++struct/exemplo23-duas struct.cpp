#include<stdio.h>
#include<stdlib.h>

typedef struct compra_carro{
  char marca[20];
  int velocidade;
  float preco;
  char modelo[20];
  
}compra_carro;

typedef struct dados_carro{
  char cor[20];
  int ano;
  float quilometro; 
  struct compra_carro carroModelo;
         
}dados_carro;


main()
{
 
 compra_carro compra;
 dados_carro informa;
  
  printf("Entre com a marca do carro:\n");
  scanf("%s",&compra.marca);
  printf("Entre com a velocidade do carro:\n");
  scanf("%d",&compra.velocidade);
  printf("Entre com o preco do carro:\n");
  scanf("%f",&compra.preco);
  
  
  printf("Entre com a cor do carro:\n");
  scanf("%s",&informa.cor);
  printf("Entre com o ano do carro:\n");
  scanf("%d",&informa.ano); 
  printf("Entre com a quantidade de quilometragem do carro:\n");
  scanf("%f",&informa.quilometro);
  printf("Entre com o modelo do carro:\n");          
  scanf("%s",&informa.carroModelo.modelo);   /*aqui so estou pegando uma informação da outra struct, no exemplo 24 vou pegar todas as informaçoes*/
  
 
 printf("\nInformação do Carro\n");
 printf("marca:%s \n",compra.marca);
 printf("velocidade:%d \n",compra.velocidade);
 printf("preço:R$ %.2f \n",compra.preco);
 printf("cor:%s \n",informa.cor);
 printf("ano:%d \n",informa.ano);
 printf("quilometragem:%.2f \n",informa.quilometro);
 printf("modelo:%s \n",informa.carroModelo.modelo);
 
 
printf("\n\n"); 
system("pause");
return 0;
}
