#include<stdio.h>
#include<stdlib.h>
      
struct pessoa
{
  char nome[20];  
  int idade;
  float peso;
  float altura;  
       
};

main()
{ 
int i;  
   struct pessoa p[3];
      
  for(i=0; i<3; i++){
   printf("\n Entre com o nome:");
   scanf("%s",&p[i].nome);
   printf("\n Entre com a idade:");
   scanf("%d",&p[i].idade);
   printf("\n Entre com o peso:");
   scanf("%f",&p[i].peso);
   printf("\n Entre com o altura:");
   scanf("%f",&p[i].altura);
 }
 
 printf("\nFormulario\n");
 
  for(i=0; i<3; i++){
   printf("Nome: %s - idade: %d - peso: %.2f - altura: %.2f \n\n",p[i].nome,p[i].idade,p[i].peso,p[i].altura);
 }
 
 
printf("\n\n");     
      
system ("PAUSE");
return 0;
}      
 
