#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i = pow(2,16) - 1;
	
	if(!i)
		printf("Verdadeiro %d", i);
	else
	  printf("Falso %d", i);	
	
	return 0;
}