#include<stdio.h>
#include<conio.h>

main()
{int i;
 char nome[20];
 int sal, salario=0;
 float novo_salario;
 float soma_reajuste=0;
 float difere;
 
      
  for(i=5; i>0; i--){ 
    printf("\n Entre com o nome do funcionario:");  
    scanf("%s",&nome);   
    printf("\n Entre com o salario do funcionario:");  
    scanf("%d",&sal); 
  
    salario += sal;
     
     if(sal <= 999)
      {
        novo_salario =  sal + (sal * 25 / 100);
        
        printf("nome : %s seu salario:%.2f",nome,novo_salario);     
      }
    if((sal > 1000) && (sal <= 2999))
      {
        novo_salario =  sal + (sal * 20 / 100);
        
        printf("nome : %s seu salario:%.2f",nome,novo_salario);     
      }
    if((sal > 3000) && (sal <= 9999))
      {
        novo_salario =  sal + (sal * 15 / 100);
        
        printf("nome : %s seu salario:%.2f",nome,novo_salario);     
      }
     if(sal > 10000)
      {
        novo_salario =  sal + (sal * 10 / 100);
        
        printf("nome : %s seu salario:%.2f",nome,novo_salario);     
      }
    
    soma_reajuste += novo_salario;
  }
    
    difere = soma_reajuste - salario;


printf("\nSoma do salario:\n");   
printf("%d ",salario); 
      
printf("\n\n");    
           
printf("\nReajuste da soma do salario:\n");   
printf("%.2f ",soma_reajuste);       
      
printf("\n\n");    
           
printf("\nReajuste da soma do salario:\n");   
printf("%.2f ",difere);          
      
      
       
getch();
return 0;
}  
