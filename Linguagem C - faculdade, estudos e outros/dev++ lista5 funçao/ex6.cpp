#include<stdio.h> 
#include<conio.h>

int numero(int);
main()
{int valor;
    
    printf("\n Entre com o valor:");
    scanf("%d",&valor);  
      
      
     if(numero(valor)==0)
      {
        printf("\n Seu valor � negativo!");      
      } 
     else 
      {
        printf("\n Seu valor � positivo!");    
      } 
      
      
getch();

}
int numero(int n)
{
  if(n < 0) 
   {
     return 0;    
   }   
  else
   {
     return 1;    
   }  
}
