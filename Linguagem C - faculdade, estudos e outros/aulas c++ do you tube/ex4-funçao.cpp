/*Implemente a função RAIZQUADRADA.Esta função deve receber um numero do tipo inteiro como parametro e retornar a raiz quadrada 
 do mesmo em float */

#include<stdio.h>
#include<math.h>

 float raizquadrada(int,int);


main()
{ int num;
  float resultado;
  
  printf("\nDigite um valor inteiro:");
  scanf("%d", &num);
  
  resultado = raizquadrada(num);
  
  printf("Resultado: %f", resultado);
  
  


printf("\n\n");

system("pause");

}

float raizquadrada(int num)
 {
   return sqrt(num);         // funçao raiz sqrt(), onde os parenteses entre o valor a ser indicado;  
 
 }




