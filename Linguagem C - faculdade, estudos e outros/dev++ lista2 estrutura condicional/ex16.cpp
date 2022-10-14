#include<stdio.h>
#include<stdlib.h>

main()
{ 
  float novopeso,peso;
  int op;
  
  printf("Escolha um Planeta:\n");
  printf("\n1.Jupiter");
  printf("\n2.Urano");
  printf("\n3.Mercurio");
  printf("\n4.Netuno\n");
  scanf("%d", &op);
  
switch(op){
           
case 1 :
         printf("Digite o peso de uma pessoa qualquer:\n");
         scanf("%f", &peso);

         novopeso = (peso * 2,64);
         printf("Novo peso:%2f\n", novopeso);
         printf("Gravidade de Jupiter!\n");
         break;
         

case 2 : 
         printf("Digite o peso de uma pessoa qualquer:\n");
         scanf("%f", &peso);
        
         novopeso = (peso * 1,17);
         printf("Novo peso:%2f\n", novopeso);
         printf("Gravidade de Urano!\n");
         break;
         

case 3 : 
         printf("Digite o peso de uma pessoa qualquer:\n");
         scanf("%f", &peso);
         
         novopeso = (peso * 0,37);
         printf("Novo peso:%2f\n", novopeso);
         printf("Gravidade de Mercurio!\n");
         break;
         
case 4 :
         printf("Digite o peso de uma pessoa qualquer:\n");
         scanf("%f", &peso);
         
         novopeso = (peso * 3,53);
         printf("Novo peso:%2f\n", novopeso);
         printf("Gravidade de Netuno!\n");
         break; 
         

default : printf("Erro!Vai da merda.");
          break;
          
}
         
 
system("pause");
}         
  
  
