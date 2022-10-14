#include<stdio.h>
#include<conio.h>
int main()
{   
int numero=1;
int n=20;

printf("\nExemplo: Estrutura\n");
printf("\n While = enquanto(condição){.......codigo......}");
printf("\n\n");

  while(numero <= 10)
   {
     printf("%d ",numero);   // ou printf("%d ",numero++);
     numero++;               //cremento       
   }

printf("\n\n");
printf("\n do = faça{\n.......codigo......}While = enquanto(condição)");
printf("\n\n");
   
  do{
     printf("%d ",n);
     n--;                      //decremennto
    }while(n >= 1);
 
  
getch();
return 0;
}
