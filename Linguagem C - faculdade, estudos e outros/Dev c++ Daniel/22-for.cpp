#include<stdio.h>
#include<conio.h>
#define x50
main()
{ 
   int n,i;
   for(i=1;i<=50; i++);
   
    printf("\nDigite um valor inteiro:");
    scanf("%d", &n);
    if((n%2)==0)
    printf("\n%d é par", n);
    else
    printf("\n%d é impar", n);
getch();   
}
   
