/*
Exerc�cio 2) Escreva um programa que receba n�meros entre 1 e 10. Se o usu�rio digitar um n�mero diferente, mostrar a mensagem "numero invalido" e solicitar 
o n�mero novamente. Se digitar correto mostrar o n�mero digitado e finalizar o programa.
*/

#include<stdio.h>
#include<stdlib.h>

main()
{ 
 int numero;
 int continua;
 
 printf("Digite um numero: ");
 scanf("%d",&numero);
 
  if(numero > 10)
    {
       printf("NUMERO INVALIDO! \n");
       continua = 1;
       
	   while(continua == 1){
	   	 printf("Digite um numero: ");
         scanf("%d",&numero);
         
         if(numero > 10)
         {
           printf("NUMERO INVALIDO! \n");
           continua = 1;
         }
         else
          {
          	printf("Numero digitado: %d",numero);
          	break;
          }
      }
    }
  else
     printf("Numero digitado: %d",numero); 


printf("\n");
system("pause");
return 0;
}
