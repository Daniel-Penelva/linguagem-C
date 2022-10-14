#include<stdio.h> 
#include<conio.h>

int converte_minuto(int y)
{
 int min;
 
  min = y*60;
  return min;     

}
int conv_hora(int min)
{
 int h;

   h = min*60;
   return h;                  
}
main()
{ int sec;
  int minute,hours;

  printf("\nEntre com quantos segundos:");
  scanf("%d", &sec);
  
    minute = converte_minuto(sec);
    printf("convertido em minuto:%d", minute);
    //ou 
    //printf("convertido em minuto:%d",converte_minuto(sec));
    
    printf("\n\n");
    
    hours = conv_hora(sec);
    printf("convertido em hora:%d",hours);


getch();

}
