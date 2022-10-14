#include<stdio.h>
#include<conio.h>

main()
{ float n1,n2,n3,media;
  
  
  printf("Digite a primeira nota:\n");
   scanf("%f", &n1);
  
  printf("Digite a segunda nota:\n");
   scanf("%f", &n2);
  
  printf("Digite a terceira nota:\n");
   scanf("%f", &n3);
   
    media=(n1+n2+n3)/3;
     printf("A media:%f\n", media);
     
     if((media == 0) && (media <= 3)){
       printf("Reprovado");
    }    
     
     else
      if((media > 3) && (media <= 7)){
        printf("ProvaFinal");
    }      
      
    else {
    printf("Aprovado");
   }  
    
getch();
return 0;
}
      
       
       
       
       
