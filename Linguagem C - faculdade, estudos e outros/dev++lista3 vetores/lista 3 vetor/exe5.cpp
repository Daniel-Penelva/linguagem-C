#include<stdio.h>
#include<stdlib.h>



main()
{
  int i;
  int vetor[10];
  float soma=0;  //qnd se soma não pode esquecer de botar igual a zero
      
  for(i=0;i<10;i++){
    printf("\nDigite os numeros inteiros:");
      scanf("%d", &vetor[i]);              
  }
  
  for(i=0;i<10;i++)
  {
     if(vetor[i]>=50)
      {
        printf("\n numero:%d  - posiçao:%d",vetor[i],i);
          soma +=vetor[i];
      }  
    
       else
         {
           printf("\n numero menor q 50: numero%d  posiçao%d",vetor[i], i);
         }                 
 
  }   
  printf("\n\n");
    printf("\n soma:%f",soma);    

system("PAUSE");	
  return 0;
}      
