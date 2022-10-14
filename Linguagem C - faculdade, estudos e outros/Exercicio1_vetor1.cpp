/*
Elabore um algoritmo que leia um conjunto de 10 dados numéricos inteiros e gere dois vetores, o primeiro (vetor X) contendo os elementos pares e 
o segundo (vetor Y) contendo os elementos ímpares. 
*/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>

int x[10], y[10];
int i,num, ip, ii;


main()
{

setlocale(LC_ALL,"Portuguese");

ip = 0;
ii = 0;

   printf("Entre com os numeros \n");
   for(i=0; i<10; i++)
    {
    	printf("\n num= ");
    	scanf("%d", &num);
    	
    	if(num % 2 == 0)
    	 {
    	 	//vai armazenando os numeros numeros pares num vetor
    	 	x[ip] = num;
    	    ip = ip + 1;
    	 } 
    	 else
    	 {
    	 	y[ii] = num;
    	 	ii++;
    	 }
    }
    
    printf("\n");
    printf("Numeros Pares \n");
    for(i=0; i<ip; i++)
    {
    	printf("x[%d] = %d \n",i, x[i]);
    }
    
    printf("\n");
    printf("Numeros Impares \n");
    for(i=0; i<ii; i++)
    {
    	printf("y[%d] = %d \n",i, x[i]);
    }
        
system("pause");
return 0;
}
 
