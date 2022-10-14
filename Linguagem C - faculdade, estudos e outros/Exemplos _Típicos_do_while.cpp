#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
int quantidade = 0;
double valor;
double soma = 0;
double media;

// Solicita cada um dos números e soma-o
  printf("Escreva os valores, terminando com um número negativo.\n");
   do {
       scanf("%lf", &valor);
         if(valor >= 0.0)    // nessa condiçao qnd o usuario digita um numero negativo termina o while, vai  
          {
            soma += valor;
            quantidade++;
          }
      }while(valor >= 0.0);

// Calcula e mostra a média
  media = soma / quantidade;
  printf("Media: %f", media);

system("pause");
return 0;
}
/*
IMPORTANTE:
<<<<<<<<<<<<< Comparação com o programa anterior = Exemplo_Tipico_while >>>>>>>>>>>>
Para este programa, é difícil decidir qual estrutura de repetição é mais vantajosa: o
while o do...while. Os dois programas são idênticos quanto ao resultado produzido.

O do...while é menos elegante pois é necessário verificar a condição duas vezes e
por exigir um if dentro do do...while. O while, tem o inconveniente de exigir duas linhas com o comando scanf.          
*/
