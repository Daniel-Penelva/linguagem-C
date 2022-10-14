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
  //Arrays de struct   
  // São duas opçoes de fazer :
         
  // 1º opção: struct pessoa p1, p2, p3; 
        
  struct pessoa p1 ={"Daniel","Rua 1",24,120};
  
  struct pessoa p2;
  strcpy(p2.nome,"Biana");
  strcpy(p2.rua,"Rua 2");
  p2.idade = 50;
  p2.numero = 277;

  struct pessoa p3 ={"Bia","Rua3",21,90};
  
 printf("\nexemplo 1:\n");  
 
  printf("\nNome: %s - rua: %s - idade: %d - numero: %d",p1.nome,p1.rua,p1.idade,p1.numero);
  printf("\nNome: %s - rua: %s - idade: %d - numero: %d",p2.nome,p2.rua,p2.idade,p2.numero);
  printf("\nNome: %s - rua: %s - idade: %d - numero: %d",p3.nome,p3.rua,p3.idade,p3.numero);
printf("\n\n");

 
  // 2º opção: struct pessoa p[3];
int i;  
  struct pessoa p[3];
  
  for(i=0; i<3; i++){
   printf("Entre com o nome:");
   scanf("%s",&p[i].nome);
   printf("Entre com a rua:");
   scanf("%s",&p[i].rua);
   printf("Entre com a idade:");
   scanf("%d",&p[i].idade);
   printf("Entre com o numero:");
   scanf("%d",&p[i].numero);
 }
  
 printf("\nexemplo 2:\n"); 
   for(i=0; i<3; i++){
     printf("Nome: %s - Rua: %s - idade: %d - numero: %d  \n\n",p[i].nome,p[i].rua,p[i].idade,p[i].numero);
   } 
  
 
 // 3º opção: struct pessoa p[4];
 struct pessoa p9[4];
  
  strcpy(p9[0].nome,"Dan");
  strcpy(p9[1].rua,"rua100");
  p9[2].idade = 29;
  p9[3].numero = 1200;
  
   
 printf("\nexemplo 3:\n"); 
  
 printf("\nNome: %s - rua: %s - idade: %d - numero: %d ",p9[0].nome,p9[1].rua,p9[2].idade,p9[3].numero);

printf("\n\n");
system("pause");;
}
// link: http://www.youtube.com/watch?v=tbvo4QFyzqQ&feature=relmfu
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
