#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
/*
Tr�s vari�veis inteiras s�o declaradas. A vari�vel numero armazenar� o valor digitado pelo usu�rio, para o qual descobriremos os divisores. 
A vari�vel divisor � um contador que conter� o pr�ximo n�mero que ser� testado como divisor. E resto � uma vari�vel que armazenar� 
temporariamente o resto da divis�o de numero por divisor.
*/
int numero;
int divisor;
int resto;
  
/*As duas linhas pedem ao usu�rio para digitar o n�mero para o qual deseja descobrir os divisores.*/ 
  printf("Digite o numero: ");
  scanf("%d", &numero);


/*
   divisor = 1;
    while (divisor <= numero) {
     ...
     divisor = divisor + 1;
     }
Este bloco corresponde � estrutura de repeti��o. Por motivos de simplicidade, o c�digo executado dentro do bloco foi omitido com objetivo 
de entender sua l�gica de funcionamento.
A repeti��o � controlada pelo valor da vari�vel divisor. Isto quer dizer que o bloco precisa modificar o valor da vari�vel divisor para, 
em algum momento, encerrar as repeti��es.
*/
  divisor = 1;
   while (divisor <= numero) {
    resto = numero % divisor;
     if (resto == 0) 
     {
       printf("Divisor encontrado: %d \n", divisor);
     }
    divisor = divisor + 1;
   }

/*
No in�cio, antes de executar a repeti��o, a vari�vel divisor � iniciada com um valor v�lido (1), que � o primeiro divisor poss�vel. 
A cada execu��o da repeti��o, a vari�vel divisor � modificada, somando-se a ela uma unidade. Ap�s certo n�mero de repeti��es, valor da 
vari�vel divisor ultrapassar� o valor de numero e assim a repeti��o ser� encerrada.

 resto = numero % divisor;
  if (resto == 0){
   printf("Divisor encontrado: %d \n", divisor);
  }

O c�digo executado dentro da repeti��o calcula o resto da divis�o. Caso ele seja zero, significa que encontramos um divisor. Tal divisor �
impresso.
*/
system("pause");
return 0;
}
