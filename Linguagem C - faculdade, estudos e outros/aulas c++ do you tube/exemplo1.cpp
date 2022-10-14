/* Questao: Receber dois vetores, com 5 numeros inteiros e 10 numeros respectivo, em seguida 
  gerar um terceiro vetor coma junçao do primeiro com o segundo. Mostrar o vetor criado.*/


#include<stdio.h>
#include<stdlib.h>

main()
{  int i;
   int A[5];
   int B[10];
   int C[15];
   
   
   for(i=0; i<5; i++){
     printf("Digite o vetor A:\n");
       scanf("%d", &A[i]);
  }
  
  for(i=0; i<10; i++){
    printf("Digite o vetor B:\n");
       scanf("%d", &B[i]);
  }
  
  for(i=0; i<5; i++){
   C[i] = A[i];         //o elemento do vetor A vai se atribuido ao  vetor C
  }
  
  for(i=5; i<15; i++){   // a variavel de controle vai começar com o indice 5
    C[i] = B[i-5];
  }
  
  for(i=0; i<15; i++){
    printf("vetor c é:%d\n", C[i]);
  }
  
system ("PAUSE");
return 0;
}
  
  
           
