#include<stdio.h>
#include<stdlib.h>


main()
{ int i,j;
  int n, num;
  int fat;
  

  printf("\n Digite a quantidade de numeros que sera lido:");
  scanf("%d", &n);
  
  for(i=1; i<=n; i++){
   printf("\nDigite o numero:");
   scanf("%d", &num);
  
   fat=1;
   for(j=1; j<=num; j++){
    fat = fat *j;

   printf("\n Fatorial de numero:%d  = %d", num, fat); 
   }
 }

 

        
      
      
printf("\n\n");      
system("PAUSE");	
  return 0;
}
