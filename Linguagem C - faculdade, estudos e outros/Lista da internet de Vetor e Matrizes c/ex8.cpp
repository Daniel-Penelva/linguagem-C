#include<stdio.h>
#include<stdlib.h>


main()
{int i, vetor[30];
      
  for(i=0; i<30; i++){  
     printf("\nEntra com %do. valor inteiro:", i+1);
     scanf("%d", &vetor[i]);
    }
    
  for(i=0; i<30; i++){  
     if(vetor[i] % 2 == 0)  
      {
        printf("\n par = %d ", vetor[i]);           
      }
      
      if(vetor[i] % 2 != 0)
      {
        printf("\n impar = %d ", vetor[i]);                
      }
 }  
 
printf("\n\n");
 
  
system("PAUSE");	
return 0;
}
