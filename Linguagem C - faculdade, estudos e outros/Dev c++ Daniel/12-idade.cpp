#include<stdio.h>
#include<conio.h>
main()
{ 
  int i;
  printf("Digite sua idade:");
  scanf("%d", &i);
  
  if(i<=20)
  printf("\nEsta Jovem!");
  
  else
  if(i<=50)
  printf("\nEsta Adulto!");
  
  else
  if(i>=50)
  printf("\nEsta velho!");
  
getch();
return 0;
}    
