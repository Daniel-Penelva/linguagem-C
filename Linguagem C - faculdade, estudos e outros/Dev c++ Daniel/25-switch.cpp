#include <stdio.h>
#include <conio.h>
main()
{
      int n1, n2, n3, op;
      printf("\nEscolha uma das opcoes a seguir");
      printf("\n1. Multiplicacao");
      printf("\n2. Divisao");
      printf("\n3. Media\n");
      scanf("%d", &op);
      switch (op)
      {
             case 1: printf("\nDigite o primeiro numero: ");
                     scanf("%d", &n1);
                     printf("\nDigite o segundo numero: ");
                     scanf("%d", &n2);
                     printf("\nResultado: %d", n1 * n2);
                     break;
             
             case 2: printf("\nDigite o primeiro numero: ");
                     scanf("%d", &n1);
                     printf("\nDigite o segundo numero: ");
                     scanf("%d", &n2);
                     if (n1 > n2)
                        if (n2 != 0)
                           printf("\nResultado: .1f",n1/n2);
                        else
                            printf("\nErro! Divisao por zero");
                     if (n2 > n1)
                        if (n1 != 0)
                           printf("\nResultado: %.1f", n2/n1);
                        else
                            printf("\nErro! Divisao por zero");
                     break;
             
             case 3: printf("\nDigite o primeiro numero: ");
                     scanf("%d", &n1);
                     printf("\nDigite o segundo numero: ");
                     scanf("%d", &n2);
                     printf("\nDigite o terceiro numero: ");
                     scanf("%d", &n3);
                     printf("\nResultado: %.1f",((float)n1 + n2 +n3)/3);
                     break;
             default: printf("\nOpcao invalida! Tente novamente."); break;
      }
      getch();
}
