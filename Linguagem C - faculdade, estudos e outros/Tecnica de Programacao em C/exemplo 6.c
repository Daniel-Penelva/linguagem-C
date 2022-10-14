// #include <stdio.h>
// #include <stdlib.h>
// 
// /* Declara��o do prot�tipo da fun��o. Mesmo que a fun��o n�o esteja no c�digo fonte,
// � importante "informar" ao compilador que esta fun��o existe, sen�o ocorrer� erro
// na compila��o */
// void calculaSoma();
// 
// S�o variaveis global (Lembrando: est�o fora da fun��o main)
// int x, y;
// int resultado;
// 
// int main()
// {
// 	
	//Aprendendo a usar o extern
// 	printf("Entre com o valor de x: ");
// 	scanf("%d", &x);
// 
// 	printf("Entre com o valor de y: ");
// 	scanf("%d", &y);
// 	
	//Vai chamar a fun��o calcula Soma que est� no arquivo exemplo6_1extern, l� vai ser gerado a soma 
	//dos valores, onde tamb�m vai ser imprimido o resultado
// 	calculaSoma();
// 
// 
// 	return 0;
// }
// 

#include <stdio.h>
void imprime_soma (void); /* Declara��o do prot�tipo da fun��o. Mesmo que a fun��o n�o esteja no c�digo fonte, 
                             � importante "informar" ao compilador que esta fun��o existe, sen�o ocorrer� erro
                             na compila��o */
 
int iValor_a; /* Declara��o das vari�veis p�blicas, ou seja, elas estar�o dispon�veis para uso em todo programa */
int iValor_b;
 
int main (void)
{
 
   printf ("Entre com os valores:");
   scanf ("%d %d", &iValor_a, &iValor_b);
   imprime_soma();
 
   return 0;
}