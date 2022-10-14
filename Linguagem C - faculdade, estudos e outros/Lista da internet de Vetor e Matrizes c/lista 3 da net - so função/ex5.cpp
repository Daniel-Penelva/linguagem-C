#include<stdio.h>
#include<conio.h>

float minuto(int);
float hora(int);
main()
{int seg;
float m, h;
      
  printf("\n Entre com os segundos:");
  scanf("%d",&seg);    
      
   printf("\n Tempo em segundo:%d",seg); 
printf("\n\n");

  m = minuto(seg);  
  printf("Tempo em minuto:%.2f",m);
  
printf("\n\n");
 
  h = hora(seg);
  printf("Tempo em hora:%.2f",h);     
      
      

printf("\n\n");     
getch();
}

float minuto(int x)
{
float minute;     
      
  minute = x/60;
  return minute;
}
// fiz outra função 
float hora(int x)
{
float hours;         
  
  hours = x/120;
  return hours;
}


// hora para minutos para segundo (multiplica)

//segundo para minuto para hora (dividi)










