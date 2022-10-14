#include<stdio.h>
#include<conio.h>

main()
{ 
  double pot=1;
  int i,x,y;
  printf("Digite o valor de x:");
  scanf("%d", &x);
  printf("Digite o valor de y:");
  scanf("%d", &y);
  for(i=1; i<=y; i++)
  pot=pot*x;
  printf("%d elevado a %d; %.0f",x,y,pot);
  
getch();
return 0;
}
