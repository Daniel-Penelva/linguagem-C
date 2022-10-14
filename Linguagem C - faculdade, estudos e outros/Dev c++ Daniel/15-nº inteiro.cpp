#include<stdio.h>
#include<conio.h>
main()
{
  int n;
  printf("Digite um numero inteiro:");
  scanf("%d", &n);
  
  if(n<10)
  printf("Menor que dez!");
  
  else
  if(n==10)
  printf("Igual a dez!");
  
  else
  if(n>10)
  printf("Maior que dez!");
  
getch();
return 0;
}
  
  
  
  
