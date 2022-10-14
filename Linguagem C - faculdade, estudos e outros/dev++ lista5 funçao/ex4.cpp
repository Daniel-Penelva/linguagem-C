#include<stdio.h> 
#include<conio.h>

double positivo(int);
main()
{ int num;
  double valor;
      
  printf("\n Entre com um numero:");
  scanf("%d",&num);    
      
   valor =1/positivo(num);
   
   printf("\n %.2f",valor);  
            
getch();

}      
double positivo(int x)
{ int i;
  double fatorial =1;
  
  for(i=1; i<=x; i++);
   {
     fatorial = fatorial * i;        
   }       
       
  return fatorial;    
}      
      
      
      
      
      
      
      
      



