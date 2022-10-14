#include<stdio.h>
#include<conio.h>

main()
{ int i,numero;
  int cont=0;
  
  
      
  for(i=0; i<10; i++){
   printf("\n Entre com o numero inteiro:");   
   scanf("%d", &numero);    
   
   if(numero >= 30)
    {
      cont++;             
    }  
      
      printf("\n O numero é: %d ", numero); 
  } 
      
      
  printf("\n\n");
  printf("Sao %d numeros acima de 30", cont);    
      
      
getch();
return 0;
}  
