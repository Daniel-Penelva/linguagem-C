/*
Crie um algoritmo que leia um conjunto de números inteiros e armazene no vetor x de 20 posições. Utilize a variável I com indexador e como regra de parada o 
valor 9999 (fim de dados). Informe quantos valores foram lidos (cont).
*/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int x[20];
int i,cont;

main()
{
    printf("\n");
	printf("Entre com os valores de x \n");
	printf("\n");	
	
	i=0;
	
	printf("x[%d] = ",i);
	scanf("%d",&x[i]);
	
	cont = 1;
	while(x[i] != 9999 && i<19)
	{
		i = i+1;  // i++
		cont++;
		
		printf("x[%d] = ",i);
	    scanf("%d",&x[i]);		
	}
	
  	
  	printf("\n");
	printf("Foram lidos %d dados \n", cont);
	
	printf("Impressao do vetor x \n");
	printf("\n");
	
	for(i=0; i<10; i++)
	 {
	   printf("x[%d]= %d \n",i, x[i]);
	 }
	
system("pause");
return 0;	
}
