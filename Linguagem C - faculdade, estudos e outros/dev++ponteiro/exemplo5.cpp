
/*obs: neste caso a fun�ao main() e a fun��omodifica(), ambas nao originara a soma dos valores(50 + 20), apesar de ter o mesmo nome da variavel 
n�o v�o implicar em nada pois as fun�oes sao diferentes. 
Para resolver esse tipo de exemplo farei abaixo*/

/*
int modifica(int);
main()
{
 int valor = 50;                          ira imprimir o valor 50, pois como eu disse a fun�ao modifica nao tem possiblidade de chamar a
                                        fun�ao main(), porque a variavel que esta dentro da fun��o main s� esta disponivel para ela mesma, nao importa 
modifica(valor);                        se a variavel numero tenha o mesmo nome que esta contido na fun��o modifica, pois em cada fun��o a variavel 
 printf("\n R: %d ",valor);              numero sao distintos.
 
      
printf("\n\n");
system("pause");
}
int modifica(int valor)
{
      
  valor = valor + 20;
  return valor;  
    
}
Abaixo resolvendo usando o ponteiro;

*/
#include<stdio.h>
#include<stdlib.h>
int modifica(int*);
main()
{
int valor = 50;                          
                                      
  
  modifica(&valor);                       
   
   printf("\n R: %d ",valor);             
 
      
printf("\n\n");
system("pause");
}
int modifica(int *pontSoma)   //pontSoma � o endere�o da variavel valor que � igual a 20
{
      
  *pontSoma = *pontSoma + 20;
  return *pontSoma;  
    
}
/*Neste caso a variavel q esta na fun��o main() e a fun��o modifica() identifica exatamente o endere�o da variavel que esta na fun�ao main(),
 logo, ao chamar a fun��o modifica dentro da fun��o main(),o que esta dentro do parametro � chamado o endere�o da variavel valor atraves do 
 *pontSoma que esta na fun��o modifica para que o programa possa fazer a soma dos valores*/
