#include<stdio.h>
#include<stdlib.h>
/*
Em C e C++ podemos redefinir um tipo de dado dando-lhe um novo nome.
Essa forma de programação ajuda em dois sentidos: 1º. Fica mais simples entender para que serve tal tipo de dado; 2º. 
É a única forma de conseguirmos referenciar uma estrutura de dados dentro de outra (struct dentro de struct).

Para redefinirmos o nome de um tipo de dado usamos o comando typedef, que provém de type definition.
Typedef faz o compilador assumir que o novo nome é um certo tipo de dado, e então, passamos a usar o novo nome da mesma forma que usaríamos o antigo.
Por exemplo, podemos definir que, ao invés de usarmos int, agora usaremos inteiro ou, ao invés de usarmos float, usaremos decimal.
Typedef deve sempre vir antes de qualquer programação que envolva procedimentos (protótipo de funções, funções, função main, structs, etc.) e sua sintase base é:

typedef nome_antigo nome novo;

*/


typedef int inteiro;
typedef float decimal;
typedef char nome;
main()
{
 
  inteiro x = 22;
  decimal y = 1.8;
  nome z[20] = "Daniel";

 printf("x = %d\n",x); 
 
 printf("y = %.2f\n",y);
 
 printf("nome = %s\n",z);
 
printf("\n\n"); 
system("pause");
return 0;
}
