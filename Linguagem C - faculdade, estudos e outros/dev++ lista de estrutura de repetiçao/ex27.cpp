#include<stdio.h>
#include<conio.h>

main()
{
  int idade, pessoa=0, p=0;
      
  printf("\n Entre com a sua idade(ENTRE COM ZERO PARA TERMINO DO PROGRAMA):");
  scanf("%d", &idade);  
 while(idade != 0)  
 {
   if(idade <= 21)
    {
      pessoa++;        
    }
 
    if(idade >= 50)
    {
      p++;        
    }
 
  printf("\n Entre com a sua idade(ENTRE COM ZERO PARA TERMINO DO PROGRAMA):");
  scanf("%d", &idade); 
  
  } // FIM WHILE 
    
 printf("\n>>>>>>>>>>>>>>>\n");   
 
  printf("Total de pessoa com menos de 21 anos:%d ", pessoa); 
      
  printf("\n\n");    
      
  printf("Total de pessoa com mais de 50 anos:%d ", p);    
      
        
getch();
return 0;
}  
