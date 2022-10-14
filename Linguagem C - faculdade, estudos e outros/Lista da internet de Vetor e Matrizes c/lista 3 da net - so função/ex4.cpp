#include<stdio.h>
#include<conio.h>
#include<math.h>

float baskara(int,int,int);
main()
{ int a,b,c;
  float y,z;
      
  printf("\n Entre com o valor de a:");
  scanf("%d",&a);
      
  printf("\n Entre com o valor de b:");
  scanf("%d",&b);    
      
  printf("\n Entre com o valor de c:");
  scanf("%d",&c);   
  
     
    if(baskara(a,b,c) == 1)                  // chamei a funçao aqui
     {
        printf("\n nao existe raiz");                 
     }
    else
    {
     y =((-1)*(b) + baskara(a,b,c))/2*a;   // chamei a funçao aqui
     
     z = ((-1)*(b) - baskara(a,b,c))/2*a;   // chamei a funçao aqui
     
     printf("\n o valor de y:%.2f",y);
              
     printf("\n o valor de z:%.2f",z);           
    }   
     
printf("\n\n");     
getch();
}

float baskara(int a, int b, int c)
{
float x,raiz;
int flag = 0;

  x = (pow(b,2) - (4 * a * c));   
  
  if(x < 0)
   {
     return 1;                  
   }  
  else  
  if(x > 0)
   {
     raiz = sqrt(x); 
     return raiz;   
   }   
            
}
