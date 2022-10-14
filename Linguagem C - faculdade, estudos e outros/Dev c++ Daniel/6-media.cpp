#include<stdio.h>
#include<conio.h>
main()
{ 
   int n1,n2,n3,n4;
   float media;
   printf("Entre com a primeira nota:");
    scanf("%d", &n1);
   printf("Entre com a segunda nota:"); 
    scanf("%d", &n2);
   printf("Entre com a terceira nota:");
    scanf("%d", &n3);
   printf("Entre com a quarta nota:");
    scanf("%d", &n4);
    
    media=(n1+n2+n3+n4)/4;
   printf("\nA media da soma é :%2f", media);
   
getch();
return 0;
}    
    
