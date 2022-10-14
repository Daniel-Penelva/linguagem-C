/*calcula a quantidade de litros de gasolina que voce pode abastecer dependendo do valor da gasolina e valor do pagamento */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
	 
int main (){

 float lg, paga, totallitros;
	    
    printf("*** CALCULE A QUANTIDADE DE LITROS QUE VOCE VAI COLOCAR NO TANQUE*** ");
    printf("\n\n Digite o valor da gasolina: ");
    scanf("%f", &lg);
	    
    printf("\n\n Digite o valor do pagamento: ");
    scanf("%f", &paga);
    
    totallitros = paga/lg;
	     
	    if(lg == 0)
         {
          printf("\n\n\t R$%.2f A gasolina ta de graca?\n\n", lg);
         }
	    else if(paga == 0)
        {
         printf("\n\n\t R$%.2f ? como voce ira pagar a gasolina de R$%.2f \n\n" ,paga, lg);
        }
       else
        {
         printf("\n\n\t O total a abastecer e: %.2f litros\n\n" ,totallitros);
	    }
	
    
system("pause");
return(0);
	}
