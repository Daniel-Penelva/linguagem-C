/*
Crie um algoritmo que leia um conjunto de 10 notas e armazene no vetor nota. Em seguida calcule e imprima a soma e a média das notas (média). Utilize a 
variável I com indexador.
*/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

float notas[10];
float soma, media;
int i;

main()
{
    printf("\n");
	printf("Entre com as notas \n");
	printf("\n");
	
	i=0;
	soma=0;
	while(i<9)
	{
		printf("nota[%d] = ",i);
	    scanf("%f",&notas[i]);	
	    
	    soma += notas[i];  //soma = soma + notas[i]
	    i++; // i = i + 1
	}
	
 media = soma/10;
	 
	printf("Impressao soma das notas x \n");
	printf("Soma: %f \n", soma);
	
	printf("Impressao media das notas x \n");
	printf("Media: %f \n", media);
	
system("pause");
return 0;
}
