#include<stdio.h> 
#include<conio.h>

int numero_menor(int[]);
main()
{ int i, vetor[5], y;
      
   
   for(i=0; i<5; i++)
    {
      printf("\n Entre com o numero inteiro:");  
      scanf("%d", &vetor[i]);      
    }  
   
   y = numero_menor(vetor);  
  printf("\n Menor valor:%d ",y);      // ou printf("Menor valor:%d",numero_menor(vetor));
   
getch();

}
int numero_menor(int vetor[5])
{ 
  int menor = 1000000;
  int i;

  for(i=0; i<5; i++){
    if(vetor[i] < menor)
     {
       menor = vetor[i]; 
             
     }
   }
   return menor;  
}
