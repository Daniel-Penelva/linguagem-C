#include<stdio.h>
#include<conio.h>

main()
{
      
int continua, contador;

contador = 0; 

// nao precisamos inicializar a variável 'continua' pois o teste é feito 
// depois

do 
{
// comandos a serem repetidos

   printf("Repentindo....\n");

   contador = contador + 1;

   printf("Tecle 's' se deseja continuar\n");
   continua = getch();
} while (continua == 's');
 

printf("O bloco foi repetido %d vezes", contador);      
      
      
getch();

}   
