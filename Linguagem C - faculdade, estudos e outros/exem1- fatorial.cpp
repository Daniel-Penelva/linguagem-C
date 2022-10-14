#include<stdio.h> 
#include<conio.h>

main()
{ 
  int numero, i;
  int fatorial = 1;
  
     
     printf("\n Entre com um valor:");
     scanf("%d", &numero);
     
     if(numero < 0)
      {
        printf("Este valor é um numero inteiro e nao natural.");  // ou seja maior que zero,,,, -1 errado 
      }
      
     else                                                           // se imprimir o valor 5
      {                                                            //numero * i
          for(i=1; i < numero; i++){                               // 1 * 1 = 1
                                                                  //  1 * 2 = 2
           fatorial = fatorial * i;                                // 2 * 3 = 6
           printf("\n= %d ", fatorial);                            // 6 * 4 = 24
        }                                                          // 24 * 5 = 120
      }
            
     printf("\n numero = %d  ->  fatorial = %d", numero,fatorial);      // 5  = 120;
      
getch();

}
