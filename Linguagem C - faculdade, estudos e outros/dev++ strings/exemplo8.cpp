#include<stdio.h>
#include<stdlib.h>
#include<string.h>

main()
{

//invertendo uma string

int i;      
  char palavra[50] = "Linguagem C ";   // sao 10 caracteres
  
  for(i=strlen(palavra)-1; i>=0; i--){       //str corresponde aos 10 caracteres, ou seja, str = 10;
    printf("%c",palavra[i]);                       
  }    
      
      
      
 
printf("\n\n");
system("pause");;
}
// link:http://www.youtube.com/watch?v=jNQUEpwMd_M
