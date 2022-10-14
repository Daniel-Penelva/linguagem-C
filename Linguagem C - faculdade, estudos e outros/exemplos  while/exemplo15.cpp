#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
/*
Três variáveis inteiras são declaradas. A variável numero armazenará o valor digitado pelo usuário, para o qual descobriremos os divisores. 
A variável divisor é um contador que conterá o próximo número que será testado como divisor. E resto é uma variável que armazenará 
temporariamente o resto da divisão de numero por divisor.
*/
int numero;
int divisor;
int resto;
  
/*As duas linhas pedem ao usuário para digitar o número para o qual deseja descobrir os divisores.*/ 
  printf("Digite o numero: ");
  scanf("%d", &numero);


/*
   divisor = 1;
    while (divisor <= numero) {
     ...
     divisor = divisor + 1;
     }
Este bloco corresponde à estrutura de repetição. Por motivos de simplicidade, o código executado dentro do bloco foi omitido com objetivo 
de entender sua lógica de funcionamento.
A repetição é controlada pelo valor da variável divisor. Isto quer dizer que o bloco precisa modificar o valor da variável divisor para, 
em algum momento, encerrar as repetições.
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
No início, antes de executar a repetição, a variável divisor é iniciada com um valor válido (1), que é o primeiro divisor possível. 
A cada execução da repetição, a variável divisor é modificada, somando-se a ela uma unidade. Após certo número de repetições, valor da 
variável divisor ultrapassará o valor de numero e assim a repetição será encerrada.

 resto = numero % divisor;
  if (resto == 0){
   printf("Divisor encontrado: %d \n", divisor);
  }

O código executado dentro da repetição calcula o resto da divisão. Caso ele seja zero, significa que encontramos um divisor. Tal divisor é
impresso.
*/
system("pause");
return 0;
}
