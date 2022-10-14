/*
Crie um algoritmo que leia um conjunto de 10 notas e armazene no vetor nota. Em seguida imprima: a média das notas (média), a maior nota (nota_max), 
a menor nota (nota_min), quantos alunos tiraram nota maior que a média (cont_maior) e quantos tiraram nota menor que a média (cont_maior). Utilize a 
variável I com indexador.
*/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

float notas[10];
float soma, media;
float nota_max =0;
float nota_min = 100000000;
int cont_maior=0 , cont_menor=0;
int i;

main()
{
    printf("\n");
	printf("Entre com as notas \n");
	printf("\n");
	
	soma=0;
	for(i=0; i<10; i++)
	{
	   printf("nota[%d]= ", i);
	   scanf("%f",&notas[i]);
	   	   	    
	    soma += notas[i];
	}
	
	media = soma/10;
	
	for(i=0; i<10; i++)
	{
		if(notas[i] > nota_max)
	    {
	       nota_max = notas[i];
	    }
	  if(notas[i] < nota_min);
	    {
	       nota_min = notas[i];
	    }
	}
	
	for(i=0; i<10; i++)
	{
		if(notas[i] > media)
		  cont_maior++;
		if(notas[i] < media)
		  cont_menor++;		  
	}


    printf("\n");	
	printf("Impressao das notas x \n");
	for(i=0; i<10; i++)
	 {
	   printf("notas[%d]= %f \n",i, notas[i]);
	 }
    printf("\n");
        
	printf("Impressao media das notas x \n");
	printf("Media: %f \n", media);
	
	printf("Impressao da maior nota \n");
	printf("Maior Nota: %2.f \n", nota_max);

    printf("Impressao da menor nota \n");
	printf("Menor Nota: %2.f \n", nota_min);	
	
	printf("Total de notas acima da média \n");
	printf("Total notas: %d \n", cont_maior);

    printf("Total de notas abaixo da média \n");
	printf("Total notas: %d \n", cont_menor);	
	
system("pause");
return 0;
}
