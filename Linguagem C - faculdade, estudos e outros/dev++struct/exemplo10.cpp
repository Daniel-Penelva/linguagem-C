#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct pessoa
{
  char nome[50], rua[50];
  int idade, numero;              
};

main()
{

  struct pessoa p;
  
  strcpy(p.nome,"Daniel");
  strcpy(p.rua,"Rua 1");
  
  p.idade = 24;
  p.numero = 277;
  
  printf("Nome: %s  e Rua: %s \n",p.nome, p.rua);
  printf("Idade: %d e numero: %d ",p.idade, p.numero);

printf("\n\n");
system("pause");;
}
// link: http://www.youtube.com/watch?v=CAnQ6i8OwJA&feature=relmfu
