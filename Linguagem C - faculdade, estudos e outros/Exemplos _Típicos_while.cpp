#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
int quantidade;
int contador;
double valor;
double soma = 0;
double media;

// Solicita a quantidade de números que devem ser lidos
  printf("Quantidade de valores: ");
  scanf("%d", &quantidade);

// Solicita cada um dos números e soma-o
  contador = 1; //inicia com o valor 1-> Lá no conatdor++ vai incrementar passando para o 2;
   while (contador <= quantidade) {
     printf("Valor: ");
     scanf("%lf", &valor);
     
     soma += valor;
     contador++;
    }

// Calcula e mostra a média
  media = soma / quantidade;
  printf("Media: %f", media);

system("pause");
return 0;
}
