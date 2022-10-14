#include<stdio.h>
#include<conio.h>

main()
{ int i,j;
  int matriz[2][2];
  int maior = 0;
  float multip[2][2];
  
      
   
   for(i=0; i<2; i++){   
      for(j=0; j<2; j++){
        printf("Digite a primeira %d linha da %d coluna:", i+1, j+1);
        scanf("%d", &matriz[i][j]);
        }
   }
      
printf("\n\n");   
      
      
   for(i=0; i<2; i++){   
      for(j=0; j<2; j++){
        printf("%d  ", matriz[i][j]);   
     }
       printf("\n");
   }
   
    
printf("\n\n");
printf("\no maior valor da matriz\n");    
    
    
   for(i=0; i<2; i++){   
      for(j=0; j<2; j++){
        if(matriz[i][j] > maior)
         {
           maior = matriz[i][j];        //maior valor da matriz            
         }
      }
   }
   
  printf("%d ", maior); 
      
      
printf("\n\n");
printf("\a multiplicação \n");       
      
  for(i=0; i<2; i++){   
      for(j=0; j<2; j++){    
      
    multip[i][j] = maior * matriz[i][j];
   }
 }
  
      
  for(i=0; i<2; i++){   
      for(j=0; j<2; j++){    
          
          printf("% f  ", multip[i][j]);    
      }
      printf("\n");
   }
   
   
printf("\n\n");      
      
getch();
return 0;
}     
        
