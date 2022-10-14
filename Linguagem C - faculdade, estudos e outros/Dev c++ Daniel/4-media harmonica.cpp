#include<stdio.h>
#include<conio.h>
main()
{ 
  int aluno;
  float a,b,c,MH;
  printf("\nDigite o nome do aluno:");
  scanf("%d", &aluno);
  printf("\nDigite a primeira nota:");
  scanf("%f", &a);
  printf("\nDigite a segunda nota:");
  scanf("%f", &b);
  printf("\nDigite a terceira nota:");
  scanf("%f", &c);
   
   MH=3/(1/a+1/b+1/c);
  printf("\na Media Harmonica do aluno é:%2f", &MH);
  
getch();
return 0;
}  
     
  
