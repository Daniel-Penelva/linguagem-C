#include <stdio.h>
#include <conio.h>

int diagonal(int[3][3]);
int secundaria(int[3][3]);
main()
{
int i,j;
int matriz[3][3];      
int x;
      
   for(i=0; i<3; i++){
    for(j=0; j<3; j++){
    printf("\nEntre com a [%d] linha da [%d] coluna da matriz:",i+1,j+1);
    scanf("%d",&matriz[i][j]);
   }     
  }    
      
    for(i=0; i<3; i++){
     for(j=0; j<3; j++){
     printf("%d  ",matriz[i][j]);
   }     
   printf("\n");
  }    
      
printf("\n\n");

  x = diagonal(matriz);  
  
printf("\n Soma da diagonal principal = %d ",x);

printf("\n\n");
   
   printf("\n Soma da diagonal secundaria = %d ",secundaria(matriz));   
      

printf("\n\n");  
getch();	
}

int diagonal(int m[3][3])
{
int i,j;
int soma_diagonal;
  
 for(i=0; i<3; i++){
     for(j=0; j<3; j++){
     
   soma_diagonal = m[0][0] + m[1][1] + m[2][2];
   
   }     
  }   
 return soma_diagonal;   
}
int secundaria(int m[3][3])           //|Explicaçao : exemplo m(3,3)
{                                     //| 
int i,j;                              //|        coluna =j
int soma_secundaria=0;                //|   i/j  0    1   2            l                              i
                                      //|        1                     n
 for(i=0; i<3; i++){                  //|                              h
  for(j=0; j<3; j++){                 //|        2                     a = i
     if(i + j == 2)                   //|        
      {                               //|
        soma_secundaria += m[i][j];   //|  (i + j) =              (i + j) =     
      }                               //|   2 + 0  = 2             2 - 2  = 0
   }                                  //|   1 + 1  = 2             1 - 1  = 0
  }                                   //|   0 + 2  = 2             0 - 0  = 0
                                      //|
  return soma_secundaria;             //|  logo(i + j == 2)        (i - j == 0) 
}                                     //|
