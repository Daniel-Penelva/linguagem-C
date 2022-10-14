#include <stdio.h>
int main()
{
	int i = 9;
	
	i^=15;
	printf("Para i^ seu valor: %d", i);
	printf("\n");
	
	i>>=1;
	printf("Para i>> seu valor: %d", i);
	printf("\n");
	
	i<<=2;
	printf("Para i<< seu valor: %d", i);
	printf("\n");
	
	return 0;
}