#include<stdio.h>
#include<conio.h>
int main()
{
int n;
int soma = 0;
     printf("Digite um numero positivo para ser somado ou negativo para sair: ");
     scanf("%d", &n);
     while( n >= 10 )        // enquanto n for maior ou igaual a 10 o programa continuara a executar, se colocar menor que 10 o prog.termina
      {
        soma = soma + n;
        printf("Digite um numero positivo para ser somado ou negativo para sair: ");
        scanf("%d", &n);
      }
      printf("A soma eh %d\n", soma);
getch();
return 0;
}
