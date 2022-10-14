// Programa que calcula a idade média de um grupo de pessoas.
// A finalização da entrada de números é dada por um -1

int soma, quantidade, idade;

#include<stdio.h>
#include<conio.h>

main()
{

float media;

soma = 0;
quantidade = 0; 
idade = 0;

while (idade != -1) 
{
// comandos a serem repetidos

   printf("Idade da pessoa %d. (tecle -1 se quiser encerrar).\n",quantidade+1); // quantidade + 1 -> é um tipo de contador, que pode ser tb assim quantidade++;
   scanf("%d", &idade);

   if (idade >=0)
   { 
     soma = soma + idade;
     quantidade = quantidade + 1;        // ou quantidade++;
   }
}

// Faz o calculo da media de idade

if (quantidade >0)
{
   media = (float) soma / quantidade;
   printf("A media de idade das %d pessoas eh: %5.2f", quantidade,
            media);
}
else 
{
  printf("Nenhum dado foi informado."); 
}


getch();    
}   
