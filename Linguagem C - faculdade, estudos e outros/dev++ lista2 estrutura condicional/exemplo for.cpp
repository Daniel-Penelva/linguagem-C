#include<stdio.h>

/*A estrutura de repeti��o for manipula automaticamente todos os detalhes de repeti��o controlada pelo contador
Como funciona: qnd o for come�a a ser executado, a variavel do controle "contador" � inicializada com valor 1.
Aseguir s condi��o de continua��o do loop "contador <=10" � examinada.
A variavel do controle "contador" � ent�o incrementadapela express�o "contador ++" e o loop come�a novamente com seu teste de continua��o.*/

main()
{ 
 int n;
 //for(counter= 1; counter <= 10; contador++) 
//(for=palavra chave; controle=nome da variavel -- 10=valor inicial da var de controle; <=10 valor final da var de controle; controle++=incremento da variavel controle)
 //for(express�o 1; express�o 2; express�o 3)
   for(n=0; n<8; n++){
    scanf("%d", &n);                     // coloca o valor
   }
   
   printf("%d\n", n); //imprimi o valor
   
  
return 0;
}
  
