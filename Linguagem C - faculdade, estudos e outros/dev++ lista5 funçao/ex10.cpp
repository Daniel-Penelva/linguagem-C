#include<stdio.h> 
#include<conio.h>

int decrescente(int[]);
main()
{int i,vetor[10];
      
   for(i=0; i<10; i++){ 
    printf("\n Entre com o %do. vetor:",i+1);    
    scanf("%d",&vetor[i]);
  }   
   
   
   printf("\nOrdem Decrescente\n\n");   
    for(i=0; i<10; i++){
       printf("%d ",decrescente(vetor));  
    }
     
      
getch();

}
int decrescente(int A[10])
{int i,j,aux,decresc;
    
  for(i=0; i<9; i++){ 
    for(j=i+1; j<10; j++){  
    if(A[i] < A[j])
     {
        aux = A[i];
        A[i] = A[j];
        A[j] = aux;
        
        return A[i];
    }
  } 
 }

  
}//fim função 








