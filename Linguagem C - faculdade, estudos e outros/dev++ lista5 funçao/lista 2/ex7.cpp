#include<stdio.h> 
#include<conio.h>

int elemento(int[] , int);
main()
{ int i, numero, vetor[10];

  for(i=0; i<10; i++){
     printf("\n Entre com o %do. vetor:", i+1);  
     scanf("%d", &vetor[i]);      
   }
   
   printf("\n Entre com o elemento:");  
   scanf("%d", &numero);   
      
   if(elemento(vetor,numero) == 0)
    {
      printf("\n o %d nao foi encontrado no vetor",numero);                         
    } 
   else
    {
     printf("\n o %d foi encontrado no vetor",numero);             
    }
   
getch();

}
int elemento(int v[10], int n)
{int i,f=0;                        // f é um flag, logo é igual a zero
    
  for(i=0; i<10; i++){
   
   if(v[i] == n)
    {
      f=1;                // ou pode direto ´=> return 1
             
    }
   }
   return f; 
}












