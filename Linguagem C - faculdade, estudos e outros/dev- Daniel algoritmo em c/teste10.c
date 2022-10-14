#include<stdio.h>
#include<conio.h>
main()
{
   float n;
   printf("Digite uma nota:");
   scanf("%f", &n);
   
   if(n<3)
   printf("Reprovado");
   else 
   if(n>=3) && (n<7)
   printf("PF");
   else
   if(n>=7)
   printf("Aprovado");
 
  getch();
  return 0;
}
                       
