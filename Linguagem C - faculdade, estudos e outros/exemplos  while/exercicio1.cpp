/* Exercicio : Faça um programa q solicite valores ao usuario e faça a soma dos mesmos ate que o numero digitado seja zero.
 O resultado deve ser exibido no monitor.*/

#include<stdio.h>
#include<conio.h>
int main()
{ 

int numero;
int soma = 0;

int n;
int adicao =0;

   printf("\nEntre com um valor(ao digitar zero o programa encerra):");
   scanf("%d",&numero);
    while(numero != 0)
     {
        soma +=numero;
                 
      printf("\nEntre com outro valor(ao digitar zero o programa encerra):");
      scanf("%d",&numero);         
     }
    
  printf("\nSoma dos valores : %d", soma);



printf("\n\n<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n\n");
printf("\nOutro exemplo\n");


   while(n != 0)
     {
        printf("\nEntre com um valor(ao digitar zero o programa encerra):");
        scanf("%d",&n);          
         
         adicao = adicao + n;            
     }

 printf("\nSoma dos valores : %d", adicao);
 
 
getch();
return 0;
}
