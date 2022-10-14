#include<stdio.h>
#include<conio.h>
main()
{ 
  int meninos,meninas,soma;
  printf("Digite o numero de meninos:");
  scanf("%d", &meninos);
  printf("Digite o numero de meninas:");
  scanf("%d", &meninas);
  
  soma=(meninos+meninas);
  printf("O tatal de alunos é:%d", soma);
  
  if(soma>40)
  printf("\nExiste mais alunos do que deveria!");
  
  else
  if(soma<=40)
  printf("\nExiste a quantidade correta!");
  
getch();
return 0;
}
  
  
