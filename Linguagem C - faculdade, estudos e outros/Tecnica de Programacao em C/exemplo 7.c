#include <stdio.h>
#include <stdlib.h>

//Usando o especificador static
int comStatic(void){
	
	static int num = 0;
	num++;
	return num;
}

//Não Usando o especificador static
int semStatic(void){
	
    int num = 0;
	num++;
	return num;
}

int main()
{
	//Imprimindo com Static
	int a;
	
	a = comStatic();
	a = comStatic();
	a = comStatic();
	
	printf("Resultado com Static: %d",a);
	
	printf("\n\n");
	
    //Imprimindo sem Static
	int b;	
	
	b = semStatic();
	b = semStatic();
	b - semStatic();
	
	printf("Resultado sem Static: %d",b);
	
}