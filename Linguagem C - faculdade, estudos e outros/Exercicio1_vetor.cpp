/*
01- Crie um algoritmo que leia 10 números inteiros e armazene no vetor x. Em seguida imprima o vetor x. Utilize a variável I como indexador. 
*/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int x[10];
int i;

main()
{
	printf("\n");
	printf("Entre com os valores de x \n");
	printf("\n");
	
	for(i=0; i<10; i++)
	 {
	 	printf("x[%d]= \n", i);
	 	scanf("%d",&x[i]);
	 }
	 	 
	printf("\n");
	
	for(i=0; i<10; i++)
	 {
	   printf("x[%d]= %d \n",i, x[i]);
	 }

system("pause");
return 0;

}



