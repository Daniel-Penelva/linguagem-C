#include <stdio.h>
#include <stdlib.h>

int x[10], y[10];
int i, j;

main ()
{
	for (i=0; i<10; i++)
	{
		printf("Entre com os valores de x[%d]=",i);
		scanf("%d",&x[i]);
	}
	
	for (i=0; i<10; i++)
	
	{
		y[i]=0;
		for (j=0; j<=i; j++)
		y[i]= y[i]+ x[j];
		
	}
	
		for (i=0; i<10; i++)
		{
			printf("\n y[%d]= %d",i,y[i]);
		}
}
