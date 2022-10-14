#include<stdio.h>
#include<conio.h>

main()
{
      
 int passou = false;
 
  if(passou)
   {
     printf("passou de ano");         
   }
  else
   {
     printf("nao passou de ano");                                
   }   
  
  
printf("\n\n");    
 int i=0;  
 int numero = 0;
 while(i<9)
  {
    numero = numero+i;
    i++;       
    printf("\n%d",numero);
  }
  
  printf("\nResultado:\n");
  printf("\n%d",numero);
 
      
printf("\n\n");

float nota;
printf("\nEntre com a nota:");
scanf("%f",&nota);
  
  do{
      if(nota <= 5)
       {
         printf("Reprovado");       
       }
      else
       {
         printf("Aprovado");                             
       }         
    }while(nota == true);     
      

printf("\n\n");  
   for(i=10; i>=0; i--){
    printf("indice = [%d]-> i = %d \n",i+1,i);          
   }    
      
  

getch();
return 0;    
      
}
