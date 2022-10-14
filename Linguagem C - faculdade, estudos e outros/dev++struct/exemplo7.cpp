#include<stdio.h>
#include<stdlib.h>

struct carro
{
  char modelo[10];
  int quant;
  float venda;         
       
};

main()
{
float total_estoque;

     
  struct carro car;
  
  
  printf("Entre com o modelo:\n");
  scanf("%s",&car.modelo);
  car.quant = 5;
  car.venda = 500.00;
  
  total_estoque = car.quant * car.venda;
  
  printf("Modelo do carro : %s  \n quantidade : %d  \n valor de venda : %.2f \n\n",car.modelo,car.quant,car.venda);  
  printf("\n Total de Estoque R$ %.2f  ",total_estoque);
      
      
printf("\n\n");      
system("pause");
return 0;      
}
