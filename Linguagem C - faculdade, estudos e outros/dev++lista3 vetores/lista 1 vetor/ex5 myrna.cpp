#include<stdio.h>
#include<conio.h>
main()
{  int i,j;
   int sexo[5];
   int idade[5];
   char nome[5][10];
   
      
   // preenchimento dos vetores (cada um com 10 posições)

   for (i = 0; i < 5; i++)
   {
       printf("\nDigite 1 para feminino ou 2 para masculino: ");
       scanf("%d", &sexo[i]);
  
       printf("Digite a idade: ");
       scanf("%d", &idade[i]);
       
       printf("Digite o nome: ");
       scanf("%s", &nome[i]);
    }
  
   // verificacao e escrita dos nomes das mulheres com idade acima de 55 anos
   printf("\nNomes femininos com idade superior a 55 anos");
   for (i = 0; i < 5; i++)
   {
    if((idade[i]>=55) && (sexo[i] == 1))
       {
          printf("\nNome: %s", nome[i]);          
   	}
   }
        
   getch();
}
