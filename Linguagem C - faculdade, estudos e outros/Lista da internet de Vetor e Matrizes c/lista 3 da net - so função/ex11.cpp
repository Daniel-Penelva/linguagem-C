#include<stdio.h>
#include<conio.h>

float aluno(float);
main()
{float nota;
      
   printf("\nEntre com a nota do aluno:");
   scanf("%f",&nota);   
      
    if(aluno(nota)==0)
     {
       printf("Conceito D -> Burro pra caralho(nota:%f)",nota);                 
     } 
    if(aluno(nota)==1)
     {
       printf("Conceito C -> Quase Burro(nota:%f)",nota);                 
     }  
    if(aluno(nota)==2)
     {
       printf("Conceito B -> Ae nao é burro(nota:%f)",nota);                 
     }   
    if(aluno(nota)==3)
     {
       printf("Conceito A -> Inteligente(nota:%f)",nota);                 
     }  
     
     
printf("\n\n");     
getch();
}
float aluno(float n)
{
  if((n > 0) && (n <= 4.9))
   {
     return 0;    
   }      
  if((n >= 5.0) && (n <= 6.9))
   {
     return 1;    
   }       
  if((n >= 7.0) && (n <= 8.9))
   {
     return 2;    
   }       
  if((n > 9.0) && (n <= 10.0))
   {
     return 3;    
   }       
}

