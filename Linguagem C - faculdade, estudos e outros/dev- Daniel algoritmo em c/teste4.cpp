#include<stdio.h>
#include<conio.h>
 main()
{ 
  int numero;
  printf("Digite de 1 a 4:");
  scanf("%d", &numero);
  if (numero == 1)
     printf("Sou carioca");
  else
    if (numero == 2)
       printf("Sou paulista");
    else
    printf("Sou mineiro");
   scanf("%d", 3);
   printf("Sou outro");
   scanf("%d", 4);
  
   if(1){
   printf("sou RJ");
   }else if(2){ printf("sou SP");
   }else(3){ printf("sou MG");
   }else(4){printf(" sou outro");
   }       
    
 getch();
return 0;
}            
