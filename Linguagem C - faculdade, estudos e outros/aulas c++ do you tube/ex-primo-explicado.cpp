#include <stdio.h>
#include <stdlib.h>
  
int main()
{
int num,i;
int vezes=0;    
char letra;
   
   do{
   printf("Digite um numero inteiro: ");
   scanf("%d",&num);
// Truque : for(i=1; i<=num && vezes <= 3; i++) 
   for(i=1; i<=num; i++){                         //     por exemplo n = 5;
     if(num % i == 0)                            //     (valor) (posi�ao) (resultado) (resto = tem que restar zero, somente duas vezes)
      {                                          //           5  / 1   =  5  -> resta 0
        vezes++;                                 //           5  / 2   =  2  -> resta 1
      }                                          //           5  / 3   =  1  -> resta 2
   }                                             //           5  / 4   =  1  -> resta 1
    if(vezes == 2)//aqui � p/saber se � primo    //           5  / 5   =  1  -> resta 0 + vezes++ = 1
      {                                          
         printf("\nO numero � primo:%d ",num);   // para ser divisor tem que se divisivel por 1 e por ele mesmo,ou seja somente dois divisores  
      }                                          // Logo, o contador -> "vezes" tem que ter somente 2 divisores que lan�a para a condi�ao
     else                                        // vezes = 2; -> portanto � primo
      {
        printf("\nO numero nao � primo:%d ",num);    
      }   
    
    printf("Entre com sim para continuar e n�o para sair(s/n)?");
    scanf("%s",&letra);
    
  }while(letra == 's');

printf("\n\n");
system("pause");
return 0;
}
/* 

Se nao for um numero primo.                   | Observa��o: Truque
n = 4;                                        |  
                                              |    for(i=1; i<=num && vezes <= 3; i++)
  4 / 1 = 4  -> resta 0                       |ou seja, quando ele apontar acima de dois zero o programa termina pois ja sabe que nao � primo;
  4 / 2 = 2  -> resta 0                       |
  4 / 3 = 1  -> resta 1                       | se o n =20;
  4 / 4 = 1  -> resta 0                       |  20/ 1 = 20   -> resta 0
                                              |  20/ 2 = 10   -> resta 0 
o contador vezes vai apontar 3 zeros,         |  20/ 3 = 6    -> resta 2
logo a condi�ao dir� que n�o � primo.         |  20/ 4 = 5    -> resta 0
                                              | 
vezes = 3;                                    |conclusao: sao tres zero logo nao � primo, e o programa encerra antes mesmo 
                                              |de percorrer todas as posi��es 
                                              | vezes =3;


link (you tube): http://www.youtube.com/watch?v=GJtfC7HdEmQ
*/
