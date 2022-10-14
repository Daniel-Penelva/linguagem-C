/*
Elabore um algoritmo que leia um valor inteiro n e armazene em cada posição do vetor fat o valor do fatorial daquela posição. Por exemplo, 
se n = 4, o algoritmo deverá gerar e imprimir: 
*/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>

int fat[100];
int i,j,n;

main()
{
setlocale(LC_ALL, "Portuguese");

  printf("Entre com o valor de n \n");
  scanf("%d",&n);
  
  printf("\n");
  fat[0] = 1;
  
  for(i=0; i<=n; i++)
   {
   	 fat[i] = 1;
   	 
   	for(j=1; j<=i; j++)
   	 fat[i] = fat[i] * j;
   }
   
   printf("Impressão Fatorial \n");
   
    for(i=0; i<=n; i++)
    {
        printf("\n fat[%d] = %d",i, fat[i]);	
    }
   
   printf("\n");
  
system("pause");
return 0;
}
