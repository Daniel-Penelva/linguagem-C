/*
Elabore um algoritmo em C que leia um conjunto de 10 dados numéricos reais e armazene no vetor x. Em seguida, o algoritmo deverá gerar o vetor y de 
dimensão 10 de tal forma que o conteúdo de y em cada posição seja a soma dos valores de x até a referida posição. Observe no exemplo abaixo:
*/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>

float x[10], y[10];
int i,j;

main()
{
setlocale(LC_ALL,"Portuguese");

  printf("Entre com o valores de x \n");
  for(i=0; i<10; i++)
  {
  	printf("x[%d] = ",i);
  	scanf("%f",&x[i]);
    
    y[i] = 0;
     for(j=0; j<=i; j++)
	  y[i] = y[i] + x[j]; 	
  	
  }
	
	printf("\n");
	
	for(i=0; i<10; i++)
	{
		printf("<< x[%d] = %8.2f >>, << y[%d] = %8.2f >>", i, x[i], i, y[i]);
		printf("-------------\n");
	}
	
system("pause");
return 0;
}
