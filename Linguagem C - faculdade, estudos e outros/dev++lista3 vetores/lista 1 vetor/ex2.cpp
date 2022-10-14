#include<stdio.h>
#include<stdlib.h>


main()
{ int i;
  int vetor[10];
  float num;
  float soma=0;
  
   
  for(i=0;i<10;i++){
      printf("Digite o numero inteiro:\n");                
        scanf("%d", &vetor[i]);            
   }   
   
  for(i=0;i<10;i++){ 
      if(i % 2 == 0)
       {
            num = vetor[i]/5;
              printf("novo valor par:%f\n", num); 
               
            soma +=vetor[i];
              
       }
       else
         if(i % 2 == 1)
           {
             num = vetor[i] * 10;
                printf("impar:%f\n", num);
           }
           
    }
         
   printf("soma total:%f\n", soma);   
         
         
system("PAUSE");	
  return 0;
}

  
  
  
  
  
  

