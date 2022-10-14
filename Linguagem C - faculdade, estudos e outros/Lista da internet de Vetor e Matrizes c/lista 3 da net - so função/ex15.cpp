#include<stdio.h>
#include<conio.h>

int triangulo(int,int,int);
main()
{int a,b,c;
      
   printf("\n Entre com o valor de a:");  
   scanf("%d",&a); 
   printf("\n Entre com o valor de b:");  
   scanf("%d",&b);    
   printf("\n Entre com o valor de c:");  
   scanf("%d",&c);   
      
   if(triangulo(a,b,c)==1)
     {
       printf("\nTriangulo Equilatero!");     
     }   
    if(triangulo(a,b,c)==2)
     {
       printf("\nTriangulo Isosceles!");     
     }     
    else
     {
       printf("\nTriangulo escaleno!");    
     }  
    
     
printf("\n\n");     
getch();
}
int triangulo(int a, int b, int c)
{
  if(((a < b + c) && (b < a + c) && (c < a + b)))
   {  if((a == b) && (a == c))    
       {
            return 1;
       }
   }
  
  if(((a == b) || (a == c)) || (b == c))
   {
     return 2;      
   }
  else 
   {
     return 3;    
   }  

}
