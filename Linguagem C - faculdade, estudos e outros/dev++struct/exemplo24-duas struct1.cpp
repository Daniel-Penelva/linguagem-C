#include<stdio.h>
#include<stdlib.h>

typedef struct data{
int dia;
int mes;
int ano;       
}DATA;

typedef struct aniversario{
  char nome[20];
  int idade;
  DATA nascimento;       
        
}ANIVERSARIO;

main()
{
int dia,mes; 
int nova_idade;  
   
   ANIVERSARIO pessoa ;
   
  printf("Entre com o nome:\n");
  scanf("%s",&pessoa.nome);
  
  printf("Entre com a idade:\n");
  scanf("%d",&pessoa.idade);
      
  printf("Entre com o dia:\n");
  scanf("%d",&pessoa.nascimento.dia);
  
  printf("Entre com o mes:\n");
  scanf("%d",&pessoa.nascimento.mes);  
  
  printf("Entre com o Ano:\n");
  scanf("%d",&pessoa.nascimento.ano);
  
  if((pessoa.nascimento.dia <= 30) && (pessoa.nascimento.mes <= 30))
   {
      nova_idade = pessoa.idade + 1;       
   }
  else
   {
     printf("\nDia ou mes não existe!");  
   }   
   
   printf("\nData de nascimento: %d/%d/%d ",pessoa.nascimento.dia,pessoa.nascimento.mes,pessoa.nascimento.ano); 
   printf("Nome:%s -> idade:%d \n",pessoa.nome,nova_idade);  
      
printf("\n\n"); 
system("pause");
return 0;
}
