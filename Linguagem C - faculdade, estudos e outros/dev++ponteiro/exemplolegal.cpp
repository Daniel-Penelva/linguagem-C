#include<stdio.h>
#include<stdlib.h>

int soma(int,int);
int subtrair(int,int);

int (*sub)(int,int) = subtrair;  // aqui criei um atalho para a função subtrair; "(*sub)" = o nome do atalho do alias(um ponteiro)
                                // tb pode chamar esta função de "alias"

int operacao(int x, int y, int(*func)(int, int));
//aqui é uma funçao que tb recebe uma função "int(*func)(int, int), esta função vai receber as variaveis "x" e "y" da função operacao

main() 
{
      
int i,j;

  i = operacao(7,5,soma);
  
  j = operacao(20,i,sub); // com uma unica diferença é que eu nao chamo pela funçlão subtrair e sim pelo o apelido que criei, ou seja, 
                         //o atalho para funçao subtrair; (é só uma maneira diferente de fazer, obtençao de mais conhecimento)
  printf("\nResultado das operaçoes\n"); 
  
  printf(" 7 + 5 = %d \n",i); 
  printf(" 20 - %d = %d \n\n",i,j);  
      


printf("\n\n");
system("pause");;
}
int soma(int a, int b)
{
    
  return (a+b);    
    
}
int subtrair(int a, int b)
{
    
  return (a-b);    
    
}
int operacao(int x, int y, int(*func)(int, int)) //aqui é uma funçao que tb recebe uma função "int(*func)(int, int)", esta função vai receber as variaveis " 
{                                            
int op;
 
 op = func(x,y);  // tb pode ser "op = (*func)(x,y);"  // estes valores "x" e "y" sao as variaveis "a" e "b" das funçoes somar e subtrair,
 return (op);    //em a vai receber o valor 7 e em b vai receber o valor 5 vai para funçao somar a + b = 12, com isso, "op" vai valer 12 
                 //retornando para o  "i" que vai valer 12;
}
// link : http://www.youtube.com/watch?v=ME4d3Q-HFjM&feature=channel&list=UL
