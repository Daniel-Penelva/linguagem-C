#include<stdio.h>
#include<conio.h>

main()
{ int n;
      
  printf("Escolha de 1a4:");
   scanf("%d", &n);
   
   if(n==1){
     printf("Paulista");
  }
 
  if(n==2){
    printf("Carioca");
  }
 
  if(n==3){
    printf("Mineiro");
  }
 
 if(n==4){
  printf("outro");
  }  
  
getch();
return 0;
}          
