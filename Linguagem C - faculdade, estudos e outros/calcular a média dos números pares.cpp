#include <stdio.h>
#include <conio.h>
int main() 
{
int cont, soma;
cont = 1;
soma = 0;

  while(cont <= 100) {
    if(cont % 2 == 0)
      soma = soma + cont;    // soma += cont;
      cont = cont + 1;       
  }

  printf("A soma dos numeros pares eh %d", soma);

getch();
return(0);
}
