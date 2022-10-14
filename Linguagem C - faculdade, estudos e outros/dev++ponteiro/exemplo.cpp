#include<stdio.h>
#include<stdlib.h>

main()
{

// operadores unarios endereço(&) e ponteiro(*)
int x =10;
printf("\n%d ",x);
printf("\n\n");
printf("\n&x = %#x",&x);   // vai indicar o endereço da variavel x na memoria

printf("\n<<<<<<>>>>>>\n");

int *xPtr = 0;                               

xPtr = &x;   //O xPtr vai ter o mesmo endereço (&) e a mesma variavel(x=10)

printf("\nA posição da memoria de xPtr = %#x",xPtr);
printf("\nO valor da variavel do endereço xPtr ->  *xPtr = %d",*xPtr);  //usei *(o valor da variavel)
printf("\nO valor do endereço da variavel *xPtr -> &xPtr = %#x",&xPtr);//usei &(o valor da variavel),imprimi o endereço do ponteiro

// o endereço de xPtr difere do endereço de &xPtr;

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
  printf("\n x = %d \n xPtr = %#x ",x,&xPtr);  // novo endereço



/* Resumo :
  endereço(&)  que acessa o endereço de uma variavel tanto sendo coma a variavel x como sendo o ponteiro *xPtr        
  ponteiro(*) que é usado na declaração de um ponteiro como tb ao acesso do conteudo 
*/

printf("\n<<<<<<>>>>>>\n");
char c = 'a';   // nao esquecer da aspas simples ou apostrofe
char *cPtr = &c;

printf("\n O valor da variavel -> *cPtr = %c \n Endereço de memoria da letra a -> cPtr = %#letra",*cPtr, &cPtr);
/* Obs : pode ser qlq tipo de declaraçao: char, float, int , string..... */

// link : http://www.youtube.com/watch?v=rvqQppYo7YU

printf("\n\n");
system("pause");;
}




















