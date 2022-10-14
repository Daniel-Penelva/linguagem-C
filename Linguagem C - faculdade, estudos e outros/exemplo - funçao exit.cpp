#include<stdio.h>
#include<stdlib.h>

main()
{

char ch;

  printf("\n 1.verificar Ortografia"); 
  printf("\n 2.Corrigi"); 
  printf("\n 3.Sair\n");  
  
    do{
        ch = getchar();
          switch(ch){
                     case '1': printf("\nVerificar Erro.");
                               break;
                     case '2': printf("\nCorrigir Erro");
                               break;
                     case '3': exit(0);
                     }       
     }while(ch != '1' && ch != '2' && ch != '3'); 
  
      
      
         
printf("\n\n");     
system("pause");
return 0;      
}
