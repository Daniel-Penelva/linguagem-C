#include<stdio.h>
#include<conio.h>

main()
{  int i,j;
   int vetor[10];
   int vetorz[5];
   int aux;
      
  for(i=0; i<10; i++){
    printf("\n Digite o %do numero inteiro:", i+1);
    scanf("%d", &vetor[i]);         
  }
     
  //aqui vai  armazenar os vetores pares
    j=0;
   for(i=1; i<10; i+=2){
     vetorz[j] = vetor[i];
     j++;
  }
  
  //aqui vai  ordenar os vetores pares   
  for(i=0; i<4; i++){ 
   for(j=i+1; j<5; j++){
              
    if(vetorz[i] > vetorz[j])
     {
       aux = vetorz[i]; 
       vetorz[i] = vetorz[j];
       vetorz[j] = aux;                
                          
     }
   }
  } 
     
  printf("\n ordem crescente.");
  
   for(i=0; i<5; i++){
     printf("\n%d", vetorz[i]);
   }       
         
getch();
}
