#include<stdio.h> 
#include<conio.h>


double  fatorial(int);
main()
{ int n,p;
  double ARRANJO;
  
      
  printf("\n Entre com o valor de n:");
  scanf("%d", &n);
  printf("\n Entre com o p:");
  scanf("%d", &p);
  
  ARRANJO = fatorial(n)/fatorial(n-p);
  
  printf("\nres:%.2f ",ARRANJO);

getch();

}
double fatorial(int x) 
{ int i;
  double f = 1;
    
    for(i=1; i <= x; i++){
      
      f = f * i;
                        
   }
   return f;
}
