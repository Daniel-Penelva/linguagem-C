#include<stdlib.h>
#include<stdio.h>

int divisor(int);
int main()
{
int n;   
int i;    
   printf("\nEntre com um valor inteiro positivo:");
   scanf("%i",&n); 
    
    
    for(i=1; i<n; i++){
      if(divisor(n)==1)
       {
         printf("\n %i",i);                
       }
    }
        
printf("\n\n");
system("pause");
}
int divisor(int x)
{
int i; 
  for(i=1; i<x; i++){
     if(x % i == 0)
      {
        return 1;    
      } 
  }
}
