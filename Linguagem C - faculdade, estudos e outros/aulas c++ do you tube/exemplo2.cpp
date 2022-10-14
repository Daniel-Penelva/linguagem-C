/* ler um vetor de 5 numeros inteiros e mostra a lista dos numeros digitados com o seu 
   dobro ao lado de cada numero. */


#include<stdio.h>
#include<stdlib.h>

main()
{ int i;
  int v1[5];
  int v2[5];
      
  for(i=0; i<5; i++){
    printf("Digite os numeros inteiros :\n");
       scanf("%d", &v1[i]);
  }
  
  for(i=0; i<5; i++){
   v2[i] = v1[i] * 2;
     
     printf("o dobro:%d %d\n", i,v2[i]);   //a posição e o resultado
  }
  
 
system ("PAUSE");
return 0;
}
   
