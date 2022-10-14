#include<stdio.h>
#include<stdlib.h>
/*
Cadeias de caracteres (strings), em C, são representadas por vetores do tipo char terminadas, obrigatoriamente, pelo caractere nulo ('\0'). 
Portanto, para armazenarmos uma cadeia de caracteres, devemos reservar uma posição adicional para o caractere de fim da
cadeia. Todas as funções que manipulam cadeias de caracteres (e a biblioteca padrão de C oferece várias delas) recebem como parâmetro 
um vetor de char, isto é, um ponteiro para o primeiro elemento do vetor que representa a cadeia, e processam caractere por caractere,
até encontrarem o caractere nulo, que sinaliza o final da cadeia.

Por exemplo, o especificador de formato %s da função printf permite imprimir uma cadeia de caracteres. A função printf então recebe um 
vetor de char e imprime elemento por elemento, até encontrar o caractere nulo.

Se o caractere '\0' não fosse colocado, a função printf executaria de forma errada, pois não conseguiria identificar o final da cadeia.
*/
main()
{

//forma convencional
  
 char nome[100] = {'a','e','i','o','u','\0'};  // detalhe quando terminar tem que usar '\0'; {} chaves qnd é mais de uma letra
  
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

Nestas declarações:
A variável s1 armazena uma cadeia de caracteres vazia, representada por um vetor com um único elemento, o caractere '\0'. 

A variável s2 representa um vetor com 15 elementos.

A variável s3 representa uma cadeia de caracteres capaz de representar cadeias com até 80 caracteres, já que foi dimensionada com 
81 elementos. Esta variável, no entanto, não foi inicializada e seu conteúdo é desconhecido. 

A variável s4 também foi dimensionada para armazenar cadeias até 80 caracteres, mas seus primeiros quatro elementos foram atribuídos
na declaração.

*/
