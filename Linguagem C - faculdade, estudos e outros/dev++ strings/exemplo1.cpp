#include<stdio.h>
#include<stdlib.h>
/*
Cadeias de caracteres (strings), em C, s�o representadas por vetores do tipo char terminadas, obrigatoriamente, pelo caractere nulo ('\0'). 
Portanto, para armazenarmos uma cadeia de caracteres, devemos reservar uma posi��o adicional para o caractere de fim da
cadeia. Todas as fun��es que manipulam cadeias de caracteres (e a biblioteca padr�o de C oferece v�rias delas) recebem como par�metro 
um vetor de char, isto �, um ponteiro para o primeiro elemento do vetor que representa a cadeia, e processam caractere por caractere,
at� encontrarem o caractere nulo, que sinaliza o final da cadeia.

Por exemplo, o especificador de formato %s da fun��o printf permite imprimir uma cadeia de caracteres. A fun��o printf ent�o recebe um 
vetor de char e imprime elemento por elemento, at� encontrar o caractere nulo.

Se o caractere '\0' n�o fosse colocado, a fun��o printf executaria de forma errada, pois n�o conseguiria identificar o final da cadeia.
*/
main()
{

//forma convencional
  
 char nome[100] = {'a','e','i','o','u','\0'};  // detalhe quando terminar tem que usar '\0'; {} chaves qnd � mais de uma letra
  
   printf("\nNome: %s ",nome);

//forma especial

char nome1[20] = {"Daniel"};

  printf("\nNome: %s ",nome1); 
  
  
 char cidade[] = "Rio de Janeiro";
 printf("\nCidade: %s ",cidade);
  
  
printf("\n\n");
system("pause");;
}
/*

char s1[] = "";
char s2[] = "Rio de Janeiro";
char s3[81];
char s4[81] = "Rio";

Nestas declara��es:
A vari�vel s1 armazena uma cadeia de caracteres vazia, representada por um vetor com um �nico elemento, o caractere '\0'. 

A vari�vel s2 representa um vetor com 15 elementos.

A vari�vel s3 representa uma cadeia de caracteres capaz de representar cadeias com at� 80 caracteres, j� que foi dimensionada com 
81 elementos. Esta vari�vel, no entanto, n�o foi inicializada e seu conte�do � desconhecido. 

A vari�vel s4 tamb�m foi dimensionada para armazenar cadeias at� 80 caracteres, mas seus primeiros quatro elementos foram atribu�dos
na declara��o.

*/
