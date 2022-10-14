#include<stdio.h>
#include<conio.h>
#include<string.h>

// PALINDROMO: é uma palavra ou frase ou numeral q pode ser lida tanto da direita para esquerda como da esquerda para direita..
// ex: osso.
main()
{
  char texto[200];
  int frase, frase1, frase2;
  int i,j;
  int tamanho; 
 
  printf("\nDigite a palavra ou a frase:");
  scanf("%s",&texto);  
  
 // strlen(texto) , esta funçao vai declarar o tamanho da palavra ou frase  ou numeral 
  tamanho= strlen(texto);


 printf("\nQuantidade de letra ou numero:%d",tamanho);   //aqui vai imprimir a resposta  
        
getch();
} 
