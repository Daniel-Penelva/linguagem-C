#include<stdio.h>
#include<stdlib.h>

main()
{
      
int numero= 100;
int *ponteiro = 0;
int soma=0;
 
  ponteiro = &numero;
  
   soma = *ponteiro + 20;
   
   printf("\n Valor da soma: %d ",soma);
   printf("\n Endere�o alocado da soma na MP: %d ",&soma);
   
   printf("\nPara compara��o:\n endere�o do numero: %d",&numero);    
      
      
      
      
      
      
      
      
      
      
      
printf("\n\n");
system("pause");
}
