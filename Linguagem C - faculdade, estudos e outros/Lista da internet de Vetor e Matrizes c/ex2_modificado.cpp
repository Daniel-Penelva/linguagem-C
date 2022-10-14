#include<stdio.h>
#include<stdlib.h>
#include<string.h> //para usar a funcao strcmp()
#include<conio.h>

main()
{
 int i;
 int sexo[5], idade[5];
 char olhos[5][20], cabelo[5][20];
 int maior = 0;
 int pessoa = 0;

  
 /* Daniel, trabalhar com string é diferente de trabalhar com numero. Por isso, em sala avisei a turma para fazer somente exercicios que nao tivessem string's.
 Eu ia ensinar a voces as funcoes, mas acabou tendo a greve.
 De qualquer forma, aproveitando seu exercicio... para fazer a comparacao entre string's, nao utiliza-se o operador de igualdade e sim uma funcao: strcmp() - 
 deve-se incluir no cabecalho: string.h. A função strcmp() compara duas strings s1 e s2. Ela retorna o valor zero se s1 = s2; maior do que zero se s1 > s2 e menor do que zero se s1 < s2.
 */
      
 for(i=0; i<5; i++){
  printf("Digite o sexo:(entre com 1 para feminino e com 2 para masculino): "); 
  scanf("%d", &sexo[i]);   
  printf("Entre com a idade: "); 
  scanf("%d", &idade[i]);    
  printf("Entre com a cor de seus olhos (verde, azul, castanho, preto): "); 
  scanf("%s", &olhos[i]);    
  printf("Entre com a cor de seus cabelos (ruivo, castanho, louro, preto, branco): "); 
  scanf("%s", &cabelo[i]);  
 }
 for(i=0; i<5; i++){
   if(idade[i] > maior)
          maior = idade[i];           
   //para nao ficar varias concatenacoes e acabar acontecendo um erro logico, separei em if's. Assim tiro sua duvida. Um if dentro de outro if, simula 
   // um E logico
   if (sexo[i]==1)  //verifica se é do sexo feminino
     if ((idade[i] >= 18) && (idade[i] <= 35)) // verifica idade
        if ((strcmp(olhos[i],"verde")) == 0) //verifica se a cor dos olhos é verde
          if ((strcmp(cabelo[i],"louro")) == 0) //verifica se a cor dos cabelos é louro
          {    
           pessoa++;           
          }  
  } // for
           
  printf("\n A maior idade : %d", maior);
  printf("\n Quantidade de mulher(s) com idade entre 18 e 35, cabelos louros e olhos verdes: %d", pessoa);           
  printf("\n\n");      
  getch();
}//main()           
