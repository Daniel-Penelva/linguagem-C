#include<stdio.h>
#include<conio.h>


int fatorial(int);
main()
{ 
int x;
      
  printf("\nEntre com um valor:");
  scanf("%d",&x);
  
        
 printf("\nfatorial :%d",fatorial(x));  

printf("\n\n");     
getch();
}
int fatorial(int n)
{int f=1,i;
      
   for(i=1; i<n; i++){
     f = f * i;        
    } 
   return f; 
}
