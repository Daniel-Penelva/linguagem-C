#include<stdio.h> 
#include<conio.h>

int soma(int[]);
main()
{ int i,n[5];
      
   for(i=0; i<5; i++){ 
     printf("\n entre com o numero inteiro:");
     scanf("%d", &n[i]);  
  }
      
printf("\n\n");     
  printf("O valor da soma:%d",soma(n));
      
getch();

}

int soma(int num[5])
{int i, soma=0;
      
  for(i=0; i<5; i++){   
   soma +=num[i];
 }
    
   return soma; 
}
