#include<stdio.h>
#include<conio.h>

int tabuada(int);
main()
{ 
int n,i;
     
  printf("\Entre com o valor da tabuada:");
  scanf("%d",&n);
  
  for(i=0; i<11; i++){  
    printf("\n %i x %i = %i",n,i,tabuada(n)); 
  }
  
   
printf("\n\n");
getch();
}
int tabuada(int x)
{
int i;
int res;

   for(i=0; i<11; i++){
       res =(x * i); 
       return res;      
    }
}
