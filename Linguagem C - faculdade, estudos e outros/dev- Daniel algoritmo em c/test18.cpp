#include<stdio.h>
#include<conio.h>
main()
{ 
     int n1,n2;
     float MA;
      
      scanf("Digite a primeira nota:");
      printf("%d", &n1);
      scanf("Digite a segunda nota:");
      printf("%d", &n2);
      MA=(n1+n2)/2;
      printf("\na Media e:%2f", MA);
        
getch();
return 0;
}
