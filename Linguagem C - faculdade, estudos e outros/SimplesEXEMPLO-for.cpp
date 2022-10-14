#include <stdio.h>
#include <conio.h>

int main()
{
int c, n=0;
  
  for(c=0; c<=255; c++){
   printf("\n%c ==> %d",c+1,c);
   n++;  //começa imcrementando com o c=0
    if(n==23) 
     {
      printf("\n\nPressione uma tecla ...");
      n=0; //note que aqui o incremento começa com o valor zero
      getch();
     }
   }

getch();
return 0;
}
