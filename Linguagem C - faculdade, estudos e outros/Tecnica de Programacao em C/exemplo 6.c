// #include <stdio.h>
// #include <stdlib.h>
// 
// /* Declaração do protótipo da função. Mesmo que a função não esteja no código fonte,
// é importante "informar" ao compilador que esta função existe, senão ocorrerá erro
// na compilação */
// void calculaSoma();
// 
// São variaveis global (Lembrando: estão fora da função main)
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
	//Vai chamar a função calcula Soma que está no arquivo exemplo6_1extern, lá vai ser gerado a soma 
	//dos valores, onde também vai ser imprimido o resultado
// 	calculaSoma();
// 
// 
// 	return 0;
// }
// 

#include <stdio.h>
void imprime_soma (void); /* Declaração do protótipo da função. Mesmo que a função não esteja no código fonte, 
                             é importante "informar" ao compilador que esta função existe, senão ocorrerá erro
                             na compilação */
 
int iValor_a; /* Declaração das variáveis públicas, ou seja, elas estarão disponíveis para uso em todo programa */
int iValor_b;
 
int main (void)
{
 
   printf ("Entre com os valores:");
   scanf ("%d %d", &iValor_a, &iValor_b);
   imprime_soma();
 
   return 0;
}