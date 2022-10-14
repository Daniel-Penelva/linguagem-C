#include <stdio.h>
#include <stdlib.h>


int count(void){
	
	static int num = 0;
	num++;
	return num;
}

int main()
{
	int a;
	
	a = count();
	a = count();
	a = count();
	
	printf("%d",a);	
	
}