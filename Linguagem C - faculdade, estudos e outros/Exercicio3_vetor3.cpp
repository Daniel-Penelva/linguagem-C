/*
Elabore um algoritmo que leia dois vetores num�ricos X e Y (dimens�o 10) e gere o vetor Z, de mesma dimens�o, cujo conte�do ser� o maior valor de 
cada posi��o de X e de Y. Assim se X[1] = 2 e Y[1] = 4, Z[1] ser� 4 (o maior valor).
*/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>

int x[10], y[10], z[10];
int i,num;


main()
{

setlocale(LC_ALL,"Portuguese");

   printf("Entre com os numeros \n");
   for(i=0; i<10; i++)
    {
    	printf("vetor1[%d]= ",i);
    	scanf("%d", &x[i]);
    	
    	printf("vetor2[%d]=  ",i);
    	scanf("%d", &y[i]);
    	
    	printf("\n");
    	
    	if(x[i] > y[i])
    	   z[i] = x[i];
    	else
    	   z[i] = y[i];
    }
    
    printf("\n");
    printf("Impress�o dos vetores X, Y e Z \n");
    	
	for(i=0; i<10; i++)
     {
       printf("<< x[%d]= %d >> , << y[%d] = %d >> , << z[%d]= %d \n>>",i,x[i],i,y[i],i,z[i]);
       printf("----------\n");
     }

system("pause");
return 0;    	
}
