#include <stdio.h>
#include <stdlib.h>
// Importante saber: O while()  -> esta estrutura de repetição confere no inicio
//Significado: Enquanto()
int main()
{
int numero;    
char letra = 's';   // este s é para iniciar o while

  while(letra == 's') 
  {
    printf("Entre com um numero:");
    scanf("%d",&numero);
    
    
      printf("O numero %d :",numero);   
     
    
    printf("Deseja continuar(s/n)"); 
    scanf("%s",&letra);           
  }
    


printf("\n\n");
system("pause");
return 0;
}    
