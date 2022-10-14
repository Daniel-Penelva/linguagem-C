#include<stdio.h> 
#include<conio.h>


int numero_menor(int[], int);
int main()
{
 int i,n,y;
 int vetor[5];
    
    do{
        printf("\n Entre com o elemento(n<=5):");
        scanf("%d", &n);
        
        }while(n>5);
   
   for(i=0; i<n; i++)
    {
      printf("\n Entre com o numero inteiro:");  
      scanf("%d", &vetor[i]);      
    }  
   
   y = numero_menor(vetor,n);  
  printf("\n Menor valor:%d ",y);  
   
getch();

}
int numero_menor(int v[],int a)
{ int i, menor;
    
 menor = v[0];              // ou int menor = 100000000;


  for(i=0; i<a; i++){
    if(v[i] < menor)
     {
       menor = v[i]; 
     }
   }
   return menor; 
}
