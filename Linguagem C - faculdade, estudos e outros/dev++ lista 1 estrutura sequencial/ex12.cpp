#include<stdio.h>
#include<conio.h>

main()
{ float hora,min,minuto,totalmin,segundos;
 
 printf("\nDigite a hora:");
  scanf("%f", &hora);
  
 printf("\nDigite os minutos:");
  scanf("%f", &min);

  //letra (a)
  minuto=hora/60;                                 //calculo de hora para minuto
 printf("\nHora convertido em minuto:%f", minuto); //imprimi o minutos

 //letra (b)
  totalmin=min+minuto;                           //calculo total min
 printf("\nminuto total:%f", totalmin);            //imprimi o totalmin

 //letra (c)
  segundos=totalmin/60;                          //calculo segundos
 printf("\nminuto total:%f", segundos);            //imprimi o valor de segundos
 
 
 getch();
return 0;
}
 
 
  
  
  
 
 
