#include <stdio.h>
#include <conio.h>

int MATRIZ(int[4][3]);
main()
{
int i,j;
int matriz[4][3];      

      
   for(i=0; i<4; i++){
    for(j=0; j<3; j++){
    printf("\nEntre com a [%d] linha da [%d] coluna da matriz:",i,j);
    scanf("%d",&matriz[i][j]);
   }     
  }    
  
 for(i=0; i<4; i++){
     for(j=0; j<3; j++){
     printf("%d  ",matriz[i][j]);
   }     
   printf("\n");
  }    
      
printf("\n\n");  
  
     printf("\nA soma = %d",MATRIZ(matriz));                           
                    
  
  
  
  
printf("\n\n");  
getch();	
}
int MATRIZ(int m[4][3])
{
int linha[4]={0};
int coluna[3]={0};
int i,j;
int soma;
 
  for(i=0; i<4; i++){           // tb pode fazer assim for(i=0,y=0; i<4,j<3; i++,j++)
      linha[i] =linha[i] + m[2][i];  
    }   
       
   
   for(j=0; j<3; j++){     
     linha[j] =linha[j] + m[j][2];
   }
  
  
  soma =(linha[i] + coluna[j]);
  
  return soma;
}






