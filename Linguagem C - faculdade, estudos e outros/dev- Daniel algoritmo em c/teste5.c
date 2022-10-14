#include<stdio.h>
#include<conio.h>
main()
{
    int idade;
     printf("Digite sua idade:"); 
     scanf("%d", &idade);
     
     if(idade<10){
     printf("criança");
     }else if (idade<20){
     printf("jovem");
     }else if(idade<50){
     printf("adulto");
     }else{
     printf("velho");
     }      
          

getch();     
return 0;
}     
      
      
      
      

