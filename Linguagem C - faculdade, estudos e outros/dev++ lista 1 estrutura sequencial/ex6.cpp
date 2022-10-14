#include<stdio.h>
#include<conio.h>
main()
{ int sal, salnovo,p;
 
  printf("Digite o valor do salario:");
   scanf("%d", &sal);
   
   p=25%100;
   salnovo= sal + p;
   
    printf("o novo salario:%d", salnovo);
    
getch();
return 0;
}
