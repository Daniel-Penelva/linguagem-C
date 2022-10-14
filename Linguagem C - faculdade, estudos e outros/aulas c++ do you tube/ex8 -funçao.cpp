#include<stdio.h>
#include<math.h>  
#include<conio.h>

float funcaoImc(float peso, float altura)
{
 
  float imc = peso /(altura * altura);
  
  printf("\n Seu indice eh: %.2f", imc);  // a resposta vai imprimir dentro da funçao;
  return imc;
}

main()
{ float peso, altura;
 
  printf("\n Digite seu peso:");
  scanf("%f", &peso);
  printf("\nDigite sua altura:");
  scanf("%f", &altura);
  
  funcaoImc(peso,altura);

  

getch();

}
