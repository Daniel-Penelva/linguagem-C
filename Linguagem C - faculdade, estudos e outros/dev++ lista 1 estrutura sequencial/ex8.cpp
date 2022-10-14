#include<stdio.h>
#include<conio.h>
main()
{ int nasc, idade;
      
  printf("Digite o Ano de nascimento:");
   scanf("%d", &nasc);
  {
    
    idade= 2012 - nasc;
     printf("sua idade é:%d\n",idade); //imprimi o valor de 2012
 }  
  
  
  {
   printf("Sua idade em 2050:\n");
    idade= 2050 - nasc;
     printf("sua idade é:%d", idade);  //imprimi o valor de 2050
  }

 getch();   
 return 0;
}
    
  
 
   
