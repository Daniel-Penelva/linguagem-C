#include<stdio.h>
#include<stdlib.h>

main()
{
   char lampada;
   
   printf("Programa para trocar l�mpada.");
   
   printf("Deseja trocar a L�mpada(s/n)?");
   scanf("%s",&lampada);
   
   while(lampada == 's')
   {
      printf("Lampada trocada!"); 
      break;
           
   } 
   
   if(lampada == 'n')   
   printf("A lampada nao precisa ser trocada!");   
      
        
system("pause");
return 0;      
      
}
