#include<stdio.h> 
#include<conio.h>
#include<math.h>

float diagonal(float, float);  // f =a e f =b
float lado(float, float);      //f=L e f=c
main()
{float a,b,c;
 float L,D;
      
   printf("\n Entre com o valor de a:");
   scanf("%f", &a);   
   printf("\n Entre com o valor de b:");
   scanf("%f", &b);   
   printf("\n Entre com o valor de c:");
   scanf("%f", &c);   
      
      
   L = diagonal(a,b);  
   printf("\n A diagonal = %.2f",L); 
   
  
    D = lado(L,c);
    printf("\n A diagonal = %.2f",D);  
   
getch();

}

float diagonal(float a, float b)
{
  return sqrt(pow(a,2) + pow(b,2));
}
float lado(float L, float c)
{
  return sqrt(pow(L,2) + pow(c,2));          
}


