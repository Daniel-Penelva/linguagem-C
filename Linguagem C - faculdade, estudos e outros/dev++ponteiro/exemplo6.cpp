#include<stdio.h>
#include<stdlib.h>

void troca(int*,int*);
main()
{
      
int a,b;
int *pont_a=0;
int *pont_b=0;


 a = 100;
 b = 500;
 
 pont_a = &a;
 pont_b = &b;
 
 printf("\nValor de a :%d  -> Endereço a: %d",a,pont_a); 
 printf("\nValor de b :%d  -> Endereço b: %d",b,pont_b);    
      
printf("\n\n\n");
printf("\nFunçao Troca(somente os valores)\n");
  
  troca(&a, &b);
  
  printf("\nValor de a :%d  -> Endereço a: %d",a,pont_a);   
  printf("\nValor de b :%d  -> Endereço b: %d",b,pont_b);    
      
      
      
printf("\n\n");
system("pause");
}
void troca(int *ponteiroA,int *ponteiroB)
{
int aux;
 
  aux = *ponteiroA;                         //  aux = 100;
  *ponteiroA = *ponteiroB;                  // *ponteiroA = 500;
  *ponteiroB = aux;                         // *ponteiroB = 100;
  
}
