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
float soma, media, nota_max, nota_min;
int i,cont_maior, cont_menor;


main()
{
    printf("\n");
	printf("Entre com as notas \n");
	printf("\n");
	
	soma=0;
	cont_maior=0;
	cont_menor=0;
	i=0;
	
	while(i <= 9)
	{
	   printf("nota[%d]= ", i);
	   scanf("%f",&notas[i]);
	   
	   soma = soma + notas[i];
	   i++; // i = i + 1;		
	}
	
	media = soma/10;
	
	//Calculo da nota maxima e da nota minima
	//fiz a primeira nota ser igual a nota_max o msm para nota_min
	nota_max = notas[0];
	nota_min = notas[0];
	
	for(i=0; i<10; i++)
	{
		if(notas[i] > nota_max)
		 nota_max = notas[i];
	    if(notas[i] < nota_min)
		 nota_min = notas[i];
	}

   for(i=0; i<10; i++)
	{
		if(notas[i] > media)
		 cont_maior = cont_maior + 1;  //cont_maior++
		else if(notas[i] < media)
		 cont_menor = cont_menor + 1;  //cont_menor++
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
	
	
