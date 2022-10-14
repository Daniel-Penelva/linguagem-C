#include<stdio.h>
#include<stdlib.h>

main()
{ int i;
  int salario;
  float novosal;
  float novosal1;
 
 salario = 1000;
 novosal = salario + salario * 1.5/ 100;
 
 printf("Novo salario: %.2f", novosal);
 
printf("\n\n");
 
 for(i=2007; i<2012; i++){
  
  novosal1 = novosal + novosal * 2/100;
  
 }
  
 printf("Novo salario: %.2f", novosal1);
      
printf("\n\n");      
system("PAUSE");	
  return 0;
}

 
