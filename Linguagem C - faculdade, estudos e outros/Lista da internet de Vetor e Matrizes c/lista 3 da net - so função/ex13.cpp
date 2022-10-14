#include<stdio.h>
#include<conio.h>

/*13. Faça um procedimento que recebe 3 valores inteiros por parâmetro e retorna-os ordenados em ordem crescente.*/

int ordem(int[]);
main()
{
int i,vetor[3];
  
  for(i=0; i<3; i++){
    printf("\n Digite vetor[%d]: ",i+1);
    scanf("%d",&vetor[i]);
   }
   
 printf("\nordem crescente\n"); 
  for(i=0; i<3; i++){
    
    printf(" %d ",ordem(vetor)); 
  }   
          
printf("\n\n");     
getch();
}
int ordem(int v[3])
{
int i,j,aux; 

  for(i=0; i<2; i++){
    for(j=i+1; j<3; j++){    
      if(v[i] > v[j])
       {
         aux = v[i];
         v[i] = v[j];
         v[j] = aux;
       
       }
     }
    }       
    
    for(i=0; i<3; i++){
      return v[i];
   }
}
