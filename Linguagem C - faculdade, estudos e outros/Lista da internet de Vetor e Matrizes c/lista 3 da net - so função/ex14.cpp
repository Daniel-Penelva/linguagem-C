#include<stdio.h>
#include<conio.h>

float jogo(float,float);
main()
{float hora,h;
 
 
  printf("\nEntre com a hora do inicio do jogo:");
  scanf("%f",&hora);     
  printf("\nEntre com a hora do termino do jogo:");
  scanf("%f",&h);      
      
      
   printf("\n A duração do jogo:%.2f",jogo(hora,h));   
      
      
  
printf("\n\n");     
getch();
}
float jogo(float x, float y)
{
      
  return x + y;      
      
}
