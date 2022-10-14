#include<stdio.h>
#include<conio.h>
main()
{ 
      int meninos, meninas, soma;
      printf("Digite o numero de meninos na sala:");
      scanf("%d", &meninos);
      printf("Digite o numero de meninas na sala:");
      scanf("%d", &meninas);
      
      soma= meninos+meninas;
      printf("O total de alunos na sala e:%d", soma);
      
      getch();
      return 0;
}            
