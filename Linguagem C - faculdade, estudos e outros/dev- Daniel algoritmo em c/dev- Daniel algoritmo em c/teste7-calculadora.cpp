#include <stdio.h>
#include <conio.h>
main()
{
      char op;
      int num1, num2, r;
      
      printf("\nDigite uma opcao (+, -, /, *): ");
      scanf("%c", &op);
      printf("Digite o primeiro numero: ");
      scanf("%d", &num1);
      printf("Digite o segundo numero: ");
      scanf("%d", &num2);
      printf("Resultado: ");
      switch(op)
      {
         case '+': r = num1 + num2; break;
         case '-': r = num1 - num2; break;
         case '*': r = num1 * num2; break;
         case '/': r = num1 / num2; break;
         default: printf("Opcao invalida"); break;
      }
      printf("%d", r);
      getch();
}
