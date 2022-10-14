/*
Trabalho: Lógica de Programação
Aluno: Daniel Penelva de Andrade - Matricula:2014000067
Exercício 1) Escreva um programa leia nome, sexo e idade. Se sexo for masculino (M) e idade menor que 25. Imprimir o nome da pessoa e a palavra ACEITA. Caso 
contrário imprimir NAO ACEITA. 
*/
#include<stdio.h>
#include<stdlib.h>

main()
{ 
  char nome[50];
  char sexo;	
  int idade;
	
	printf("Digite o seu nome: ");	
	scanf("%s",&nome);
	printf("Digite o seu sexo (<M para Masculino> e <F para feminino>): ");
	scanf(" %c",&sexo);
	printf("Digite sua idade: ");
	scanf("%d",&idade);
	
	if((sexo == 'M')||(sexo == 'm'))
	{ if(idade < 25)
	  {
	     printf("Nome: %s \n", nome);
	     printf("ACEITA");
	  } 
	}
	if((sexo == 'M')||(sexo == 'm'))
	{ if(idade >= 25)
	 {
	   printf("NAO ACEITA");	
	   
	 } 
    }
    else
    {
    	printf("NAO ACEITA");
    }
	

printf("\n");
system("pause");
return 0;
}
