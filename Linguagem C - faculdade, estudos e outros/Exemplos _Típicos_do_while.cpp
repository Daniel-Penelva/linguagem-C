#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
int quantidade = 0;
double valor;
double soma = 0;
double media;

// Solicita cada um dos n�meros e soma-o
  printf("Escreva os valores, terminando com um n�mero negativo.\n");
   do {
       scanf("%lf", &valor);
         if(valor >= 0.0)    // nessa condi�ao qnd o usuario digita um numero negativo termina o while, vai  
          {
            soma += valor;
            quantidade++;
          }
      }while(valor >= 0.0);

// Calcula e mostra a m�dia
  media = soma / quantidade;
  printf("Media: %f", media);

system("pause");
return 0;
}
/*
IMPORTANTE:
<<<<<<<<<<<<< Compara��o com o programa anterior = Exemplo_Tipico_while >>>>>>>>>>>>
Para este programa, � dif�cil decidir qual estrutura de repeti��o � mais vantajosa: o
while o do...while. Os dois programas s�o id�nticos quanto ao resultado produzido.

O do...while � menos elegante pois � necess�rio verificar a condi��o duas vezes e
por exigir um if dentro do do...while. O while, tem o inconveniente de exigir duas linhas com o comando scanf.          
*/
