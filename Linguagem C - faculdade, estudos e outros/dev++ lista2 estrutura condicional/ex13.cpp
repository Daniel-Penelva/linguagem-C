#include<stdio.h>
#include<stdlib.h>

main()
{float t,v,d,L;
      
  printf("Digite o tempo gasto:\n");
  scanf("%f", &t);
  printf("Digite o valor da velocidade:\n");
  scanf("%f", &v);
  
  d = t * v;
  printf("valor da distancia:%2f\n", d);
  
  L = d/12;
  printf("Qnt de litros:%2f\n", L);
 
system("pause"); 
}
