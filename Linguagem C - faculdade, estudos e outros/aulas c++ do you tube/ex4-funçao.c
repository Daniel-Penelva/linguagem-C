/*Implemente a função RAIZQUADRADA.Esta função deve receber um numero do tipo inteiro como parametro e retornar a raiz quadrada 
 do mesmo em float */

// a extençao tem que ser em c e nao c++ ou cpp

#include<stdio.h>
#include<math.h>

 float raizquadrada();


main()
{ int num;
  float resultado;
  
  printf("\nDigite um valor inteiro:");
  scanf("%d", &num);
  
  resultado = raizquadrada(num);

// raiz quadrada do resultado  quebrado
printf("\n Resultado: %f", resultado);           // ou printf("Resultado da raiz:%.2f",raizquadrada(num));
  
// raiz quadrada do resultado arredondado 
  printf("\n Resultado: %.0f", resultado);  // .0f = para nenhuma casa decimal
  
  


printf("\n\n");

system("pause");

}

float raizquadrada(int num)
 {
   return sqrt(num);         // funçao raiz sqrt(), onde os parenteses entre o valor a ser indicado;  
 
 }




