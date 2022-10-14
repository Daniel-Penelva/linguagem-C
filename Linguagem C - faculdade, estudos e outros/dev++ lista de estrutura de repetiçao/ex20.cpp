#include<stdio.h>
#include<conio.h>

main()
{
  int i,idade;
  int voto=0; 
 
 
   for(i=0; i<15; i++){ 
    printf("\n Digite a idade do %do. eleitor:", i+1);
    scanf("%d", &idade); 
    
    if(idade <= 16)
     {
       voto++; 
       printf("Nao pode votar:%d", voto); 
       printf("\n\n");      
     }   
      
     if((idade >= 18) && (idade <= 65))
     {
       voto++; 
       printf("Eleitor obrigatorio:%d", voto); 
       printf("\n\n");      
     }   
       
      if(((idade > 16) && (idade < 18) && (idade > 65)))
     {
       voto++; 
       printf("Eleitor facultativo:%d", voto); 
       printf("\n\n");      
     }   
   } 
      
      

getch();
return 0;
}  
