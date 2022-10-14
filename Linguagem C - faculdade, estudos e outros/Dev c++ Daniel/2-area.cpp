#include<stdio.h>
#include<conio.h>
main()
{
  int base,alt;
  float area;
  printf("Digite a base:");
   scanf("%d", &base);
  printf("Digite a alt:");
   scanf("%d", &alt);
  
   area=(base*alt)/2;
  printf(" Area do triangulo é: %2f", area);
getch();
return 0;    
}
