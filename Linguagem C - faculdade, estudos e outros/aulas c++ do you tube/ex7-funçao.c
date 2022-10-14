/*Implemente a função que recebe um mês e um ano como parametros e retorna o numero de dias daquele mês e daquele ano*/
//Um ano bissexto qnd é multiplo de 4 e nao multiplo de 100, ou tb quando é multiplo de 400
#include<stdio.h>
#include<math.h>  

int dias(int mes, int ano);

main()
{ int mes,ano;
      
  printf("\nDigite o mes:"); 
  scanf("%d", &mes);
  printf("\n Digite o ano:");
  scanf("%d", &ano);
  
     
   printf("\n Numero de dias: %d ",dias(mes, ano) );   
      
      
      
                
      
printf("\n\n");      
      
system("pause");      
}

 int dias(int mes, int ano)
  { int dias;
    
    switch(mes)
     {
       case 1:       
          dias = 31;  
          break;
       case 2:
          if(((ano % 4 == 0) && (ano % 100 != 0)) || (ano % 400 == 0))
           {
              dias = 29;
              printf("\nAno Bissexto\n");     
           }
          else 
           {
             dias = 28;    
           }
          break;
       case 3:
          dias = 31;
          break;  
       case 4:
          dias = 30;
          break;
       case 5:
          dias = 31;
          break;   
       case 6:
          dias = 30;
          break;   
     case 7:
          dias = 31;
          break;    
    case 8:
          dias = 30;
          break;      
    case 9:
          dias = 30;
          break;      
    case 10:
          dias = 30;
          break;  
    case 11:
          dias = 30;
          break;      
    case 12:
          dias = 31;
          break;     
    }             
    return dias;             
  }
