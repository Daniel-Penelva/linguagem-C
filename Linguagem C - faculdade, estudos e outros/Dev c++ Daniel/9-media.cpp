#include<stdio.h>
#include<conio.h>
main()
{ 
  float n1,n2,n3,media;
  printf("Digite a primeira nota:");
   scanf("%f", &n1);
  printf("Digite a segunda nota:");
   scanf("%f", &n2);
  printf("Digite a terceira nota:");
   scanf("%f", &n3);
   
   media=(n1+n2+n3)/3;
  
  if(media < 3)
  printf("\nReprovado");
  
    if ((media >= 3) && (media < 7))
   printf("\nProva Final");
   
    if(media > 7)
   printf("\nAprovado");
   
getch();
return 0;
}   
