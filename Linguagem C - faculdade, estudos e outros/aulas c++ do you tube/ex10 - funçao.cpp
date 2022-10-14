#include<stdio.h> 
#include<conio.h>

int quadrado(int);
main()
{int x,y;
      
   printf("qn Entre com o valor de x:"); 
   scanf("%d", &x); 
    
      
    y = quadrado(x);
    
    printf("\n o Valor = %d",y); 

getch();

}
int quadrado(int a)
{
  return a * a;       // ou pow(a,2);
}
