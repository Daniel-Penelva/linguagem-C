#include<stdio.h> 
#include<conio.h>

float percentual(float,int);
main()
{float din;
 int perc;
      
 printf("\n Entre com o valor em dinheiro:");  
 scanf("%f",&din);  
 printf("\n Entre com o percentual:");  
 scanf("%d",&perc);  
 
printf("\n\n");
 
 printf("\n Antes do Acrescimo:%.0f",din);
 
printf("\n\n");

 printf("\n Valor atual:%.2f",percentual(din,perc));
        
getch();

}
float percentual(float din, int perc)
{
 int novo_valor;
 
 novo_valor = din +(din * perc/100);     
      
  return novo_valor;    
}
