#include<stdio.h>

/*A estrutura de repetição for manipula automaticamente todos os detalhes de repetição controlada pelo contador
Como funciona: qnd o for começa a ser executado, a variavel do controle "contador" é inicializada com valor 1.
Aseguir s condição de continuação do loop "contador <=10" é examinada.
A variavel do controle "contador" é então incrementadapela expressão "contador ++" e o loop começa novamente com seu teste de continuação.*/

main()
{ 
 int n;
 //for(counter= 1; counter <= 10; contador++) 
//(for=palavra chave; controle=nome da variavel -- 10=valor inicial da var de controle; <=10 valor final da var de controle; controle++=incremento da variavel controle)
 //for(expressão 1; expressão 2; expressão 3)
   for(n=0; n<8; n++){
    scanf("%d", &n);                     // coloca o valor
   }
   
   printf("%d\n", n); //imprimi o valor
   
  
return 0;
}
  
