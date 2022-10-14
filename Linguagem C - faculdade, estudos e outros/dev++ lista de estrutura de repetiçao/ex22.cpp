#include<stdio.h>
#include<conio.h>
#include<math.h>

main()
{ int i;
  float alt, peso;
  float imc;
  
  
   for(i=0; i<10; i++){ 
     printf("\n Entre com a altura:");   
     scanf("%f", &alt);  
     printf("\n Entre com o peso:");   
     scanf("%f", &peso); 
     
     imc = peso/ pow(alt,2);              //  pow funçao de potencia->  ou imc = peso / alt *alt;
      
      if(imc <= 20)
       {
         printf("\n Abaixo do peso, seu imc = %.2f",imc);
       }
      
       if((imc > 20) && (imc <= 25))
       {
         printf("\n Normal, seu imc = %.2f",imc);
       }
      
       if((imc > 25) && (imc <= 30))
       {
         printf("\n Excesso de peso, seu imc = %.2f",imc);
       }
      
      if((imc > 30) && (imc <= 35))
       {
         printf("\n Obesidade, seu imc = %.2f",imc);
       }
      
      if(imc > 35)
       {
         printf("\n Obesidade Morbida, seu imc = %.2f",imc);
       }
     }
         
      
getch();
return 0;
}  
