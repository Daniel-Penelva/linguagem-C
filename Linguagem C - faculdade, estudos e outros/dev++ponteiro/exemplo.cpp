#include<stdio.h>
#include<stdlib.h>

main()
{

// operadores unarios endere�o(&) e ponteiro(*)
int x =10;
printf("\n%d ",x);
printf("\n\n");
printf("\n&x = %#x",&x);   // vai indicar o endere�o da variavel x na memoria

printf("\n<<<<<<>>>>>>\n");

int *xPtr = 0;                               

xPtr = &x;   //O xPtr vai ter o mesmo endere�o (&) e a mesma variavel(x=10)

printf("\nA posi��o da memoria de xPtr = %#x",xPtr);
printf("\nO valor da variavel do endere�o xPtr ->  *xPtr = %d",*xPtr);  //usei *(o valor da variavel)
printf("\nO valor do endere�o da variavel *xPtr -> &xPtr = %#x",&xPtr);//usei &(o valor da variavel),imprimi o endere�o do ponteiro

// o endere�o de xPtr difere do endere�o de &xPtr;

printf("\n<<<<<<>>>>>>\n");

 x++;  // x =+1
 
 printf("\nNovo valor de x = %d",x);
 printf("\nNovo valor de *xPtr = %d",*xPtr);

printf("\n<<<<<<>>>>>>\n");

// calculo artimetica agora no xPtr

  (*xPtr)++;
 printf("\nNovo valor de x = %d",x);
 printf("\nNovo valor de *xPtr = %d",*xPtr);

printf("\n<<<<<<>>>>>>\n");

  xPtr++;//anda na memoria
  printf("\n x = %d \n xPtr = %#x ",x,&xPtr);  // novo endere�o



/* Resumo :
  endere�o(&)  que acessa o endere�o de uma variavel tanto sendo coma a variavel x como sendo o ponteiro *xPtr        
  ponteiro(*) que � usado na declara��o de um ponteiro como tb ao acesso do conteudo 
*/

printf("\n<<<<<<>>>>>>\n");
char c = 'a';   // nao esquecer da aspas simples ou apostrofe
char *cPtr = &c;

printf("\n O valor da variavel -> *cPtr = %c \n Endere�o de memoria da letra a -> cPtr = %#letra",*cPtr, &cPtr);
/* Obs : pode ser qlq tipo de declara�ao: char, float, int , string..... */

// link : http://www.youtube.com/watch?v=rvqQppYo7YU

printf("\n\n");
system("pause");;
}




















