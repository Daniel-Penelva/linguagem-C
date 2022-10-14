#include<stdio.h>
#include<conio.h>

main()
{

int continua, contador;

continua = 's';
contador = 0;

while (continua == 's')  // enquanto for igual a 's'
{
// comandos a serem repetidos

   printf("Repentindo....\n");

   contador = contador + 1;

   printf("Tecle 's' se deseja continuar\n");
   continua = getch();
}

if (contador == 0)
  {
    printf("O bloco NAO foi repetido.");
  }
  else 
  {
    printf("O bloco foi repetido %d vezes", contador); 
  }


getch();    
}   

