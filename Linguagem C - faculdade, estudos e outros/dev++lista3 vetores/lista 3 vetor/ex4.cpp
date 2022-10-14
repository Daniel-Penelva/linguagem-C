#include<stdio.h>
#include<stdlib.h>

main()
{  int i;
   int gabarito[15],questao[15];
   int matr;
   int alunos=0;
   int nota;
   int soma=0;
   int aprovado=0;
   int maior=0,menor=100000;
   int matricula_Maior, matricula_Menor;
   float porcento;
   float media;
     
   
  for(i=0; i<15; i++){ 
   printf("\nDigite o gabarito da prova - use os numeros 1,2,3,4:");
   scanf("%d", &gabarito[i]);
 }
   
  printf("\nDigite a matricula do aluno - digite zero para terminar:"); 
  scanf("%d", &matr);
  while(matr != 0) // qnd o usuario digitar zero vai para de executar a qntd de alunos ou matricula
   {
      alunos++;   // criei um contador para somar os alunos.
      nota = 0;  //#######    
             
       for(i=0; i<15; i++)
       {
        printf("\nDigite a resposta da %da.questao:", i+1);
        scanf("%d", &questao[i]);
        
        if(gabarito[i]  == questao[i])
         {
          nota++;   //#######  // criei um contador para somar as notas. 
         }                                        
       } 
         
      soma += nota;  //somatorio das notas para a media;
      printf("\n A matricula:%d tirou a nota:%d", matr, nota); // letra b
      
        if(nota >= 6)
          {
            aprovado++;                // criei um contador para aprovados.  
          }
        if(nota > maior)
          {
            maior = nota;      
            matricula_Maior = matr;           //nova variavel para armazenar a matricula acima de 6
          }         
         
         if(nota < menor)
          {
            menor = nota; 
            matricula_Menor = matr;           //nova variavel para armazenar a matricula abaixo de 6
          }
          
   printf("\n\nDigite a matricula do proximo aluno(digite 0 para terminar): ");
   scanf("%d", &matr);
   }   // termino do while
   
printf("\n\n");
printf("\ Quantidade de alunos que fizeram a prova : %d", alunos); // letra a 


printf("\n\n");

 porcento = aprovado/alunos*100;          // letra c
printf("\n Porcentagem de aprovação: %.2f", porcento);
   
   
printf("\n\n");   

 media=soma/alunos;                      //letra d
printf("\nMedia das notas:%.2f", media);
   

printf("\n\n");
   printf("\nMatricula da maior nota:%d",matricula_Maior);  //letra e
   printf("\nMatricula da menor nota:%d",matricula_Menor);
   
     
printf("\n\n");

  
system ("PAUSE");
return 0;
}
