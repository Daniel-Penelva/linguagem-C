#include<stdio.h>
#include<conio.h>

main()
{ float sal,p,novosal;
  int op;

  printf("Escolha uma op��o:\n"); //para escrever as op�oes
   printf("\n1Analista Junior");   
   printf("\n2Analista S�nior"); 
   printf("\n3Gerente");
   printf("\n4Diretor");
   printf("\n5Programador\n");
   printf("\nEntre com a opcao: ");
   scanf("%d", &op);             //para digitar o valor na saida
   
    switch(op){                   //fun��o switch(), tendo "5" op��es que determinam o cargo a sua escolha 
          
    case 1 : printf("Digite o salario:");  // s�o os casos de 1 ao 5 e dentro deles estao determinados valores
                scanf("%f", &sal);
                //25% 
                p = sal * 25 / 100;
                novosal = sal + p;
                printf("novo sal:%f\n", novosal);  //imprimir o valor do novo salario
                break;
                
   case 2 :  printf("Digite o salario:");
              scanf("%f", &sal);
             //10%
             novosal = sal + (sal * 10 / 100);
             printf("novo sal:%f\n", novosal);
             break;
                
   case 3 :   printf("Digite o salario:");
               scanf("%f", &sal);
              //15%
              p= sal * 15 / 100;
              novosal = sal + p;
              printf("novo sal:%f\n", novosal);
              break;
 
  case 4 :   printf("Digite o salario:");
              scanf("%f", &sal);
             //5%
             novosal = sal + (sal * 5 / 100);
             printf("novo sal:%f\n", novosal);
             break;
 
  case 5 :   printf("Digite o salario:");
               scanf("%f", &sal);
             //15%
             novosal = sal + (sal * 15 / 100);
             printf("novo sal:%f\n", novosal);
             break;
                
 default : printf("valor invalido");  //op��o de escape para invalidar o valor dado errado
           break;
}
                
getch();
return 0;
}
      
                
                
                
   
