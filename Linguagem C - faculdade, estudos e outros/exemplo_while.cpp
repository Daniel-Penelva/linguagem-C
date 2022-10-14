#include<stdio.h>

main()

{

 int n1,n2,soma,resposta;
 resposta=1;

   while(resposta==1)
   {
    printf("Digite valor de n1(inteiro):\n");
    scanf("%d",&n1);

    printf("Digite valor de n2(inteiro):\n");
    scanf("%d",&n2);

     soma=n1+n2;
     printf("Soma:%d\n",soma);

     printf("Deseja continuar? (1 - sim / 2 - nao)\n");
     scanf("%d",&resposta);
       while((resposta!=1) && (resposta!=2))
        {
          printf("Digite 1 para sim ou 2 para nao !!\n");
          scanf("%d",&resposta);
         }/*fim_while*/
    }/*fim_while*/

}
