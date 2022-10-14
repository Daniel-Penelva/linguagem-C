#include<stdio.h> 
#include<stdlib.h>

int MenuEntrarVetor(int v[10],int op)
{
int i,j,aux; 
  if(op == 1)
  {
      for(i=0; i<10; i++){  
        printf("\n Entre com o %do. vetor:", i+1);  
        scanf("%d", &v[i]);    
      } 
      
      for(i=0; i<10; i++){  
       return v[i];   
      }  
  }
  
  if(op == 2)
  {
     for(i=0; i<9; i++){ 
       for(j=i+1; j<10; j++){ 
         if(v[i] > v[j])  
          {
            aux = v[i];   
            v[i] = v[j];
            v[j] = aux;        
          }
        }
     } 
     
     for(i=0; i<10; i++){
        return v[i];
        break;
     } 
   }
  
  if(op == 3)
   {
         
   }


}



main()
{
int i,j, aux, op;
int vetor[10];
   
   printf("\n Entre com as opçoes de 1 ao 4:");
   printf("\n1.Ler dados do vetor"); 
   printf("\n2.Ordenar vetor");  
   printf("\n3.Imprimir vetor");  
   printf("\n4.Sair \n");  
   scanf("%d", &op);
  while(op != 0)
  {
    if(op == 1)
    {
      for(i=0; i<10; i++){  
       printf("\n %d",MenuEntrarVetor(vetor,op));
       break;  
      }
    }      
    if(op == 2)
     {
       for(i=0; i<10; i++){  
        printf("\n %d",MenuEntrarVetor(vetor,op));
        break;  
       }
     }
     if(op == 3)
      {   
         for(i=0; i<10; i++){  
           printf("\n %d",MenuEntrarVetor(vetor,op));
           break;  
          }
      }     
     if(op == 4)
       {
         printf("\n %d",MenuEntrarVetor(vetor,op));
         break;  
       }
                  
 } // fim switch
                 
 system("pause");
 return 0;
}
    
