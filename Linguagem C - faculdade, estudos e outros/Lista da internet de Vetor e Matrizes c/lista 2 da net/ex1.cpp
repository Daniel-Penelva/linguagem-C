#include<stdio.h>
#include<stdlib.h>

main()
{
  int i,j;
  int matriz[2][2];
  int menor=100000;
  int indice_linha;
  
  
  for(i=0; i<2;i++){
   for(j=0; j<2; j++){
     printf("\nEntre com a %da.linha da %da.coluna:", i+1, j+1);
     scanf("%d", &matriz[i][j]);     
    }
  }
  
  for(i=0; i<2;i++){
   for(j=0; j<2; j++){
     if(matriz[i][j] < menor)
      {
        menor = matriz[i][j];
        indice_linha = i;             
      }
    }
  }
      
printf("\n indice da linha: %d e seu valor: %d",indice_linha, menor);
  

     
printf("\n\n");      
        
      
system ("PAUSE");
return 0;
}
