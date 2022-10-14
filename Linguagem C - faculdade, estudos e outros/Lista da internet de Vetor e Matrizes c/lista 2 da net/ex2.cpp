#include<stdio.h>
#include<stdlib.h>

main()
{
      
  int nota1,nota2,nota3;
  float MA;
  
    printf("\nAluno\n");
    printf("\nEntre com a primeira nota:"); 
    scanf("%d", &nota1);
    printf("\nEntre com a segunda nota:"); 
    scanf("%d", &nota2);     
    printf("\nEntre com a terceira nota:"); 
    scanf("%d", &nota3);  
    
    MA = (nota1 + nota2 *2 + nota3 *3)/7;
    printf("\nMedia:%.2f", MA);
    
    if(MA >=9)
     {
       printf("\nTirou A = inteligente");       
     }          

     if((MA < 9 ) && (MA >= 7.5))
      {
        printf("\nTirou B");      
      }
         
     if((MA <7.5 ) && (MA >= 6))  // é ponto e nao virgula.....
      {
        printf("\nTirou C");      
      }
  
      if((MA <6) && (MA >= 4))
      {
        printf("\nTirou D");      
      }

      if(MA < 4)
     {
       printf("\nTirou E = burro pra caralho");       
     } 
      
      
      
      
      
      
      



printf("\n\n");     
      
system ("PAUSE");
return 0;
}     
      
