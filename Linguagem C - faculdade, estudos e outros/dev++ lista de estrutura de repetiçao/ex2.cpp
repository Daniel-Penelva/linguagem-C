#include<stdio.h>
#include<conio.h>
#define N 4
main()
{
int i;
int soma = 0;
int numero[N];

 
  for(i=0; i<N; i++){
   printf("\nDigite o valor de N:");
   scanf("%d", &numero[i]);
  }
  
 
  for(i=0; i<N; i++){ 
   
   soma += numero[i];
 }  

 printf("\nSomatorio de N\n");    
 printf("%d", soma);
  
  
getch();
return 0;
}
