#include<stdio.h>
#include<stdlib.h>

//
main()
{ int i,j;
  int matriz[2][3]; 
  int soma;
      
 
   for(i=0; i<2; i++){ 
     for(j=0; j<3; j++){   
       printf("\nDigite o %d linha da %d coluna:", i+1, j+1);
       scanf("%d", &matriz[i][j]);
      }
   }
   
   
printf("\n\n");    
      
   for(i=0; i<2; i++){ 
     for(j=0; j<3; j++){   
       printf("%d  ", matriz[i][j]);
      }
      printf("\n");
   }
   





printf("\n\n");      
      printf("\n somatorio da coluna\n");  
  
   for(i=0; i<2; i++){ 
   soma = 0;
     for(j=0; j<3; j++){
       
       soma = matriz[i][j] + soma;
     
     }
       printf("%d  ",soma );
  }
   
      
      
/*

printf("\n\n");      
      printf("\n somatorio da linha\n");
      
      
      
   for(i=0; i<2; i++){
   soma = 0;
     for(j=0; j<3; j++){
          
       soma += matriz[i][j];
     
     }
      printf("%d  ",soma );  
   }
      
*/           

system ("PAUSE");
return 0;
}
