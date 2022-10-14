#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/*
   Uma estrutura tb é um tipo de dado.
   Logo, uma estrutura pode possuir uma variavel
   do tipo de outra estrutura previamente definida.
   A isso chamamos de ESTRUTURAS ANINHADAS
*/
/*forma geral:
        
  struct nome struct1
  {
     .....    
  };
  
  struct nome struct2
   {
     .....
     
     struct nome struct1 nome;    
   };
*/

struct endereco
{
  char rua[50];
  int numero;              
};

struct pessoa
{
  char nome[50];
  int idade;  
  struct endereco lugar;
};

main()
{
   //So estou usando a struct pessoa --- OBS..............
  struct pessoa p;
  
  p.idade = 24;
  
/*Obs:usei a estrutura pessoa e dentro dela esta a outra estrutua cujo o nome da estr. é "endereco" 
  e o nome de sua determinada variavel da estrutura "local".  
*/
  p.lugar.numero = 1200;      
  strcpy(p.lugar.rua,"Rua 10");
 
 printf("\nSua idade : %d - seu endereço : %s numero: %d ",p.idade,p.lugar.rua,p.lugar.numero);  
  
printf("\n\n"); 
  // ou 
  
  struct pessoa p1;
  
  printf("Entre com o nome:");
  gets(p1.nome);
  
  printf("Entre com o nome da rua:");
  gets(p1.lugar.rua);
  
  printf("\nSeu nome : %s - seu endereço : %s ",p1.nome,p1.lugar.rua);


printf("\n\n");
system("pause");
return 0;

}
// link:http://www.youtube.com/watch?v=34_5n_NkDYU&feature=relmfu
