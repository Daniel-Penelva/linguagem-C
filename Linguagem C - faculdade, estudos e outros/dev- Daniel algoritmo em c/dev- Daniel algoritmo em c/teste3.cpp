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
      if(soma>40){ 
        printf("\nExiste mais alunos do que deveria na sala");  
    }else {
        printf("\nAinda ha espaço na sala de aula");
    }
      
      
      
      getch();
      return 0;
}            
