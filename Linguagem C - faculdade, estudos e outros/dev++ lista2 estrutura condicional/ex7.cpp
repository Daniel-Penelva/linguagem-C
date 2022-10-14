#include<stdio.h>
#include<stdlib.h>

main()
{ 
 float sal,imp,novosal,soma1,soma2,soma3,soma4;
 int op;
 
printf("Digite uma opção:\n");
printf("\n1Imposto");
printf("\n2Novo salario");
printf("\n3Classificação\n");
scanf("%f", &op);
   
switch(op){
            
case 1 : printf("Digite o salario:\n");
         scanf("%f", &sal);
           
         if(sal < 500){
         
         imp = 5 % 100;
         novosal = sal - imp;
         printf("o novo salario:%f", novosal);
         }
         
         else 
         if((sal <= 500) && (sal >= 850)){
         imp = 10 % 100;
         novosal = sal - imp;
         printf("o novo salario:%f", novosal);
         }
         
         else 
         if(sal > 850){
         imp = 15 % 100;
         novosal = sal - imp;
         printf("o novo salario:%f", novosal);
         }
         break;
         

case 2 : printf("Digite o salario:\n");
         scanf("%f", &sal);
      
         if(sal > 1500){
         soma1=25;
         novosal = sal + soma1;
         }         
         
      
         if ((sal <= 1500) && (sal >= 750)){
         soma2=50;
         novosal = sal + soma2;
         }
         
        
         if((sal < 750) && (sal >= 450)){
         soma3=75;
         novosal = sal + soma3;
         }
         
         else
         if(sal < 450){
         soma4=100;
         novosal = sal + soma4;       
         }
         
         printf("novo salario:%f",novosal);
         break;
         
case 3 : printf("Digite o salario:\n");
         scanf("%f", &sal);
         
         if(sal > 700){
         printf("Bem remunerado!");
         }
         
         else
         if(sal <= 700){
         printf("Mal remunerado!");
         }
         break;
         

           
}
         
system("pause");

}         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
       
