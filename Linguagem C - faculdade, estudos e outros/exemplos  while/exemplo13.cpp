#include<stdio.h>
#include<conio.h>

main()
{
      
 char tecla; 
  
  while(1)       // qnd while(1)  -> quer dizer que 1 é verdadeiro; 1 = verdade
   {
     printf("\nEntre com uma tecla");
     printf("\nDigite 's' para sair:");
     scanf("%c",&tecla);       
     fflush(stdin);                        // esta funçao é aconselhado sempre depois do scanf(); 
     
     if(tecla == 's')
      {
        break;       
      }      
            
   }    
      
     
printf("\n\n");     
getch();

}  
