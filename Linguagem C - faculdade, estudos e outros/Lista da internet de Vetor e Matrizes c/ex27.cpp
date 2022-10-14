#include <stdio.h>
#include <conio.h>

int diagonal_secundaria(int[6][6]);
main()
{
int i,j,matriz[6][6];
int menor;     

  for(i=0; i<6; i++){
    for(j=0; j<6; j++){
    printf("\nEntre com a [%d] linha da [%d] coluna da matriz:",i+1,j+1);
    scanf("%d",&matriz[i][j]);
   }     
  }    
  
    
    for(i=0; i<6; i++){
     for(j=0; j<6; j++){
     printf("%d  ",matriz[i][j]);
   }     
   printf("\n");
  }    
 
printf("\n\n");  
  menor = diagonal_secundaria(matriz); 
  printf("\nMenor Valor da diagonal secundaria = %d",menor);
  
  
printf("\n\n");  
getch();	
}
int diagonal_secundaria(int m[6][6])
{
int i,j;
int menor=10000000;
    
   for(i=0; i<6; i++){
    for(j=0; j<6; j++){ 
      if((i + j == 5) && (m[i][j] < menor))
       {
         menor = m[i][j];     
       }
    }
   }
   
   return menor; 
      
}
