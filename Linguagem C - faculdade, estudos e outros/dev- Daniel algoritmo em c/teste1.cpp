#include<stdio.h>
#include<conio.h>
main()
{ 
      int i;
      printf("Digite sua idade:");
      scanf("%d", &i);
      if(i>70)
      printf("Esta Velho!");
      else
      if(i>21)
      printf("adulto");
      else
      printf("jovem");
      
      
      
      getch();
      return 0;
}      
