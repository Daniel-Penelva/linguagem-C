#include<stdio.h>
#include<conio.h>
main()
{
  int i;
  char nome[5][20];
  float sal[5];
  int tempo[5];
  int p[5] = {0}; // inicializei cada posicao do vetor com 0.  // aqui é um flag.

     for(i=0;i<5;i++){
        printf("Digite o nome:");
        scanf("%s", &nome[i]);                                  
        printf("Digite o salario:");
        scanf("%f", &sal[i]);     
        printf("Digite o tempo de trabalho:");
        scanf("%d", &tempo[i]);
     }
  
     for(i=0;i<5;i++){
       if((sal[i] <= 580) && (tempo[i] >= 5))
        {
           sal[i] = sal[i] + sal[i]*35/100;
           p[i] = 1; //para saber se o funcionario teve aumento. Valor 1 para quem teve.
        } 
       else
          if(tempo[i] >= 5)      {
           sal[i] = sal[i] + sal[i] * 25 / 100; //fazendo tudo junto
           p[i] = 1;
          }
          else
              if(sal[i] <= 580)
              {
               sal[i] = sal[i] + sal[i] * 15/100;
               p[i] = 1;
              }
     } // termino do for
     
     //Primeiro relatorio - nomes dos funcionarios sem direito a aumento
     printf("\n\nRelatorio de nomes dos funcionarios sem direito a aumento\n");
     for (i = 0; i < 5; i++)
     {
          if (p[i] == 0)
          printf("\n%s", nome[i]); 
     }
     //Segundo relatorio - nomes e salarios dos funcionarios com direito a aumento
     printf("\n\nRelatorio de nomes e salarios dos funcionarios com direito a aumento\n");
     for (i = 0; i < 5; i++)
     {
          if (p[i] != 0)
          printf("\n%s - %.2f", nome[i], sal[i]); 
     }
     getch();

}
