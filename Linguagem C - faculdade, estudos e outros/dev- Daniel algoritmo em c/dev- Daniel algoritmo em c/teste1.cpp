#include<stdio.h>
#include<stdlib.h>
main()
{ 
      int i;
      printf("Digite sua idade:");
      scanf("%d", &i);
      if(i>70)
      printf("\nEsta Velho!");
      else
      if(i>21)
      printf("\nadulto");
      else
      printf("\njovem");
      
      printf("\n");
      system("pause");
      return 0;
      
}      
