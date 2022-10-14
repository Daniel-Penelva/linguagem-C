#include<stdio.h>
#include<conio.h>

int numero(int);
main()
{int n;
      
   printf("\n Entre com um numero inteiro e positivo:");
   scanf("%d",&n);   
      
    if(numero(n)==1)
     {
       printf("\n o numero é par:%d",n);      
     }  
    else 
     {
       printf("\n o numero é impar:%d",n);  
     }  
      
      
      
      


printf("\n\n");     
getch();
}
int numero(int numero)
{
  if(numero % 2 == 0)
   {
     return 1;         
   }    
   else 
   {
     return 2;     
   } 
    
    
}
