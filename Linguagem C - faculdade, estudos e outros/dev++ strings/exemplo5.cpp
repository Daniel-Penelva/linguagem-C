#include<stdio.h>
#include<stdlib.h>
#include<string.h>

main()
{
       
  char palavra[50] = "Linguagem C";
  
  char novapalavra[50];  // a variavel "novapalavra" vai copiar o que esta na variavei "palavra"
  
  strcpy(novapalavra,palavra);
  
   printf("\n Frase: %s ",novapalavra);
  
   printf("\n strcpy = copiar uma string \n");
  
 
printf("\n\n");
system("pause");;
}
