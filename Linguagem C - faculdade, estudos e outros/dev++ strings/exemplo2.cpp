#include<stdio.h>
#include<stdlib.h>

main()
{
      
  char palavra[20] = "Daniel";
  printf("\nnome: %s ",palavra);
  
  palavra[0] ='L';       // vai trocar a primeira letra do nome Daniel - Laniel
  palavra[1] ='i';       // vai trocar a segunda letra do nome Daniel - Liniel
  
  printf("\nnome: %s ",palavra);

printf("\n\n");  
//Outro exemplo
printf("\noutro exemplo\n");  
  
  char nome[20] = "Daniel";
  printf("\nnome: %s ",nome); 
  
   nome[3] = '\0';          // a partir da letra i sera ignorada e vai imprimir assim "Dan";
   printf("\nnome: %s ",nome);
    
  
printf("\n\n");
system("pause");;
}
