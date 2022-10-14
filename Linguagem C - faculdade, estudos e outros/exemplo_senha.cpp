#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define SENHA "teste"
int main()
{
   
   char senha1[100];
   printf("Digite a senha: ");
   scanf("%s",&senha1);
   if(strcmp(SENHA,senha1))
     printf("Senha incorreta!!");
   else
     printf("Senha correta!!");
   system("pause");  
   return 0;     
}
