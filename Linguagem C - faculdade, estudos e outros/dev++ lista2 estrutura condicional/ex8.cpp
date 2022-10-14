#include<stdio.h>
#include<conio.h>
main()
{ 
  float alt1,alt2,peso1,peso2;
  int op;
  
  printf("Escolha uma opção:\n");
  printf("\n1Masculino");
  printf("\n2Feminino\n");
  scanf("%d", &op);
  
switch(op){
         
{case 1 : printf("Digite a altura:\n");
         scanf("%f", &alt1);
         
         peso1 = (72,2 * alt1) - 58;
         printf("O peso masculino:%f\n", peso1);
         break;}
         
         
{case 2 : printf("Digite a altura:\n");
         scanf("%f", &alt2);
         
         peso2 = (62,1 * alt2) - 44,7;
         printf("O peso feminino:%f", peso2);
         break;}
         
default: printf("Erro!nunca tente de novo.");
}

getch();
return 0;
}
