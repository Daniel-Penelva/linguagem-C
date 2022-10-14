#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
  
  
  char cidade[13];
   cidade[0] = 'R';
   cidade[1] = 'i'; 
   cidade[2] = 'o'; 
   cidade[3] = 'd'; 
   cidade[4] = 'e'; 
   cidade[5] = 'J'; 
   cidade[6] = 'a'; 
   cidade[7] = 'n'; 
   cidade[8] = 'e';
   cidade[9] = 'i'; 
   cidade[10] = 'r'; 
   cidade[11] = 'o'; 
   cidade[12] = '\0';
     
//Se o caractere '\0' não fosse colocado, a funçao printf executaria de forama errada, pois não conseguiria identificar o final da cadeia.
   
   
   printf("Cidade: %s \n",cidade);
    
   
printf("\n\n");      
system("pause");
return 0;    
}
