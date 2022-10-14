/*Faça um programa que solicite 5 numeros inteiros ao usuario e o armazeneo em um vetor.Apos exiba a seguir:
  1 - o conteudo do vetor na tela
  2- o conteudo do vetor na tela na ordem inversa da inserçao
  3- o primeiro numero e o ultimo
  4- o maior e o menor numero
  5- a media e a soma dos numeros*/


#include<stdio.h>
#include<stdlib.h>

main()
{  int i;
   int vetor[5];
   int maior = 0; 
   int menor = 10000;
   int soma = 0;
   float media;
   
      
  for(i=0; i<5; i++){
    printf("\nDigite o %d numero inteiro:", i+1);
    scanf("%d", &vetor[i]);
  }
  
  // vetor
  printf("\nvetor\n\n");
  
  for(i=0; i<5; i++){
    printf("\no %d vetor: %d ", i+1, vetor[i]);
  }
  
 //vetor invertido
 
    printf("\n");
   
    printf("\nvetor invertido\n\n");
 
  for(i=4; i>=0; i--){
    printf("\no %d vetor: %d ", i+1, vetor[i]);
  }
  
  //primeiro e ultimo
  
   printf("\n");
   
    printf("\nvetor primeiro e ultimo\n\n");
 
    printf("\nprimeiro numero:%d ", vetor[0]);
    printf("\nultimo numero:%d ", vetor[4]);
    
    
   //maior e menor numero
   
   printf("\n");
   
    printf("\nvetor maior e menor\n\n");
   
   for(i=0; i<5; i++){
     if(vetor[i] > maior)
       {
          maior = vetor[i];     
       }
    
     if(vetor[i] < menor)
       {
         menor = vetor[i];        
       }
  
  }
  printf("\n maior numero:%d ", maior);
  printf("\n menor numero:%d ", menor);


   //media e a soma dos numeros
   
   printf("\n");
   
    printf("\nmedia e a soma\n\n");
    
    for(i=0; i<5; i++){
      soma  += vetor[i];
      
   }
    
    media = soma / 5;
   
   printf("\nsoma:%d ", soma);
  printf("\nmedia:%2.f ", media);


  printf("\n\n");
    

system ("PAUSE");
return 0;
}
