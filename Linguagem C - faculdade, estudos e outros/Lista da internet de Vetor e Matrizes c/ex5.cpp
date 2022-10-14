#include<stdio.h>
#include<conio.h>


main()
{int i;
 int vetorA[5];
 float perfeito;
 
 
 for(i=0; i<5; i++){
  printf("\nEntre com os valores:");
  scanf("%d", &vetorA[i]);
 }
 
  for(i=0; i<5; i++){
   
   perfeito = vetorA[i] % 2;
   
   printf("%.2f ", perfeito);
  }
 
  getch();

} // fim
