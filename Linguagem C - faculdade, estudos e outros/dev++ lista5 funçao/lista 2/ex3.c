#include<stdio.h> 
#include<stdlib.h>

int fatorial(int);
int main()
{int n,y;
      
      
   printf("\n Entre com um valor:");
     scanf("%d", &n);
      
       printf("\nO numero = %d",n);                         
       
        
       y = fatorial(n);                                                                         
       
       printf("\n fatorial = %d",y);                                                

printf("\n\n");
system("pause");
return 0;

}
int fatorial(int x) 
{ int i;
  int f = 1;
    
    for(i=1; i <= x; i++){
      
      f = f * i;
                        
   }
   return f;
}// fim funçao
