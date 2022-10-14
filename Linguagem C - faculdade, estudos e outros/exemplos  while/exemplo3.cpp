#include<stdio.h>
#include<conio.h>
int main()
{
int n;
  do            //faça
   {
    printf("Digite um numero ou zero para sair: ");
    scanf("%d", &n);
     if( n%2 == 1 )
      {
        printf("%d ´e ´ýmpar\n", n);
      }
     else
      {
       printf("%d ´e par\n", n);
      }
   }
   while( n != 0 );       //emquanto


getch();
return 0;
}
