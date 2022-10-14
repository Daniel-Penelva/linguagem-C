#include<stdio.h>
#include<conio.h>
main()
{ 
   float dinheiro;
   printf("Quanto dinheiro voçe tem sobrando ?");
   scanf("%f", &dinheiro);
   
   if(dinheiro<10)
   printf("Nao vai ao cinema");
   
   if(dinheiro>=10)
   printf("Vai ao cinema");
   
getch();
return 0;
}      
