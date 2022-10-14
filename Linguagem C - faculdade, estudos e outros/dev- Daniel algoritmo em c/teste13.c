#include<stdio.h>
#include<conio.h>
main()
{ 
     float n1,n2,n3,MA;
     
      printf("Digite a primeira nota:");
      scanf("%f", &n1);
      
      printf("Digite a segunda nota:");
      scanf("%f", &n2);
      
      printf("Digite a terceira nota:");
      scanf("%f", &n3);
      
      MA=(n1+n2+n3)/3;
      printf("A media Artmetica é:%2f", MA);
      
      if(MA<3)
      printf("Reprovado");
      
      else 
       	if ((MA >= 3.0) && (MA < 7.0))
      printf("Prova Final");
      
      else
      printf("Aprovado");
      
getch();
return 0;
}      
