#include<stdio.h>
#include<conio.h>
main()
{
      float n1,n2,media;
      int letra;
      printf("Digite a primeira nota:");
      scanf("%f", &n1);
      printf("Digite a segunda nota:");
      scanf("%f", &n2);
      
      media=(n1+n2)/2;
      printf("\nmedia e:%2.1f",media);
      
getch();
return 0;
}      
