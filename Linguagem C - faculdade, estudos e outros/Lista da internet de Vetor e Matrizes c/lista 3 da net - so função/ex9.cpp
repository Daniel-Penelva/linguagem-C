#include<stdio.h>
#include<conio.h>

int numero(int);
main()
{ int n;
      
   printf("\nEntre com um numero inteiro(positivo ou negativo):"); 
   scanf("%d",&n); 
      
      
      if(numero(n)==0)
       {
         printf("\n O numero é negativo:%d",n);               
       }
      else
       {
         printf("\n O numero é positivo:%d",n);               
       }
      
        
printf("\n\n");     
getch();
}
int numero(int x)
{
  if(x < 0)
   {
    return 0;    
   }    
  else 
   {
     return 1;   
   } 
    
}
