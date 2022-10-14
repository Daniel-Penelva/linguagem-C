#include<stdio.h>
#include<conio.h>

main()
{  int i;
   char carro[5][40];       // esse 40 é o numero de caracter que posso usar
   float dist[5];
   float maior = 0;
   float menor = 100000;
   float litro;
     
      
  for(i=0; i<5; i++){
   printf("\nDigite o modelo do carro:");
   scanf("%s", &carro[i]);         
   printf("\nDigite a diatancia em km em 1 litro:");
   scanf("%f", &dist[i]); 
  
  }
  
   printf("\n\n");
   
   printf("\n o quilometro de todos os carros\n");
   for(i=0; i<5; i++){
     printf("\n %s - %f ", carro[i], dist[i]);   
  }
  
   for(i=0; i<5; i++){
      if(dist[i] > maior)
        {
           maior = dist[i];       
        }
      else 
      if(dist[i] < menor)
        {
           menor = dist[i];         
        }
   }
   
   printf("\n maior distancia em 1 litro\n");
   printf("\n %s  %f ", carro[i], maior);
   
   printf("\n\n");
   
   printf("\n menor distancia em 1 litro\n");
   printf("\n %s  %f ", carro[i], menor);


  printf("\n Quantd de litro de cada carro\n");
    for(i=0; i<5; i++){
             
      litro = (1000 * 1)/dist[i];    // regra de tres.
      
      printf("\n%.2f - %s ", litro, carro[i]);
  }

  

printf("\n\n");

getch();
}
