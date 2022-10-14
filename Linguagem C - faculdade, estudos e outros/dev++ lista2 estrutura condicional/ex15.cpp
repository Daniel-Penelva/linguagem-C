#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main()
{
  int a,b,c,x;
  float x1,x2;
  
  printf("Digite o valor de a:");
  scanf("%d", &a);
  printf("Digite o valor de b:");
  scanf("%d", &b);
  printf("Digite o valor de c:");
  scanf("%d", &c);
  
  x = (b*b)-((4*a)*c);
   printf("valor de x:%d", x);
  
  if(x < 0){
  printf("não existe raiz real!");
  }
 
  if(x == 0){
  printf("Existe raiz real!");
  }
 
  if(x > 0){
  printf("Existem duas raizes reais!");
  }
  
  x1 = ((((-1)*b) + sqrt(x))/2*a);  //Math.sqrt é a função de raiz ()dentro dos parentese se coloca o valor
  printf("Valor de x1:%f",x1);
  
  x2 = ((((-1)*b) - sqrt(x))/2*a);
  printf("Valor de x2:%f",x2);
  
 
system("pause");
}      
 
  
  
  
  
  
  
  
  
  
  
