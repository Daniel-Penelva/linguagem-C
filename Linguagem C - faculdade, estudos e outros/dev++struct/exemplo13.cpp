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
      
  struct pessoa p = {"Daniel","Tijuca",24,277};
  
    struct pessoa p2;  
    
    p2 = p;
    
    printf("\n Nome : %s - Rua: %s - idade:%d - numero:%d ",p2.nome,p2.rua,p2.idade,p2.numero);  
      
     
printf("\n\n");
system("pause");;
}
// link: http://www.youtube.com/watch?v=CAnQ6i8OwJA&feature=relmfu
