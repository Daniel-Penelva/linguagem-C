#include<stdio.h>
#include<stdlib.h>
#include<string.h>

main()
{

//invertendo uma string
//Obs: este exemplo so é bom em fazer se for poucas strings , imagina se fosse 20000 strings, nao vale apena fazer...
//veja a melhor opção no exemplo 10

int i; 
int j=0;
     
  char palavra1[50] = "Linguagem C ";   // sao 10 caracteres
  char palavra2[60];
  
  for(i=strlen(palavra1)-1; i>=0; i--){       //str corresponde aos 10 caracteres, ou seja, str = 10;
    palavra2[j] = palavra1[i];
    j++;                       
  }
  
      palavra2[j] = '\0';
      
      printf("\nstring invertida: %s ",palavra2);   
      
/*
            linguagem C
            |         |
            j         i
            
copiei a posição j que esta na variavel1 "palavra1[i]" para a variavel2 "palavra2[j]";

 (j++) ou (j=+1), ou seja soma mais um no j, que vai subindo enquanto o i vai descendo;
 
1º mudança = C inguagueml
2º mudança = C mnguagueil
3º mudança = C meguaugnil
....
ate ficar assim
 
 C megaugnil




*/     
      
 
printf("\n\n");
system("pause");;
}
// link:http://www.youtube.com/watch?v=jNQUEpwMd_M
