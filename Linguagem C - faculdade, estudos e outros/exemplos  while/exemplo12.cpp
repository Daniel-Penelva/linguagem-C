#include<stdio.h>
#include<conio.h>

main()
{
     
char opt;

 printf("\n\nTem certeza que deseja esvaziar sua lista. Todos os dados serao perdidos\n(Sim / Nao)\n\n");
 scanf("%s", &opt);
   while((opt!='s') && (opt!='n') && (opt!='S') && (opt!='N'))
   {
     printf("\n\nOperacao Invalida. Digite novamente: ");
     scanf("%s", &opt);
   }
    
    if (opt=='s' || opt=='S')
     {
       printf("\n\nLista vazia");
     }
    else 
     if (opt=='n' || opt=='N')
      {
        printf("\n\nOperacao Cancelada");
      }      
getch();

}  
/*
Ou de um jeito mais facil:
     
char *resposta;
                printf("\nTem certeza que deseja esvaziar sua lista. Todos os dados serao perdidos\n(Sim / Nao)");
                  do{
                      printf("\n");
                      scanf("%s", resposta);
                    }while(strcmp(resposta, "Sim") && strcmp(resposta, "Não"))

<<< A função strcmp compara duas strings e retorna 0 quando são iguais  >>>
                  
                   if (strcmp(resposta, "Não"))
                   {
                      printf("\n\nLista vazia");
                   }
                   else
                      printf("\n\nOperacao Cancelada");      
*/
