#include<stdio.h>
#include<conio.h>
main()
{
   float n1,n2,n3,n4,n5,media;
   printf("Digite o primeiro numero:");
   scanf("%f", &n1);
   printf("Digite o segundo numero:");
   scanf("%f", &n2);
   printf("Digite a terceira nota:");
   scanf("%f", &n3);
   printf("Digite a quarta nota:");
   scanf("%f", &n4);
   printf("Digite a quinta nota:");
   scanf("%f", &n5);
   media=(n1+n2+n3+n4+n5)/5;
   printf("\n %2f", media);
   
   getch();
 
   return 0;
}
