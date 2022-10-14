#include<stdio.h>
#include<conio.h>

main()
{ int valor1,p,novovalor;
  
  printf("Digite o preço do produto:\n");
   scanf("%d", &valor1);
   
   p= 10 % 100;
   novovalor= valor1 - p;
   
   printf("Desconto:%d", novovalor);
   
getch();
return 0;
}
    
