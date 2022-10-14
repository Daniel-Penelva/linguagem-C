#include<stdio.h>
#include<stdlib.h>

#define N 5

main()
{ 
int i;
int valor[N];

  for(i=0; i<N; i++){
   printf("\nEntre com o valor:");
   scanf("%d",&valor[i]);
   }
  
  for(i=0; i<N; i++){
  if(valor[i] % 2 == 0)
   {
    printf("\npar: %d ",valor[i]);
   }
  else if(valor[i] % 2 == 1)
   {
   printf("\nimpar: %d ",valor[i]);
  }       
 }

printf("\n\n");    
system("pause");
return 0;
}  
  
   
   
    






