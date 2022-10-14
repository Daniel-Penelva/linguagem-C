#include<stdio.h>
#include<stdlib.h>

main()
{ float n1,n2,soma,sub,mult,div;
  int op;
  
  printf("Digite uma opção:");
  printf("\n1.Soma");
  printf("\n2.Subtração");
  printf("\n3.Multiplicação");
  printf("\n4.Divisão\n");
  scanf("%d", &op);
  
switch(op){
          
case 1 : printf("Digite o primeiro numero:");
         scanf("%f", &n1);
         printf("Digite o segundo numero:");
         scanf("%f", &n2);
         
         soma = n1 + n2;
         printf("Valor da soma:%f", soma);
         break;
         
case 2 : printf("Digite o primeiro numero:");
         scanf("%f", &n1);
         printf("Digite o segundo numero:");
         scanf("%f", &n2);
         
         sub = n1 - n2;
         printf("Valor da subtração:%f", sub);
         break;
         
case 3 : printf("Digite o primeiro numero:");
         scanf("%f", &n1);
         printf("Digite o segundo numero:");
         scanf("%f", &n2);
         
         mult = n1 * n2;
         printf("Valor da multiplicação:%f", mult);
         break;
         
case 4 :  printf("Digite o primeiro numero:");
         scanf("%f", &n1);
         printf("Digite o segundo numero:");
         scanf("%f", &n2);
         
         div = n1 / n2;
         printf("Valor da divisão:%f", div);
         break;
         
default : printf("Erro! Seu burro tenta de novo.");
          break;

  }
 
 
system("pause");
}      
      
