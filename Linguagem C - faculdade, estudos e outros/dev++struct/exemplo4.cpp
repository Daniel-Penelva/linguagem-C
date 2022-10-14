#include<stdio.h>
#include<stdlib.h>

typedef struct amigo{
  
  char nome[20];       
        
}amigo;

typedef struct cadastro{
 
 char nome[20];
 int idade;            
 amigo Amigo;
 
}cadastro;


main()
{    amigo Amigo;  
     cadastro cliente;
   
   printf("\nEntre com os nome:");                // quando se usa o typedef nao precisa colocar a palavra struct antes do amigo........
   scanf("%s", Amigo.nome); 
   
   printf("\nEntre com os nome:"); 
   scanf("%s", cliente.Amigo.nome);
  
printf("\n\n");      
system("pause");
return 0;      
}
