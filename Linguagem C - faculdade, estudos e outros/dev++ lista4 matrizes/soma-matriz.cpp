#include<stdio.h>
#include<stdlib.h>

//faça um programa q preencha uma matriz 2X3 e calcule e escreva: o somatorio de cada linha e o somatorio de cada coluna
main()
{ int i,j;
  int matriz[3][3]; 
  int linha[3]={0,0,0};        // soma a coluna
  int coluna[3]={0,0,0};    //soma a linha
 
   for(i=0; i<3; i++){ 
     for(j=0; j<3; j++){   
       printf("\nDigite o %d linha da %d coluna:", i+1, j+1);
       scanf("%d", &matriz[i][j]);
      }
   }
   
   
printf("\n\n");    
      
   for(i=0; i<3; i++){ 
     for(j=0; j<3; j++){   
       printf("%d  ", matriz[i][j]);
      }
      printf("\n");
   }


printf("\n\n");      
        
  for(i=0; i<3; i++){ 
     for(j=0; j<3; j++){ 
      
     linha[i] = linha[i] + matriz[i][j];    // ou //soma[i] += matriz[i][j];      // soma da coluna......
     coluna[i] = coluna[i] + matriz[j][i];  //somatorio[j] +=matriz[i][j]; // soma a linha 
                                                                                
  }                                                                             
 } 

printf("\n\n");
 printf("\n somatorio da coluna\n");  
  
  for(i=0; i<3; i++){ 
     for(j=0; j<3; j++){  
        printf(" %d ",linha[i]); 
   }
  }

printf("\n\n");
 printf("\n somatorio da linha\n");  
  
  for(i=0; i<3; i++){ 
     for(j=0; j<3; j++){  
        printf(" %d ",coluna[i]); 
   }
  }
  
printf("\n\n");
system ("PAUSE");
return 0;
}
