#include "stdio.h"
#include "stdlib.h"

int main(void)
{
   
int num,i,resp;
    
   printf("Digite um n�mero:");
   scanf("%d",&num);
   
   for(i=0; i<11; i++)
   {
     resp = num * i;
     printf("%d x %d = %d \n",num, i, resp);     
   }
    
    
  
printf("\n\n");
system("pause");
}   
