#include<stdio.h>
#include<stdlib.h>

/*

Bloco de Nota:
Caracteres escape ou especificadores de formato são utilizados para determinar o tipo de dado que será armazenado em uma variavel 
ou para exibir o valor de uma variavel na tela 

 Os caracteres mais escape mais usados são:
 
 %c -> atribuição dos valores do tipo char(caracter);
 %s -> atribuição de valores do tipo string(texto);
 %d -> atribuição de valores do tipo int, long int (inteiros);
 %f -> atribuição de valores do tipo float (valores reais, com casas decimais)

*/ 

main()
{

char nome[40];    //"nome[40]" nome da variavel ; [40] quantidade de caracter que pode usar
int idade;
char sexo;
char endereco[100];
char telefone[15];
float salario;


  printf("\n Entre com o seu nome:");            
  gets(nome);                                  // ou scanf("%s ",&nome);
/*
o gets é uma função para pegar o que o usuario escreveu na tela, so tem um parametro, só precisa do nome da variavel,usa-se para pegar 
um valor como um texto , vai pegar tudo que o usuario digitou. O  gets anula o ENTER que o usuario digitou, e esse ENTER
fica armazenado no programa e por causa disso pode acontecer algum problema por isso é melhor usar o gets
*/

printf("\n\n");

  printf("\n Entre com a sua idade:");            
  scanf("%d",&idade);
 
/* o scanf usa dois parametros, o tipo do caracter(%d = int) e o endereço de memoria(&), a variavel(idade), nada mais é que um rotulo 
para armazenar um valor no endereço de memoria.(lembrar : o programa nao vai entender o rotulo)              
*/
getchar();           
// como nao esta usando o gets é preciso usar o "getchar();" para q qnd o usuario apertar o ENTER possa pular e seguir para outra informaçao          
printf("\n\n");

  printf("\n Entre com o seu sexo (M = masculino e F = feminino):");            
  scanf("%c",&sexo);
  getchar(); 
  
printf("\n\n");

  printf("\n Digite seu endereço:");            
  gets(endereco);  

printf("\n\n");
  
  printf("\n Digite seu telefone:");            
  gets(telefone);
 
printf("\n\n");
  
  printf("\n Entre com o salario(ex: 12.000):");  // nao pode usar virgula;          
  scanf("%f",&salario);
  
printf("\n\n");

  printf("\nSeu Cadastro esta abaixo\n");
  
  printf("Nome : %s \n",nome);                // quebra de linha na esquerda 
  printf("Idade : %d \n",idade);
  printf("\nSexo : %c ",sexo);               // quebra de linha uma abaixo da outra 
  printf("Endereço : %s \n",endereco);
  printf("Telefone : %s \n",telefone);
  printf("Salario : %.2f \n\n",salario);           // "%.2f" so pod ter duas casas decimais depois da virgula

printf("\n\n");
system("pause");;
}
