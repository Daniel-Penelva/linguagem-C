#include<stdio.h>
#include<conio.h>
main()
{
  int i;
  printf("Digite sua idade:");
  scanf("%d", &i);
  
  if(i<0)
  printf("Idade inválida");
  
  else
  if(i>0)
  printf("Idade Válida");
  
getch();
return 0;
}
