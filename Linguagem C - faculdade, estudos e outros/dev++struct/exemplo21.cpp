#include<stdio.h>
#include<stdlib.h>


struct data{
int dia;
int mes;
int ano;       
};

main()
{
  
 data calendario ;
  /*calendario.dia;
  calendario.mes;
  calendario.ano;*/
      
  printf("Entre com o dia:\n");
  scanf("%d",&calendario.dia);
  
  printf("Entre com o mes:\n");
  scanf("%d",&calendario.mes);  
  
  printf("Entre com o Ano:\n");
  scanf("%d",&calendario.ano);
  
  if(calendario.dia <= 30)
   {
     printf("\nDIA: %d ",calendario.dia);           
   }
  else
   {
     printf("\nDia não existe!");  
   }   
  
   if(calendario.mes <= 30)
   {
     printf("\nMes: %d ",calendario.mes);           
   }
  else
   {
     printf("\nmes não existe!");  
   }    
      
      
   printf("\nAno: %d ",calendario.ano);    
      
printf("\n\n"); 
system("pause");
return 0;
}
