#include <stdio.h>
#include <conio.h>
main()
{
  char op;
  int n1,n2,r;
  
  printf("Digite uma opção:(+,-,*,/)");
  scanf("%c", &op);
  printf("Digite a primeira numero:");
  scanf("%d", &n1);
  printf("Digite a segunda numero:");
  scanf("%d", &n2);
  printf("Resultado:");
  switch(op)
  {
    case'+': r=n1+n2;
    break;
    case'-':  r=n1-n2;
    break;
    case'*': r=n1*n2;
    break;
    case'/': r=n1/n2;
    break;
    default: printf("opcão invalida"); 
    break;
 }

  printf("%d", r);
getch();
return 0;
}
