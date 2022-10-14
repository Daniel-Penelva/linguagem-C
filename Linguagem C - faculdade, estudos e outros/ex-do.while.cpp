#include <stdio.h>
#include <stdlib.h>

int main()
{
int numero;  
char letra;
//Importante saber: O do{...}while();  -> esta estrutura de repetição confere no final
//Significado:   faz{...}Enquanto();
   do{
   
  printf("Entre com um numero:");
  scanf("%d",&numero);
    
    
   printf("O numero :%d ",numero);     
           
          
    printf("Entre com sim para continuar e não para sair(s/n)?");
    scanf("%s",&letra);       
           
  }while(letra == 's');

printf("\n\n");
system("pause");
return 0;
}
