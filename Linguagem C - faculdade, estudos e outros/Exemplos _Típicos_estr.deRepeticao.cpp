#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) 
{
int quantidade;
int contador;
double valor;
double soma = 0;
double media;

// Solicita a quantidade de n�meros que devem ser lidos
 printf("Quantidade de valores: ");
 scanf("%d", &quantidade);

// Solicita cada um dos n�meros e soma-o
  for (contador = 1; contador <= quantidade; contador++) {
   printf("Valor: ");
   scanf("%lf", &valor);
   
   soma += valor;
  }

 media = soma / quantidade;
 printf("M�dia: %f", media);
 
system("pause");
return 0;
}
