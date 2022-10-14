#include<stdio.h>
#include<stdlib.h>

main()
{  int i,j;
   float matriz[2][5];
  
  for(i=0; i<2; i++){
    for(j=0; j<5; j++){
      printf("\nDigite o %d numero da linha e o %d numero da coluna:", i+1, j+1);
      scanf("%f", &matriz[i][j]);
    }
  }
  
  for(i=0; i<2; i++){
    for(j=0; j<5; j++){
      printf("%f  ",matriz[i][j] );
    }
    printf("\n");
  }


printf("\n\n");

system ("PAUSE");
return 0;
} 





