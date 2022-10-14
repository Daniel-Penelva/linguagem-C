#include<stdio.h>
#include<conio.h>

# define max 100

float media(int,int[]);
main()
{int n,i,vetor[max];  // como se deve declarar esse vetor[]......
   
   printf("\n Entre com um numero:");
   scanf("%d",&n);      
      
   for(i=0; i<n; i++){
     printf("\nEntre com o valor do vetor[%d]:",i+1);   
      scanf("%d",&vetor[i]);
   }
   
  
    printf("\n Media:%.2f",media(n,vetor));
   
   
        
printf("\n\n");     
getch();
}
float media(int x, int v[])
{
int i;
int soma1=0,soma =0;  
float media;
 
  for(i=0; i<x; i++){
   
    soma1 += i;
    soma += v[i];      
  }
  
  media =(soma/soma1);
  return media;   
      
}
