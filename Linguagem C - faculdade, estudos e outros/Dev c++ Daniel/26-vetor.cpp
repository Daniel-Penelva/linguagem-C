#include<stdio.h>
#include<conio.h>
main()
{//declaração
  int maior_menor [] = {22,3,7,8,15,9,11,7,6,4};     // são os valores do vetor
  int i, maior=0, menor=99999;                     //neste caso "i" vai ser do zero até o numero maximo 99999
//inicio  
  for (i=0;i<9;i++)                             //aqui o "i" vai da posição zero até a posição 9
{
  if(maior_menor [i] > maior)
     maior = maior_menor[i];
 
  if(maior_menor[i] < menor)
     menor = maior_menor[i];
}

printf("o maior valor :%d e o menor valor :%d",maior,menor);

getch();
}
