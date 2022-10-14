#include <stdio.h>
#include <stdlib.h>


int main()
{
int x, soma;

x = 1; soma=0;

while(x <=10)
{
	soma += x;
	++x;
}

printf("A soma é : %d\n",soma);
   
   
printf("\n");
system("PAUSE");
return 0;
}