/*
Elabore um algoritmo em C que leia um conjunto de 10 dados num�ricos reais e armazene no vetor x. Em seguida, o algoritmo dever� gerar o vetor y de 
dimens�o 10 de tal forma que o conte�do de y em cada posi��o seja a soma dos valores de x at� a referida posi��o. Observe no exemplo abaixo:
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
