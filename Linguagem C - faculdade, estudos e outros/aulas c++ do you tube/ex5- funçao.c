/*Implemente a função QUADRADA.Esta função deve receber um numero do tipo inteiro como parametro e retornar o quadrada 
 do mesmo em float */

// a extençao tem que ser em c e nao c++ ou cpp

#include<stdio.h>
#include<math.h>     //padrao da biblioteca da funçao

float quadrado();

main()
{  int valor;
   float resultado;
      
  printf("\nDigite o valor inteiro:");
  scanf("%d", &valor);  
  
     
   resultado = quadrado(valor);                 // ou printf("resultado da potencia:%d",quadrado(valor));
   
   printf("Resultado: %.0f ", resultado);  // .0f = para nenhuma casa decimal
       
           
printf("\n\n");      
      
system("pause");      
}

 float quadrado(int valor)
  {
     return pow(valor, 3);   // pow(valor , potencia)
  }
  
  
  
  
  
  
  
  
  
  
  
  
  
  
