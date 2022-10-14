#include <stdio.h>
#include <conio.h>

int somatorio(int[5][5]);
main()
{
int i,j;
int matriz[5][5];  
int resultado;  
    
  for(i=0; i<5; i++){
    for(j=0; j<5; j++){
    printf("\nEntre com a [%d] linha da [%d] coluna da matriz:",i+1,j+1);
    scanf("%d",&matriz[i][j]);
   }     
  } 
    
printf("\n\n");     
  resultado = somatorio(matriz);  
  
  printf("\nValor da soma de seus elementos = %d ",resultado);
    
  
printf("\n\n");  
getch();	
}

int somatorio(int m[5][5])
{
int soma =0;
int i,j;
      
 for(i=0; i<5; i++){
   for(j=0; j<5; j++){
   
   soma += m[i][j];
   } 
  }  
   
  return soma;      
}
