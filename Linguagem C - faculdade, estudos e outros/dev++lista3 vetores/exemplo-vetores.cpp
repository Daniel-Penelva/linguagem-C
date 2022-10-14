/*Desenvolva um programa em c++ onde devemos cadastrar 5 alunos, a partir de então cadastrar um gabarito para
a prova, fica de livre escolha a quantidade de respostas do gabarito, posterior a isso vocês deverão
dar as respostas da prova do aluno
e comparar com o gabarito oficial e mostrar o resultado.*/


#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{

char vetorg1[1] [4]={'b'};    
char vetorg2[1] [4]={'a'};
char vetorg3[1] [4]={'a'};
char vetorg4[1] [4]={'e'};
char vetorg5[1] [4]={'c'};
char resposta [2] [5];
int i,j;

   for(i=0;i<2;i++){
    for(j=0;j<5;j++){
     printf("aluno [%d] informe as suas resposta:(Entre com a,b,c,d,e)\n",i+1);
     printf("\nquestao %d:",j+1);
     printf("t--->");
     scanf("%c",&resposta[i][j]);

   if(resposta[i][j] == vetorg1[i][j])
   {
    printf("\nresposta certa!\n");
   }
  else
   {
   printf("\nresposta errada!\n");
   }
   
getchar();
  } // fim for
 } //fim for

system("pause");
return 0;
} 
