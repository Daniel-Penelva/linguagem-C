#include<stdio.h>
#include<stdlib.h>
#include<string.h>

main()
{
       
  char palavra1[50] = "Linguagem C ";  //deixa um espaço antes de fechar a aspas senão vai juntar as palavras
  char palavra2[60] = "eh muito facil!";
  
  strcat(palavra1,palavra2);
  
  printf("\nFrase : %s ",palavra1);
  
  printf("\n strcat = concatenar duas strings (juntar as duas strings)\n");
  
 
printf("\n\n");
system("pause");;
}
