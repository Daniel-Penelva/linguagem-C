#include<stdio.h>
#include<stdlib.h>
#include<math.h>    // biblioteca matematica


main()
{ int numero;
  int valor = 0;
  int soma = 0;
  int maior = 0;
  int menor = 10000000;
  float raiz;
  
  printf("\nDigite o numero inteiro(coloque zero para termino do programa):");
  scanf("%d", &numero);
  while(numero != 0)  // quando digitar o valor zero a condiçao determina o fim do programa
   {
     valor++;               //contador para os numeros 
     
     soma += numero;          // somatorio dos numeros 
     
     if(numero > maior)
      {
        maior = numero;         
      }
      
     if(( numero % 2 == 1) && (numero < menor))
      {
        menor = numero;         
      }
  
     
     raiz = sqrt(numero); 
     printf("\nRaiz quadrada do numero \n");
     printf("%.2f ", raiz);  
  
   printf("\nDigite o outro numero inteiro:");
   scanf("%d", &numero);
   } // fim while
              
  
  printf("\nSoma dos numeros\n");
  printf("%d", soma);
  
printf("\n\n\n");
  
  printf("\nMaior numero\n");
  printf("%d", maior);
  
printf("\n\n\n");
  
  printf("\nMenor numero impar\n");
  printf("%d", menor);
    
  
  
printf("\n\n");
           
system("PAUSE");
return 0;
 }           
            
  
