#include<stdio.h>
#include<conio.h>

main()
{  int i,j;
   int aux;
   int vetor[20];
   int vetorz[10];
   
   
  for(i=0;i<20;i++){
     printf("Digite o %do. numero inteiro: ", i+1);
       scanf("%d", &vetor[i]);
  }
  //armazenando os numeros que estao nas posicoes pares em outro vetor - como sao 10 posicoes pares, entao coloquei um vetor deste tamanho
  j = 0;
  for(i=1;i<20;i+=2){
     vetorz[j] = vetor[i];
     j++;
    } 
    
  //classificando em ordem crescente o vetorz      
        for(i=0;i<9;i++){
         for(j=i+1; j<10;j++){
         if(vetorz[i] > vetorz[j])    //crescente - voce fez a classificacao correta, apenas alterei o vetor
           {
            aux=vetorz[i];
            vetorz[i]=vetorz[j];
            vetorz[j]=aux;
           }
       }
   }
    
     printf("\nVetor ordenado\n");
     for(i=0;i<10;i++){
       printf("\n%d",vetorz[i]);
     }
    getch();	

}
