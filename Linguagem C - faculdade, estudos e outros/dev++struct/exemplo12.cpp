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
      
  // atribuiçao entre estruturas
  
  struct pessoa p = {"Daniel","Tijuca",24,277};   // os valores tende a estar na mesma ordem que esta no struct

  struct pessoa p2;         // estou copiando a estrutura "p" para "p2"
  strcpy(p2.nome,p.nome);
  strcpy(p2.rua,p.rua);
  
  p2.idade = p.idade;
  p2.numero = p.numero;
  
  printf("\n Nome : %s - Rua: %s - idade:%d - numero:%d ",p2.nome,p2.rua,p2.idade,p2.numero);
  
   
printf("\n\n");
system("pause");;
}
// link: http://www.youtube.com/watch?v=CAnQ6i8OwJA&feature=relmfu
  
