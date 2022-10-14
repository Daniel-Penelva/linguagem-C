#include<stdio.h>
#include<conio.h>
main()
{
    int idade;
     printf("Digite sua idade:"); 
     scanf("%d", &idade);
     
     if(idade<0){
     printf("idade valida");
     }else{
     printf("idade invalida");
     }
     
 
 getch();
 return 0;
}                     
