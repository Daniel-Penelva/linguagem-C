#include<stdio.h>
#include<stdlib.h>

main() 
{
       
int v1 = 100;
int v2 = 280;

int *ponteiro;    // ponteiro para um inteiro
int **Pponteiro;  // ponteiro para um ponteiro de inteiro

 ponteiro = &v1;
 
 Pponteiro = &ponteiro;
 
  printf("Valor do Pponteiro = %d \n O endere�o = %p \n",**Pponteiro, &Pponteiro);  
  
  ponteiro = &v2;
  
  //Pponteiro = &ponteiro;                          -> nao � necessario colocar, pois os valores continuam no mesmo endere�o
  
  printf("O novo valor do Pponteiro = %d \n O endere�o = %p \n",**Pponteiro, &Pponteiro);  
       
  
printf("\n\n");
system("pause");;
}























