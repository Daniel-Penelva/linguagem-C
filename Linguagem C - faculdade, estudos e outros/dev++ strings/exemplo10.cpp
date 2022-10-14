#include<stdio.h>
#include<stdlib.h>
#include<string.h>

main()
{

     
  char p1[50] = "Linguagem C";   // sao 10 caracteres
  char aux;

int i, tam = strlen(p1);  
  
  for(i=0; i<tam/2; i++){
           
     aux = p1[i];
     p1[i] = p1[tam-1-i];
     p1[tam-1-i] = aux;
   }
           
  printf("\nstring invertida: %s ",p1); 
  
  
  
 
printf("\n\n");
system("pause");;
} 
/*
    
   tam = strlen(p1)  "sao 10 caracteres" da palavra -> linguagem C
   tam = 10;
   
    10 / 2 = 5; 
                             L                 C
    linguagem C          ->  _ _ _ _ _ _ _ _ _ _ 
        |                    0 1 2 3 4 5 6 7 8 9
        5                    |                 |
                            p1                 p1[tam-1-i]              
  
                            
                                    p1[i] -> i=0
                               aux = p1[0]  -> aux vai para posição zero[0];vai guardar na posição zero => aux = 0 ,guarda o caracter "L" 
                               
                               p1[i] = p1[tam-1-i]
                               p1[i] = p1[10 - 1 - 0]  ->  p1[i] = p1[9], ou seja, pi[9] = C;
                               
                              aux = 0 e  p1[10 - 1 - 0] = p[9] ....... ocorre a troca com o aux
                               vao trocar 
                                C                 L
                                _ _ _ _ _ _ _ _ _ _ 
                                9 1 2 3 4 5 6 7 8 0
                                
                                depois vai chamar o i++
                                
                                fazer o mesmo diagnostico
                                p1[i] -> i= 1
                                p1[10 - 1 - 0] = 8
                                .....
                                e assim vai ate terminar as trocas dos caracteres......
                                
*/

//link : http://www.youtube.com/watch?v=jNQUEpwMd_M
