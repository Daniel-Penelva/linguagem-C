/*Implemente a função INVERTE que recebe um numero unsigned int como parametro e retorna este numero escrito ao contario.  */

                  // numero unsigned int = é numero inteiro e sempre positivo(+)

// a extençao tem que ser em c e nao c++ ou cpp

#include<stdio.h>
#include<math.h>     //padrao da biblioteca da funçao

 int inverte(unsigned int num);

main()
{ 
  unsigned int num;
  
  printf("\nDigite um valor inteiro:");
  scanf("%d", &num);
  
  
  
  printf("%d", inverte(num));
     
      
      
      
printf("\n\n");      
      
system("pause");      
}      
      
  inverte(unsigned int num)
  {
    char convertido[10], invertido[10];
    itoa(num,convertido,10);     /*itoa = é a função que implica a inversao dos valores (var , var, 10) ;Importante: 10 = é na base decimal.............
                                     >>>>converti inteiro para caracter, dando o nome da variavel de convertido*/
    int i,j;
     j=0;
    for(i= strlen(convertido)-1; i>=0; i--)  //criei um laço que percorre o tamanho do caracter
       {                                      // aqui vai começar a partir do 10,ou seja, do tamanho dele e vai diminuindo até o 0....... ex: 12345 ......  5-1 = 4-1 = 3-1= 2-1 = 1-1=0 fecha a estrutura
         invertido[j] = convertido[i];            //a posição zero de j vai receber a posição 5 do i, percorrendo ate o fim; //ex:os numeros = 1234... posiçao-> 0=[j]=1  posiçao-> 3=[i]=4, ou seja , 1=4 ou 4=1 -> invertendo o valor, depois 1=[j]=2  e  2=[i]=3, ou seja, 2=3 ou 3=2 , logo.... 4321    
         j++; 
       }
    invertido[j] = '\0';   // indica o final da sequencia da inversao do int, ouseja, invertendo caracter para inteiro porque a função inverte retorna em inteiro
    
    return atoi(invertido);                  
  }    
      
      
