#include<stdio.h> 
#include<conio.h>
#include<math.h>

double sequencia(int);
main()
{int n;
 double SEQUENCIA;
      
  printf("\n Entre com um numero inteiro:");
  scanf("%d",&n);    
      
    SEQUENCIA = (sequencia(n) + 1)/(sequencia(n) + 3);
      
    printf("\n A sequencia :%.2f",SEQUENCIA);
 
      
getch();
}
double sequencia(int x)
{ int i;
  double f=1;
  
  for(i=1; i<x; i++)
   {
     f = pow(f,2) * i;               
   }       
       
  return f;     
}
