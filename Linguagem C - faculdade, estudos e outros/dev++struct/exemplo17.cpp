#include<stdio.h>
#include<stdlib.h>

/*

typedef tipo_existente novo nome

*/

//cria um sinonimo para int 
typedef int inteiro;
main()
{
  
// "int" e "inteiro" são o mesmo tipo  
  int x = 10;
  inteiro y = 20;
  
  y = y + x;
  
   printf("Soma: %d ",y);  
      
      
      
printf("\n\n");
system("pause");
return 0;

}
// link: http://www.youtube.com/watch?v=JmarMwaT_KQ&feature=channel&list=UL
