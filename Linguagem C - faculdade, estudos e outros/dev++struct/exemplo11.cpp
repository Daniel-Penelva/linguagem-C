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

/*Podemos definir uma lista de valores para colocar na estrutura(como nos arrays)*/    
   
   struct pessoa p = {"Daniel","Tijuca",24,277};   // os valores tende a estar na mesma ordem que esta no struct
   
   struct pessoa p1 = {"Daniel","Tijuca",24}; // se por acaso nao colocar um dos valores, dará zero.
   
   struct pessoa p2 = {"Daniel","",24,277}; 
   
  
   printf("\nValores : %s ,%s ,%d ,%d",p.nome, p.rua,p.idade,p.numero);
      
   printf("\nValores : %s ,%s ,%d ,%d",p1.nome, p1.rua,p1.idade,p1.numero);   
      
   printf("\nValores : %s ,%s ,%d ,%d",p2.nome, p2.rua,p2.idade,p2.numero);
   
   
printf("\n\n");
system("pause");;
}
// link: http://www.youtube.com/watch?v=CAnQ6i8OwJA&feature=relmfu
