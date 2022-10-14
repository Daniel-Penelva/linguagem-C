
/*obs: neste caso a funçao main() e a funçãomodifica(), ambas nao originara a soma dos valores(50 + 20), apesar de ter o mesmo nome da variavel 
não vão implicar em nada pois as funçoes sao diferentes. 
Para resolver esse tipo de exemplo farei abaixo*/

/*
int modifica(int);
main()
{
 int valor = 50;                          ira imprimir o valor 50, pois como eu disse a funçao modifica nao tem possiblidade de chamar a
                                        funçao main(), porque a variavel que esta dentro da função main só esta disponivel para ela mesma, nao importa 
modifica(valor);                        se a variavel numero tenha o mesmo nome que esta contido na função modifica, pois em cada função a variavel 
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
int modifica(int *pontSoma)   //pontSoma é o endereço da variavel valor que é igual a 20
{
      
  *pontSoma = *pontSoma + 20;
  return *pontSoma;  
    
}
/*Neste caso a variavel q esta na função main() e a função modifica() identifica exatamente o endereço da variavel que esta na funçao main(),
 logo, ao chamar a função modifica dentro da função main(),o que esta dentro do parametro é chamado o endereço da variavel valor atraves do 
 *pontSoma que esta na função modifica para que o programa possa fazer a soma dos valores*/
