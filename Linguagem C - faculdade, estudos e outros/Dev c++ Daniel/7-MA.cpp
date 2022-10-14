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
       MA=(float)(n1+n2+n3)/3;
       printf("A media é:%2f", MA);
       
       if(MA < 3.0)
         printf("\nReprovado");
     
      
       if ((MA >= 3.0) && (MA < 7.0))
          printf("\nProva Final");
      
    
       if(MA > 7.0)
         printf("\nAprovado");    
      
getch();
return 0;
}         
       
         
      
