#include<stdio.h>
#include<stdlib.h>

#define n 4

main()
{int i,j;
 int x[4], y[4]; 
 int soma[4];
 int uniao[8], u=0;
 int k, diferente[4], d=0;
 int produto[4];
 int intersecao[4], inters=0;

 
   for(i=0; i<4; i++){
    printf("Vetor x:\n");
    scanf("%d", &x[i]);
    printf("Vetor y:\n");
    scanf("%d", &y[i]);
  }
  
// letra a - uniao dos vetores x e y;
  
 for(i=0; i<4; i++){ 
  j=0;
    while(j < u && x[i] != uniao[j])
      {
        j++;
      }
        if(j >= u)
         {
           uniao[u] = x[i]; 
           u++;   
         }
    } // fim do for de x
    
  for(i=0; i<4; i++){
   j=0;
     while(j < u && y[i] != uniao[j])
      {
        j++;      
      }
        if(j >= u)
         {
           uniao[u] = y[i];
           u++;    
         }
   } // fim do for de y
    
    
  
 printf("\nVetor Uniao\n");
  
  for(i=0; i<u; i++){
    printf("%d ", uniao[i]);         
  }
   
 
 // letra b - diferença dos vetores x e y;
 
  for(i=0; i<4; i++){
   j=0;
     while(j < 4 && x[i] != y[j]) 
       {
         j++;     // vai somando enquanto x for igual y 
       }
         if(j >= 4)
          {
            k=0;    
          }
           while(k <= d && x[i] != diferente[k])
            {
              k++;       
            }
              if(k >= d)
               {
                 diferente[d] = x[i];
                 d++;    
               }
   } // fim do for 
   
printf("\n\n");

   printf("\nVetor Diferente\n");
  
  for(i=0; i<d; i++){
    printf("%d ", diferente[i]);         
  }
   

// letra c - a soma dos vetores x e y;
printf("\n\n");

printf("\nA soma do Vetor\n");
 
 
 for(i=0; i<4; i++){
          
 soma[i] = x[i] + y[i];
 printf("%d ", soma[i]);
 }
 
 
 //letra d - o produto dos vetores x e y.
printf("\n\n");

printf("\nA Produto do Vetor\n");

  for(i=0; i<4; i++){
   
   produto[i] = x[i] * y[i];
    printf("%d ", produto[i]);
  }
  
  
  //letra e - interseçao dos vetores x e y.
printf("\n\n");
 
 for(i=0; i<4; i++){
   j=0;
     while(j <4 && x[i] != y[j])
       {
         j++;      
       }
         if(j < 4)   // inicio do if
          {
            k=0;
             
             while(k < inters && intersecao[k] != x[i]) 
               {
                 k++;      
               }   
                 if (k >= inters)
                   {
                     intersecao[inters] = x[i];
                     inters++;  
                   }
          } // fim do if 
       } // fim do for
 
 
 printf("\n\n");

printf("\nA Intersecao do Vetor\n");

  for(i=0; i<inters; i++){
    printf("%d ", intersecao[i]);
 } 
  
 printf("\n\n");
 
  
system("PAUSE");	
return 0;
}


 
