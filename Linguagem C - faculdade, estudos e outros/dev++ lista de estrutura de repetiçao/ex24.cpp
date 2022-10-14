#include<stdio.h>
#include<conio.h>

main()
{ int i,idade;
  float peso, media;
      
    for(i=0; i<10; i++){
      printf("\n Entre com a idade:");   
      scanf("%d", &idade); 
      printf("\n Entre com o peso:");   
      scanf("%f", &peso); 
      
      
      if((idade >=1) && (idade <= 10))
       {
          media = peso/idade; 
          printf("\n A media = %.2f", media);         
       }
         
      if((idade >=11) && (idade <= 20))
       {
          media = peso/idade; 
          printf("\n A media = %.2f", media);         
       }
      
       if((idade >=21) && (idade <= 30))
       {
          media = peso/idade; 
          printf("\n A media = %.2f", media);         
       }
      
       if(idade > 30)
       {
          media = peso/idade; 
          printf("\n A media = %.2f", media);         
       }
    } 
      
         
getch();
return 0;
}  
