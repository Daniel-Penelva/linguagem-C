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
    printf("\n%d � par", n);
    else
    printf("\n%d � impar", n);
getch();   
}
   
