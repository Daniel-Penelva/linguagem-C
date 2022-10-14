#include<stdio.h>
#include<conio.h>

//Faça um programa que preencha uma matriz 3x3 , escreva ela, diga o maior numero da matriz e sua respectiva posição.
main()
{
   int i,j;
   int matriz[3][3];
   int indice_linha;
   int indice_coluna;
   int maior = 0;
     

   for(i=0; i<3; i++){ 
     for(j=0; j<3; j++){
       printf("Digite a matriz %d linha e a %d coluna da matriz:", i+1, j+1); 
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
   
   for(i=0; i<3; i++){ 
     for(j=0; j<3; j++){
       if(matriz[i][j] > maior)
         {
           maior = matriz[i][j];
           
           indice_linha = i;            // vai indicar a linha
           indice_coluna = j;           //vai indicar a coluna
                       
         }   
      }
   }
      
printf("\n\n");
printf("\nA posicao e o maior valor do vetor\n");

  printf(" i= [%d]  j= [%d]  =  %d ",indice_linha, indice_coluna, maior);


      
getch();
return 0;
} 
