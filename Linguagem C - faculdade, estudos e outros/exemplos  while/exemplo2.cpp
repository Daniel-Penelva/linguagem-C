#include<stdio.h>
#include<conio.h>
int main()
{
int n;
int i = 0;
int impar = 1;

   printf("Entre com o total de numeros impares a ser impresso: ");
   scanf("%d", &n);
   while( i < n )                            // enquanto i menor que n vai tb diminuindo 2 ate chegar na posição zero i=0;
    {                                                      // n =3
     printf("%d\t", impar);                  // posiçao                  equaçao
     i = i + 1;                             // i = i + 1                 impar =impar + 2      
     impar = impar + 2;                     // i = 0 + 1 = 1             impar = 3 + 2 = 5
    }                                       // i = 1 + 1 = 2             impar = 5 + 2 = 7 
                                                  // e assim vai 
getch();
return 0;
}
