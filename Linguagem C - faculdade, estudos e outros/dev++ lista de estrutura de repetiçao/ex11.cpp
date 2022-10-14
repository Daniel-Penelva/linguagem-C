#include<stdio.h>
#include<conio.h>

main()
{ int i;
  int numero, peso;
  int maior=0, menor=100000; 
  int menor_numero,maior_numero;  
  
     
  for(i=0; i<5; i++){  
    printf("\n Entre com o numero do boi:");   
    scanf("%d", &numero); 
    printf("\n Entre com o peso do boi:");   
    scanf("%d", &peso); 
  
    if(peso > maior)
     {
       maior = peso;
       maior_numero = numero;       
     } 
    if(peso < menor)
     {
       menor = peso;
       menor_numero = numero;       
     }   
  }   
      
printf("\n\n");
  printf("Maior peso:%d -> seu numero:%d",maior,maior_numero);      

printf("\n\n");
  printf("Menor peso:%d -> seu numero:%d",menor,menor_numero);       
            
      
getch();
return 0;
}  
