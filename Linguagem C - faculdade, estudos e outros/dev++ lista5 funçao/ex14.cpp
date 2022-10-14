#include<stdio.h> 
#include<conio.h>
#include<math.h>

float potencia(int,int);
main()
{int x,y;
 float p;
      
      
  printf("\nEntre o valor de x:");  
  scanf("%d",&x);   
      
  printf("\nEntre o valor de y:");  
  scanf("%d",&y);   
  
 p = potencia(x,y);
 printf("\nPotencia:%.2f",p);
 

getch();
} 
float potencia(int x,int y)
{
  return pow(x,y);
} 
