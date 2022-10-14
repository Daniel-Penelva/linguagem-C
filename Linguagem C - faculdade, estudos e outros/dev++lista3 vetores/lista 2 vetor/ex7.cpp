#include<stdio.h>
#include<conio.h>

main()
{  int i;
   float num[10];
   float soma =0;
   float soma1 =0;
   float somatorio;

   for(i=0; i<10; i++){
     printf("\nDigite o %d valor numerico", i+1);
     scanf("%f", &num[i]);
  }
  
   for(i=0; i<10; i++){
   
   soma += i;               // vai somar a posição
   
   soma1 +=num[i];            //vai somar os valores do vetor
   
   somatorio = soma/soma1;
  }
  
  printf("\n %.2f", somatorio);
   
   

getch();
}
