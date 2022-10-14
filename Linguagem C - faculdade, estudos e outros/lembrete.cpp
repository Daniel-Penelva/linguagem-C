#include<stdio.h>
#include<conio.h>
main()
{
float nota[10];
char nome[10][50];
float flag[10] = {0};
float media;
float revisao[5] = {0};
      
   for(int i=0; i<5; i++){
     printf("\nEntre com o [%d] nome do aluno:",i+1);
     scanf("%s",&nome[i]);  
     printf("\nEntre com a [%d] nota do aluno:",i+1);
     scanf("%f",&nota[i]);        
   }   
      
      
   for(int i=0; i<5; i++){ 
    if(nota[i] < 5)
     {
       media = nota[i];
       flag[i] = 1;      
     }
    else if((nota[i] >= 5) && (nota[i] <= 7))
     {   if(nota[i] == 5)
          {
            media = nota[i];
            revisao[i] = 1;          
          }
       media = nota[i];
       flag[i] = 3;
     }
    else
     {
       media = nota[i];
       flag[i] = 4;          
     }
   }
   
   for(int i=0; i<5; i++){ 
    if(flag[i] == 1)
     {
       printf("\nReprovado = nome:%s nota:%.2f \n",nome[i],nota[i]);
     }
    if(flag[i] == 3)
     {
       printf("\nRecuperação = nome:%s nota:%.2f \n",nome[i],nota[i]);
     }   
    if(flag[i] == 4)
     {
       printf("\nAprovado = nome:%s nota:%.2f \n",nome[i],nota[i]);
     }   
  }
  
  for(int i=0; i<5; i++){ 
   if(revisao[i] != 0)
    {
     printf("Chance de Revisao:nome -> %s \n",nome[i]);             
    }
   }

getch();
return 0;      
}











