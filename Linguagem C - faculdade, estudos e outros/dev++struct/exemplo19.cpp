#include<stdio.h>
#include<stdlib.h>

typedef unsigned int positivos[5];

main()
{
      
/*
O comando typedef � usado com cuidado pois ele pode produzir declara��es confusas.No caso "positivos" � um sinonimo para "array" 
de 5 inteiros positivos 
*/    

int i;

  positivos vetor = {10,20,30,40,50};
  
  for(i=0; i<5; i++){
    printf("O [%d] vetor = %d \n",i,vetor[i]);    
  }     
  
printf("\n\n");      
system("pause");
return 0;      
}
