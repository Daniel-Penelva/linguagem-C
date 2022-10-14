#include<stdio.h>
#include<stdlib.h>

#define n 4

main()
{ int i;
  int x[n];
  int y[n];
  int soma[n];
  int num[i];
  int dif;
  int dif1;

  for(i=0;i<n;i++){
   printf("\nDe o valor de x:");
     scanf("%d", &x[i]);
 }
  
  for(i=0;i<n;i++){
   printf("\nDe o valor de y:"); 
     scanf("%d", &y[i]);
 }
 
  printf("\n\n");
  
  for(i=0;i<n;i++){
                   
  soma[i] = x[i] + y[i];
    printf("O valor da soma:%d\n", soma[i]);
 }
 
  // diferente nao sei fazer
 
 printf("\n\n");



system("PAUSE");
return 0 ;
}
