#include<stdio.h>
#include<conio.h>
main()
{ 
  float a,b,c,MH;
  printf("Digite a primeira nota a:");
  scanf("%f", &a);
  printf("Digite a segunda nota b:");
  scanf("%f", &b);
  printf("Digite a terceira nota c:");
  scanf("%f", &c);
  
  MH=3/(1/a+1/b+1/c);
 printf("A media Harmonica é:%2f", MH);
  
getch();
return 0;
}
