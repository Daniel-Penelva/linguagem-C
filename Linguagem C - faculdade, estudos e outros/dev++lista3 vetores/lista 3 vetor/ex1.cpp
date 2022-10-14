#include<stdio.h>
#include<stdlib.h>

main()
{ int i;
  float sal=650;
  float valor[5];
  int produto[5];
  int soma=0;
  int soma1=0;
  int maior = 0;
  float novosal;
  
  for(i=0;i<5;i++){
     printf("\nDigite o valor do objeto:");
     scanf("%f", &valor[i]);
     printf("Digite a quantidade vendida do produto:");              
     scanf("%d", &produto[i]);
  } 
  
  
  printf("\n\n");  
  
 
  printf("\n o valor unitario de cada peça \n");
       
  for(i=0;i<5;i++){
    soma += produto[i];
    
    soma1 += valor[i];
   
    printf("\n %d - %f :", produto[i], valor[i]);  // o preço unitario de cada produto
 }
 
  printf("\n\n");
  printf("\n a quntd de peças vendidas \n");  
  printf("\n %d ", soma);  
    
  
  printf("\n\n");
  printf("\n o valor total do produto\n");  
  printf("\n %d ", soma1);
  
  
printf("\n\n");  
  
 
  printf("\n a comissao do funcionario \n");
     for(i=0;i<5;i++){
         
         novosal = sal + (soma1 * 5/100);      //novosal é só um funcionario, ............ assim novosal[i] esta errado pois não é mais de um
  }  
  
   printf("\n %.2f ", novosal);


printf("\n\n");

   printf("\n maior numero de venda do produto \n");
   for(i=0;i<5;i++){
     if(produto[i] > maior)
       {
         maior = produto[i];       
       }
    }
    
   printf("\n%d - %d",i,maior);


printf("\n\n");

system ("PAUSE");
return 0;
}
