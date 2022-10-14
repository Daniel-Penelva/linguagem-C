// #include <stdio.h>
// #include <stdlib.h>
// 
// extern int x,y; 
// extern int resultado;
// 
// void calculaSoma(void)
// {
// 	
//     resultado = x + y;
// 	printf("Resultado: %d", resultado);
// 	
// 	return;
// }

#include <stdio.h>
extern int iValor_a; /* Declarando que EXISTEM, em outro programa, as vari�veis p�blicas, ou seja, elas estar�o dispon�veis para uso em todo o programa. */
extern int iValor_b;
 
void imprime_soma(void)
{
   printf ("Soma %d\n", iValor_a + iValor_b); /* uso das vari�veis p�blicas */
   return;
}