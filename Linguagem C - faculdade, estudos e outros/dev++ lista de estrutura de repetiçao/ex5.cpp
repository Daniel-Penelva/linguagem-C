#include<stdio.h>
#include<conio.h>

main()
{int i;
 int entra,saiu;
 int desce;
  
  for(i=0; i<10; i++){
   printf("\nEntre com o numero de pessoas que entrou no %do. andar:", i+1);
   scanf("%d",&entra);
   if(entra > 15)
    { printf("\nEXCESSO DE PASSAGEIRO, DEVEM SAIR:\n");
      printf("Andar: %d -> quantds de pessoas: %d",i,entra); 
      
      desce = entra - 15;
      printf("\nDevem descer %d passageiros", desce);       
    }
 }
  
   for(i=0; i<10; i++){
   printf("\nEntre com o numero de pessoas que saiu do %do. andar:", i+1);
   scanf("%d",&saiu);
 }
  
  

printf("\n\n"); 
  printf("No ultimo andar vao descer:");
 for(i=9; i<10; i++){
  printf("%d ",saiu);
 }
 
 
getch();
return 0;
}  
