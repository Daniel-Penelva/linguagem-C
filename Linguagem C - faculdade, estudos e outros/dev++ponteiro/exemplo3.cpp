/* Implemenbte uma função com as seguintes caracteristicas:
a) Recebe dois numeros inteiros do usuario.
b) Retorna 1 se os numeros são iguais, 0 se são diferentes e -1 se a soma ou o produto estoura a faixa dos inteiros.
Alem disso, retorna a soma e o produto dos dois numeros              
*/

#include<stdio.h>
#include<stdlib.h>

int numero(int,int,int *,int *);
main()
{
   
int n1, n2;
int soma, produto;

  printf("\nEntre com o primeiro numero inteiro:");
  scanf("%d",&n1);
  printf("\nEntre com o segundo numero inteiro:");
  scanf("%d",&n2);
  
  
  printf("\n numero igual = 1 \n numero diferente = 0 \n soma ou multiplicação entre a faixa dos inteiros = -1");
  
printf("\n\n");

  printf("\nR: %d ",numero(n1, n2, &soma, &produto));
  printf("\nSoma = %d", soma);
  printf("\nProduto = %d", produto);
  
printf("\n\n");
system("pause");
}
int numero(int x, int y, int *pontSoma, int *pontProduto)
{    
  
  *pontSoma = x + y;
   
  *pontProduto = x * y;  
  
  if(( x + y < -33767) || (x + y > 33767))
   {
    return -1;     
   }
  else 
  if(( x * y < -33767) || (x * y > 33767))
   {
    return -1;
   }     
  else
  if(x == y)
   {
     return 1;
   }    
  else                
   {
     return 0;
   } 

// faixa dos inteiros varia entre -33767 até 33767.(O que se pede nao pode estourar esta faixa)
// link : http://www.youtube.com/watch?v=LUyI249exKw&feature=autoplay&list=PL896C8F714C037F3D&playnext=2
}
