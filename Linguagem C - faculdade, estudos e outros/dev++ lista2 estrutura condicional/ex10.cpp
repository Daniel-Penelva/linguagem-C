#include<stdio.h>
#include<stdlib.h>

main()
{ float n1,n2,soma,sub,mult,div;
  int op;
  
  printf("Digite uma op��o:");
  printf("\n1.Soma");
  printf("\n2.Subtra��o");
  printf("\n3.Multiplica��o");
  printf("\n4.Divis�o\n");
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
         printf("Valor da subtra��o:%f", sub);
         break;
         
case 3 : printf("Digite o primeiro numero:");
         scanf("%f", &n1);
         printf("Digite o segundo numero:");
         scanf("%f", &n2);
         
         mult = n1 * n2;
         printf("Valor da multiplica��o:%f", mult);
         break;
         
case 4 :  printf("Digite o primeiro numero:");
         scanf("%f", &n1);
         printf("Digite o segundo numero:");
         scanf("%f", &n2);
         
         div = n1 / n2;
         printf("Valor da divis�o:%f", div);
         break;
         
default : printf("Erro! Seu burro tenta de novo.");
          break;

  }
 
 
system("pause");
}      
      
