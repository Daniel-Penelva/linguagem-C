#include<stdio.h>
#include<conio.h>

main()
{ float sal,novosal,p;

  printf("Digite o salario:\n");
  scanf("%f", &sal);
  
  if(sal <= 730){
  printf("isento");
  printf("o novo salario:%f", sal);
 }
 

 if((sal > 730) && (sal <= 1500)){
 
 p = 10 % 100;
 novosal = sal - p;
 printf("o novo salario:%f", novosal);
 }
 

 if(sal > 1500){
 
 p = 15 % 100;
 novosal = sal - p;
 printf("o novo salario:%f", novosal);
 }
 
getch();
return 0;
}
  
 
 
 
 
 
 
 
