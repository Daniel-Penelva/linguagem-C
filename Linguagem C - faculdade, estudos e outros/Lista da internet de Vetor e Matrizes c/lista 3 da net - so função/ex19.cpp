#include<stdio.h>
#include<conio.h>

int numero_maior(int[]);
int numero_menor(int[]);
main()
{ 
int i,v[10];  
   
   for(i=0; i<10; i++){
     printf("\nEntre com o vetor[%d]:",i+1); 
     scanf("%d",&v[i]);
   }
   
      
  printf("\n maior valor:%d",numero_maior(v));
  printf("\n\n");
  printf("\n menor valor:%d",numero_menor(v));



printf("\n\n");
getch();


}
int numero_maior(int vetor[10])
{
int maior = 0; 
int i;
   
   for(i=0; i<10; i++){
     if(vetor[i] > maior)
      {
        maior =vetor[i];          
      }    
    }
   return maior;
} 

int numero_menor(int vetor[10])
{
int menor = 10000000; 
int i;     
     
    for(i=0; i<10; i++){
     if(vetor[i] < menor)
      {
        menor = vetor[i];          
      }
    }  
   return menor;
}
