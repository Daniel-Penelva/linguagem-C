#include<stdio.h>
#include<stdlib.h>

main()
{ int i,j;
  int matriz[2][2];
  int resultado[2][2];
  int numero;
 

  for(i=0; i<2; i++){
   for(j=0; j<2; j++){
     printf("Digite a %do.linha da %do.coluna:", i+1, j+1);
     scanf("%d", &matriz[i][j]);
   }
  }
  
  printf("\n Entre com um numero inteiro:");
  scanf("%d",&numero);
   
   
   for(i=0; i<2; i++){
    for(j=0; j<2; j++){
     
     matriz[i][j] = matriz[i][j] * numero;
  }
 }
 
  for(i=0; i<2; i++){
   for(j=0; j<2; j++){
     printf("%d ", matriz[i][j]);
  } 
    printf("\n");
 }
   
   


printf("\n\n");     
      
system ("PAUSE");
return 0;
}     
      
