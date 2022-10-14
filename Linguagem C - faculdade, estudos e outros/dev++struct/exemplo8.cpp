#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct pessoa{
 
 char nome[20], rua[20];
 int idade, numero;
             
};

main()
{
      
// tb pode ser!
/*  
   ( Sem struct )
    
    char nome1[20], nome2[20], nome3[50], nome4[20];
    char rua1[20], rua2[20], rua3[20], rua4[20]; 
    int idade1, idade2, idade3, idade4;
    int numero1, numero2, numero3, numero4;
    
    struct pessoa p1, p2, p3, p4;
    
onde p1 é uma pessoa e seus dados;
onde p2 é uma pessoa e seus dados;
onde p3 é uma pessoa e seus dados;
onde p4 é uma pessoa e seus dados;
 
*/  
int soma;      
   
  struct pessoa p;
  
  p.idade = 24;
  
  printf("Entre com o numero:\n");
  scanf("%d",&p.numero);
 
  printf("Entre com o nome:\n");
  gets(p.nome);
  
  soma = p.numero + p.idade;
  
  printf("Idade : %d \n numero : %d \n nome: %s \n\n Soma = %d \n",p.idade,p.numero,p.nome,soma);
  
  
          
printf("\n\n");      
system("pause");
return 0;        
}   
  
  
  
  
  
  
  
