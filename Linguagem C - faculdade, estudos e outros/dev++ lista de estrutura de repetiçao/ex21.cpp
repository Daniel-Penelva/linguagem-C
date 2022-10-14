#include<stdio.h>
#include<conio.h>

main()
{ int i;
  int idade;
  char nome[20]; 
  int mensal; 
  
 
 for(i=0; i<10; i++){
   printf("\n Entre com o nome:");   
   scanf("%s", &nome);
   printf("\n Entre com a idade:");   
   scanf("%d", &idade);
   
   
   if(idade <= 10)
    {
      printf("\n O nome :%s e sua mensalidade = 30",nome);   
    }
   
   if((idade > 10) && (idade <= 29))
    {
      printf("\n O nome :%s e sua mensalidade = 60",nome); 
    }
   
    if((idade > 29) && (idade <= 45))
    {
      printf("\n O nome :%s e sua mensalidade = 120",nome);        
    }  
      
     if((idade > 45) && (idade <= 59))
    {
      printf("\n O nome :%s e sua mensalidade = 150",nome);   
    }   
      
     if((idade > 59) && (idade <= 65))
    {
      printf("\n O nome :%s e sua mensalidade = 250",nome);        
    }   
      
    if(idade > 65)
    {
      printf("\n O nome :%s e sua mensalidade = 400",nome);         
    }    

  }// fim for


getch();
return 0;
}  
