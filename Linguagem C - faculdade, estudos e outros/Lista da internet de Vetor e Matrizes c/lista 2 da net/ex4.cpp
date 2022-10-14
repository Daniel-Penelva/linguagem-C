#include<stdio.h>
#include<string.h>

int main()
{ int i=0;
  char nome[2][30];
  char aux[30];
  
  
  
  for(i=0; i<2; i++){
   printf("\n Entre com o %da. nome:", i+1);
   gets(nome[i]);
  }
  
   for(i=0; i<1; i++){
    if(strcmp(nome[i], nome[i+1]) > 0)
     {
       strcpy(aux, nome[i]);
       strcpy(nome[i], nome[i+1]);
       strcpy(nome[i+1], aux);                  
     }
  }
  
   for(i=0; i<2; i++){
   printf("\n Nomes em ordem alfabetica: %s",nome[i]);
  }
  
getchar();
 }
  
  
  
  
  
  
  
  
  
  
  
