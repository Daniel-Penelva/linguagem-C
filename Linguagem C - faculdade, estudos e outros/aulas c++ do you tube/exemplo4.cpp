/* Declarar  e ler um vetor de 15 numeros inteiros , mostrar o vetor na ordem inversa dos elementos digitados.*/

#include<stdio.h>
#include<stdlib.h>

main()
{  int i;
   int v[10];
      
  for(i=0; i<10; i++){
    printf("Digite um valor inteiro:\n");
      scanf("%d", &v[i]);
 }

printf("\n\n"); 
   for(i=9; i>-1; i--){     // a variavel de controle começou com 9 com a condição de ate maior que menos um vai decrementar na ordem decrescente ate chegar na posiçao zero
      printf("%d\n", v[i]);
  }
  
 
system ("PAUSE");
return 0;
}
            
 
