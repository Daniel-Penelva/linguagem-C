#include<stdio.h>
#include<stdlib.h>

main() 
{
 int a = 10;
 int b = 50;
 
 int *pont_1; 
 int **pont_1Pont_2;    //ponteiro de um ponteiro inteiro
 
 pont_1 = &a;
 
 printf("\nEndereco: %d -> valor: %d ",&pont_1,*pont_1);
 
 pont_1Pont_2 = &pont_1;
 
 printf("\nEndereco: %d",&pont_1Pont_2);
     
       
  
printf("\n\n");
system("pause");;
}
