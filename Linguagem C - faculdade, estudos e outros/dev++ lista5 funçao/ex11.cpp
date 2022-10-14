#include<stdio.h> 
#include<conio.h>
#include<math.h>

float raio(int);
main()
{ int r;
      
  
 printf("\n Entre com o raio:");
 scanf("%d",&r);
 
  
      
     printf("Valor do volume:%.2f ",raio(r)); 
      
  
getch();
}
float raio(int x)
{
        
  return (4/3*pow(x,3));  
      
}
