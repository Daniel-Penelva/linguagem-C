#include<stdio.h>
#include<stdlib.h>


main()
{ int i;
  int gabarito[5],numero, resposta[5], freq;
  int alunos=0,nota,aprovado=0,soma=0;
  int maior=0, maior_nota;
  float porcento;
  
  
 
 
  for(i=0; i<5; i++){
   printf("\nDigite a resposta do gabarito:(Entre usando 1,2,3,4)");
   scanf("%d", &gabarito[i]);
 }
 
  printf("\nDigite o numero do aluno:(Entre com o zero para termino):");  //mudei o anunciado do exercicio
  scanf("%d", &numero);
  printf("\n Digite o numero de frequencia do aluno:");
  scanf("%d", &freq); 
 
  while(numero != 0)
   {
     alunos++;       //quantidade de alunos   atraves co contador       
     nota = 0;       // importante para que ocorrar o somatorio certo de cada nota de cada aluno //#####
   
    for(i=0; i<5; i++)
    { 
      printf("\nDigite a resposta da %da. questao:(use 1,2,3,4)", i+1);  
      scanf("%d", &resposta[i]); 
    
      if(gabarito[i] == resposta[i])
       {
         
         nota++;   //contador para nota de cada aluno  //#####          
       }
     }
      
      soma+=nota;
       
  printf("\nNumero do aluno:%d  tirou a nota:%d", numero, soma);  // letra a
  // ou printf("\nNumero do aluno:%d  tirou a nota:%d", numero, nota);
  
      if(nota >= 6)
       {
         aprovado++;    //contador para aprovaçao de cada aluno     
       }
       
      if(freq > maior)
       {
         maior = freq;          // maior frequencia 
         
         maior_nota = nota;      //nova variavel para saber a maior nota 
       }
   
   printf("\nEntre com o outro numero do aluno:(Entre com o zero para termino):"); 
   scanf("%d", &numero);  
   printf("\n Digite o outro numero de frequencia do aluno:");
   scanf("%d", &freq);  
         
  } //termino do while
   
  
printf("\n\n");
 
  porcento = aprovado/alunos * 100;
  printf("\nPorcentagem de aprovação: %.2f",porcento); 
  
printf("\n\n");
  printf("\nNumero de frequencia: %d  sua nota:%d", maior, maior_nota);
  
  
    
printf("\n\n"); 
 
   
system("PAUSE");	
return 0;
}
     

 
 
 
 
 
 
 
 
 
 
 
 
      
 
  
 
  
   






