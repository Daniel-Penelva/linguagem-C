#include<stdio.h>
#include<stdlib.h>

int troca (float *, float *);  
main ( ) 
{
float a, b;
   
   printf("a = %f, b = %f", a, b);
   
  printf("\n\ntroca de endereço\n\n"); 
   troca(&a, &b);   // passa o endereço de a e de b para a função troca
   printf("\na = %f, b = %f", a, b);
   
  
printf("\n\n");
system("pause");;
}
int troca (float *pa, float *pb) 
{
float aux;
  
  aux = *pa;   // troca a e b
  *pa = *pb;
  *pb = aux;
  
  return *pa;
}
