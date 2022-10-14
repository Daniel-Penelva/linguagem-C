#include<stdio.h>
#include<stdlib.h>
/*
Em C e C++ podemos redefinir um tipo de dado dando-lhe um novo nome.
Essa forma de programa��o ajuda em dois sentidos: 1�. Fica mais simples entender para que serve tal tipo de dado; 2�. 
� a �nica forma de conseguirmos referenciar uma estrutura de dados dentro de outra (struct dentro de struct).

Para redefinirmos o nome de um tipo de dado usamos o comando typedef, que prov�m de type definition.
Typedef faz o compilador assumir que o novo nome � um certo tipo de dado, e ent�o, passamos a usar o novo nome da mesma forma que usar�amos o antigo.
Por exemplo, podemos definir que, ao inv�s de usarmos int, agora usaremos inteiro ou, ao inv�s de usarmos float, usaremos decimal.
Typedef deve sempre vir antes de qualquer programa��o que envolva procedimentos (prot�tipo de fun��es, fun��es, fun��o main, structs, etc.) e sua sintase base �:

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
