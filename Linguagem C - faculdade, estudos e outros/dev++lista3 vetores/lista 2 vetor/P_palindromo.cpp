#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{

char texto[200];
int tamanho_texto, tamanho_texto1, tamanho_texto2, j, i;

  printf("Digite a palavra, numero ou caracter para saber se eh Palindromo\n") ;
  scanf("%s",&texto);

   tamanho_texto = strlen(texto); //contagem do tamanho do texto
   printf("TAMANHO TEXTO: %d\n", tamanho_texto);

    for (i=0, j = tamanho_texto-1; i < tamanho_texto/2; i++, j--){
     if (texto[i] != texto[j]) 
      {
       printf("\nNao eh um palindromo\n");
       system("PAUSE");
       return 0;
       }
     }

printf("\nEh um palindromo\n");


system("PAUSE");
return 0;
}

