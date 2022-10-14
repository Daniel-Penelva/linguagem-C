#include <stdio.h>

int main()
{
	int numero = 20;
	
    printf("%o + %x = %04d", numero, numero, numero * 5);
    printf("\n");
	printf("%o + %X = %04i", numero, numero, numero * 5);	
}

/*
Leia-me

%o --> Octal integer --> 20 em Octal = 24

%x ou %X --> Hexadecimal integer --> 20 em Hexadecimal = 14

%d ou %i --> Decimal signed integer --> 04d gera numero decimal com 4 casas --> multiplicado por 5 = 0100

*/