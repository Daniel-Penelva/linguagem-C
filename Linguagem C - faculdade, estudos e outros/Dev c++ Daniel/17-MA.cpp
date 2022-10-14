#include<stdio.h>
#include<conio.h>
main()
{
   float n1,n2,n3,n4,n5,MA;
   printf("Digite o primeiro numero:");
   scanf("%f", &n1);
   printf("Digite o segundo numero:");
   scanf("%f", &n2);
   printf("Digite a terceira nota:");
   scanf("%f", &n3);
   
   MA=(n1+n2+n3)/3;
   printf("A media Atual é :%2f",MA);
   
   if(MA>7)
   printf("\nAprovado");
   
   else 
   if(MA<=7)
   printf("Prova Final");
   
   else
   if(MA<7)
   printf("\nReprovado");
   
getch();
return 0;
}
