#include<stdio.h>
#include<conio.h>
main()
{
  int i;
  printf("Digite sua idade:");
  scanf("%d", &i);
  
  if(i<0)
  printf("Idade inv�lida");
  
  else
  if(i>0)
  printf("Idade V�lida");
  
getch();
return 0;
}
