#include<stdio.h>
#include<conio.h>

main()
{
int i, s, n;

 printf("Introduz N:\n");
 scanf("%d", &n);
 s = 0;           //começa com o valor zero
 i = 1;          // começa na posição 1;
 while( i <= n )
  {
    s = s + i;
    i++;                  // incrementa o valor 
  }
  printf("A soma é %d\n", s);
    
/* Como vai ficar:
   s  i*s
   1 (1*1)
   2 (1*2 = 1*1*2)
   6 (2*3 = 1*1*2*3)
   24 (6*4 = 1*1*2*3*4)
*/


getch();    
}   
