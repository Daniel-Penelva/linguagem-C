#include<stdio.h>
#include<conio.h>

main()
{int i,j;
 int estoque[3][3], custo[1][3]; 
 int soma_produto[3] = {0};     //  vai soma a coluna -> nao esquecer de colocar chaves no zero, hierarquia de sinais..... 
 int maior=0;
 int custo_total[3][3];
 int armazem1,armazem2,armazem3;
 
      
      
  for(i=0; i<3; i++){
   for(j=0; j<3; j++){  
     printf("\n Digite o %do. armazem e o %do. produto(unidade = quantidade):", i+1, j+1);  // a linha esta o armazem e a coluna esta a unidade de produto;
     scanf("%d", &estoque[i][j]);
  }
 }
      
  for(i=0; i<1; i++){
   for(j=0; j<3; j++){  
     printf("\n Digite o %do. custo do %do. produto:", i+1, j+1);  // a linha esta o custo e a coluna esta o valor do produto;
     scanf("%d", &custo[i][j]);
  }
 }
 
printf("\nO estoque inicial\n");  // letra a 
  for(i=0; i<3; i++){
   for(j=0; j<3; j++){  
    printf("%d ",estoque[i][j]);
   }
    printf("\n");
 }
        
printf("\n\n");     

 printf("\nAs unidades armazenadas em cada armazem\n"); 
  for(i=0; i<3; i++){
   for(j=0; j<3; j++){  
      
   soma_produto[i] += estoque[i][j];   // vai soma toda a coluna(produtos) dos tres armazens
  }
 } 
      
  for(i=0; i<3; i++){
   for(j=0; j<3; j++){  
    printf("%d ",soma_produto[i]);        // letra b
  }
 }
 
printf("\n\n");        
      
 for(i=0; i<3; i++){                      // letra c
   for(j=0; j<3; j++){  
     //if(estoque[i][2] > maior)
     if(estoque[i][0]> maior)
      {
        //maior = estoque[i][2];  // vai comparar na coluna dois;
        maior = estoque[i][0];    //vai comparar a 1º linha
                  
      }     
   }
  } 
      
  for(i=0; i<3; i++){                      // letra d - 1º pedido
   for(j=0; j<3; j++){  
    
    custo_total[i][j] = estoque[i][j] * custo[i][j];
  }
 }
      
  for(i=0; i<3; i++){                      // letra d - 2º pedido
   for(j=0; j<3; j++){  
    
    armazem1 =(estoque[1][1] *(260)) + (estoque[1][2] * (420)) + (estoque[1][3] * (330));
    armazem2 =(estoque[2][1] *(260)) + (estoque[2][2] * (420)) + (estoque[2][3] * (330));
    armazem3 =(estoque[3][1] *(260)) + (estoque[3][2] * (420)) + (estoque[3][3] * (330));
   } 
 } 


printf("\n\n"); 






/*>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>*/    
printf("\n\n");   
printf("\nO maior estoque:%d ",maior);   //letra c

printf("\n\n");  
 
/*>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>*/
printf("\nCusto Total\n");   

 for(i=0; i<3; i++){                      
   for(j=0; j<3; j++){ 
    printf("\n  %d   ",custo_total[i][j]);    // letra d - 1º pedido
  }
   printf("\n");
 }

/*>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>*/

printf("\nCusto Total\n");   

 printf("\n Armazem 1 =%d \n Armazem 2 =%d \n armazem 3 =%d ",armazem1,armazem2,armazem3);    // letra d - 2º pedido
  
/*>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>*/






printf("\n\n");           
getch();
return 0;
} 
