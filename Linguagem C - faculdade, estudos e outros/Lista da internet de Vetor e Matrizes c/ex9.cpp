#include<stdio.h>
#include<stdlib.h>

int funcaopar(int numero)
{
  if(numero % 2 == 0)
   {
      return 1;
   }
        
}

main()
{ int i;
  int numero[15];

  for(i=0; i<15; i++){
    printf("\n Digite o valor do vetor:");         
    scanf("%d", &numero[i]);
  }
   
   for(i=0; i<15; i++){
    if(funcaopar(numero[i]) == 1)
     {
        printf("\nposião: %d -> par = %d", i, numero[i]);           
     }
  }




printf("\n\n");
 
  
system("PAUSE");	
return 0;
}
