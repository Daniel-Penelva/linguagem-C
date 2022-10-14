#include<stdio.h> 
#include<conio.h>

float peso_ideal(int,int);
main()
{int sexo;
 float alt,pesoideal;
      
  printf("Entre com 1 para masculino e 2 para feminino:");  
  scanf("%d",&sexo);   
      
  printf("Entre com a altura:");  
  scanf("%d",&alt);      
      
  if(sexo == 1)
   {
     pesoideal =peso_ideal(sexo,alt);
     printf("\n Masculino IMC = %.2f",pesoideal);     
   }
   if(sexo == 2)
   {
     pesoideal =peso_ideal(sexo,alt);
     printf("\n Feminino IMC = %.2f",pesoideal);     
   }
         


getch();
}
float peso_ideal(int s, int a)
{ float peso;
               
  if(s == 1)
  {
    peso = 72.7 * (a - 58);
    
    return peso;       
  }               
  if(s == 2)
  {
    peso = 62.1 * (a - 44.7);
    
    return peso;    
  }            
               
}

