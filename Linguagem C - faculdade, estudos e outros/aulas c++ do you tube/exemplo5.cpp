/* Crie um algoritmo q receba do usuario, a quantidade de pessoas em cada vagao de um trem 
com 10 vagoes. Em seguida, mostre o numero do vagao (posição do elemento no vetor), e a quantidade de pessoas nele.*/


#include<stdio.h>
#include<stdlib.h>

main()
{
 int i,v[i];
      
  for (i=0; i<10; i++){
    printf("Digite a qnt p/o vagao:\n"); 
       scanf("%d", &v[i]);
  }
  
  for (i=0; i<10; i++){
    printf("resultado:%d %d\n", i,v[i]);
  }
  
system ("PAUSE");
return 0;
} 
