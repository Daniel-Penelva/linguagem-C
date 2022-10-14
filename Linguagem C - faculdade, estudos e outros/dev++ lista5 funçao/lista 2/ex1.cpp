#include<stdio.h> 
#include<conio.h>


int dobro(int);
main()
{ int i, n;
   
   for(i=0; i<3; i++){ 
     printf("\n Entre com um valor inteiro:");  
     scanf("%d", &n);
     
     
   printf("\n o valor dobro = %d",dobro(n));
 }
     
getch();

}

int dobro(int numero)
 {
    return numero * 2;  //ou pow(numero,2);           
 }
