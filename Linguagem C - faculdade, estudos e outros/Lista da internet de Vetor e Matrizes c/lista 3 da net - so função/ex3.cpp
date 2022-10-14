#include<stdio.h>
#include<conio.h>

int primo(int);
main()
{ int numero;

      
  printf("\n Entre com um valor inteiro:");
  scanf("%d",&numero);    
      
    if(primo(numero) == 0)
     {
       printf("\n primo(verdadeiro)");           
     }    
     else 
     {
      printf("\n O numero nao é primo(falso)");     
     } 
      
      
getch();
}
int primo(int x)
{
  if(x % 2 == 1)
   {
     return 0;
   } 
  else 
  {
    return 1;
  }
    
}
