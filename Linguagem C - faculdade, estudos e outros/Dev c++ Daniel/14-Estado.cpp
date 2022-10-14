#include<stdio.h>
#include<conio.h>
 main()
{ 
  int numero;
  printf("Digite o numero de 1 a 4 para:");
  scanf("%d",&numero);
  
  if(numero==1)
  printf("RJ");
  
  else
  if(numero==2)
  printf("SP");
  
  else
  if(numero==3)
  printf("MG");
  
  else
  if(numero==4)
  printf("Outro");
  
getch();
return 0;
}
  
