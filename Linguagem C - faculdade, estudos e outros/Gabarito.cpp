#include<stdio.h>
#include<conio.h>

main()
{
   int questao[20]; //nao utilize letras. Use numeros
   int i, matr, alunos = 0, nota, soma = 0, matMaior, matMenor, resposta, aprovado = 0;
//   int cont;
   float porcento, media;
   int maior=0;
   int menor=100000;
//   int flag[20]={0};
   
  printf("\nProva de multlipla escolha\n\n");  
   //preenchimento do gabarito  
   for(i=0; i<20; i++){  
     printf("\nEntre com o gabarito da prova - use os numeros 1,2,3,4: "); 
     scanf("%d", &questao[i]);
  }

  //deve-se ler a matricula. Sair ate digitar 0.
  printf("\nDigite a matricula do aluno(digite 0 para terminar): ");
  scanf("%d", &matr);
  while(matr != 0) //!=0 e nao maior ou igual
   {
      //criar um contador para somar a quantidade de alunos. Nao é para solicitar essa informacao do usuario, como voce fez. Veja enunciado.
      alunos ++;
      //inicializando a variavel nota para cada aluno
      nota = 0;
      //verificacao das respostas do aluno
      for (i = 0; i < 20; i++)
      {
          //leitura das respostas do aluno
          printf("\nInforme a resposta da %da. questao: ", i+1);
          scanf("%d", &resposta);
          if (questao[i] == resposta)
             nota++;
      }
      //somatorio para calcular a media das notas (no final)
      soma += nota;
      //letra b - escrita da matricula e nota do aluno
      printf("\n Matricula: %d tirou a nota: %d\n ", matr, nota);    
      if(nota >= 6)
      {
        aprovado ++; //contador de aprovados. Voce fez um contador somando a nota???? Seu calculo de porcentagem tb estava incorreto. Faca as comparacoes depois,, ok?
  
      }
      if(nota > maior)
       {
         maior = nota;
         //outra variavel para armazenar a matricula. Nao sei por que voce fez um vetor e ainda armazenou 1? Deveria armazenar a matricula. Fiz exemplo em sala.
         //flag[i]= 1;      
         matMaior = matr;
       }
      
      if(nota < menor) //idem maior
       {
         menor = nota;
         //flag[i]= 2;      mesmo erro
         matMenor = matr;
       }
       
   // leitura da proxima matricula
   printf("\n\nDigite a matricula do proximo aluno(digite 0 para terminar): ");
   scanf("%d", &matr);
   }   // termino do while
   
   //letra a
   printf("\n\n***********\n");
   printf("\nQuantidade de alunos que fizeram a prova: %d", alunos);
   //letra c - calculo da porcentagem
   porcento = aprovado/alunos * 100;
   printf("\nPorcentagem de aprovados: %.2f", porcento);     

   //letra d - media das notas 
   //   media =( nota * 2) / 20; Nao entendi essa sua conta????????
   media = soma / alunos;
   printf("\nMedia das Notas: %.2f", media);
   
   //letra e - matriculas dos alunos que obtiveram a maior e a menor nota   
   printf("\nMatricula do aluno que obteve a maior nota: %d", matMaior);
   printf("\nMatricula do aluno que obteve a menor nota: %d", matMenor);
   getch();

} // fim
















