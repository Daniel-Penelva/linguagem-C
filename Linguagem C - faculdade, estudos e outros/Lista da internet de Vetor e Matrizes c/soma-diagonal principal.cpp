#include <stdio.h>
#include <conio.h>


main()
{
int i,j,k,matriz[4][4];
int soma=0;     

  for(i=0; i<4; i++){
    for(j=0; j<4; j++){
    printf("\nEntre com a [%d] linha da [%d] coluna da matriz:",i+1,j+1);
    scanf("%d",&matriz[i][j]);
   }     
  }    
  
    
    for(i=0; i<4; i++){
     for(j=0; j<4; j++){
     printf("%d  ",matriz[i][j]);
   }     
   printf("\n");
  }
  
   for(i=0; i<4; i++){
     for(j=0; j<4; j++){
      
       if(i - j == 0)
        {
          soma += matriz[i][j];    
        }
      }
    }  
        
    printf("\nA soma da idagonal principal = %d",soma);      
printf("\n\n");  
getch();	
}
        
        
        
        
 //|Explicaçao : exemplo m(3,3)
                                  //| 

                                      //|        coluna =j
                                      //|   i/j  0    1   2            l                              i
                                      //|        1                     n
                                      //|                              h
                                      //|        2                     a = i
                                      //|        
                                      //|diagonal secundaria            diagonal principal
                                      //|  (i + j) =                     (i - j)=
                                      //|   2 + 0  = 2                    2 - 2 = 0
                                      //|   1 + 1  = 2                    1 - 1 = 0
                                      //|   0 + 2  = 2                    0 - 0 = 0 
                                      //|
                                      //|  logo(i + j == 2)                (i - j == 0)
                                      //|       
        
        
        
        
        
