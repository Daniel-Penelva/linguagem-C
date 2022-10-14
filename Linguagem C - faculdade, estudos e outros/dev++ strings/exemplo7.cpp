#include<stdio.h>
#include<stdlib.h>
#include<string.h>

main()
{
       
  char palavra1[50] = "Linguagem c "; 
  char palavra2[60] = "LINGUAGEM C";
  
   printf("\n Frase1: %s ",palavra1);
printf("\n");   
   printf("\n Frase2: %s ",palavra2);
printf("\n");    
   
   if((strcmp(palavra1,palavra2))==0)
    {
      printf("\nR: A frase eh igual\n");                                 
    }
   else
    {
     printf("\nR: A frase nao eh igual\n");               
    }
  
printf("\n");  
  printf("\n strcmp = comparar duas strings");
  
 
printf("\n\n");
system("pause");;
}
