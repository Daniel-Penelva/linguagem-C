#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) 
{
int quantidade;
int contador;
double valor;
double soma;
double media;
char repetir;

  do{
// Solicita a quantidade de n�meros que devem ser lidos
      printf("Quantidade de valores: ");
      scanf("%d", &quantidade);
      soma = 0; // inicializa soma com 0, inclusive nas demais iteracoes

// Solicita cada um dos n�meros e soma-o
        for (contador = 1; contador <= quantidade; contador++){
         printf("Valor: ");
         scanf("%lf", &valor);
         soma += valor;
        }
// Calcula e mostra a m�dia
     media = soma / quantidade;
     printf("Media: %f\n\n", media);
     printf("Deseja executar o programa novamente? (s/n) ");
     scanf(" %c", &repetir);
    
    }while(repetir == 's');
/*
o programa solicita que o usu�rio digite uma das letras �s� ou �n�, para informar se ele quer executar novamente.
A condi��o do do...while � tal que, enquanto o usu�rio terminar o bloco com a letra �s�, o programa � executado novamente.
*/
system("pause");
return 0;
}
