#include<stdio.h>
#include<conio.h>

main()
{
 int i,j;
 int matriz[3][4];
 int menor=1000000, maior=0;
 int indice_linha, indice_coluna;
 int linha,coluna;

      
  for(i=0; i<3; i++){
   for(j=0; j<4; j++){
    printf("\n Entre com a %do. linha da %do. coluna:",i+1,j+1); 
    scanf("%d",&matriz[i][j]);     
    }
  }
  
   for(i=0; i<3; i++){
    for(j=0; j<4; j++){
      printf("%d  ", matriz[i][j]);            // imprimir o valor da matriz para confirmar se estava certo......
    }                                          // não sei se é isso que o exercicio estava pedindo..
    printf("\n");
  }
  
printf("\n\n");  
  for(i=0; i<3; i++){
    for(j=0; j<4; j++){
   
      if(matriz[i][j] < menor)
       {
          menor = matriz[i][j];
          indice_linha = i;
          indice_coluna = j;               
       }
      if(matriz[i][j] > maior)
       {
          maior = matriz[i][j];
          linha = i;
          coluna = j;               
       } 
   }
  }
  
printf("\n\n");
printf("\n Menor valor \n");
  printf("\n linha:%d  coluna:%d  -> menor valor :%d",indice_linha,indice_coluna,menor); 
      
printf("\n\n");
printf("\n Maior valor \n");
  printf("\n linha:%d  coluna:%d  -> maior valor :%d",linha,coluna,maior);       
      
            
 getch();     
}
