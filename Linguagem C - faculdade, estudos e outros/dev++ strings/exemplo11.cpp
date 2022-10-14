#include<stdio.h>
#include<stdlib.h>
#include<string.h>

main()
{

     
  char p1[30] = "Linguagem C";   // sao 10 caracteres
  int i,j,total=0;               //total =0, pq pensa-se quantas vogais devem ter, inicia-se com zero
  
  int tam1 = strlen(p1);  
  for(i=0; i<tam1; i++){
    if(p1[i] == 'a' || p1[i] == 'e' || ...)
     {
       total++;        
     }       
    }
           
  printf("\nTotal vogais: %d ",total); 
  
  
  
 
printf("\n\n");
system("pause");;
} 
