#include <stdio.h>
#include <conio.h>	 

int main()
{

int contador, numero;
	 
  for (contador = 500; contador >= 99; contador = contador-1){
    printf("%d \n",contador);
	 if ((contador % 2) != 0)
	    {
	      break;  // ignora o resto e para no 1º laço do for, tambem o comando printf() nao eh executada
	      printf("Numero impar: %d \n", contador);
       }
   }
	 
getch();
}
