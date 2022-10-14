#include<stdio.h>
#include<conio.h>

main()
{ int i;
  int temp[10]; 
  int maior = 0;
  int menor = 100000;
  /*int flag[10] = {0};*/
  int soma = 0;
 
 for(i=0; i<10;i++){
  printf("\nDigite a temperatura entre 15 a 40:");
  scanf("%d", &temp[i]); 
 }
 
  for(i=0; i<10;i++){
    if(temp[i] > maior)
      {
        maior = temp[i];         
      }
    if(temp[i] < menor)
      {
        menor = temp[i]; 
      }
   }
   
printf("\n\n");
  printf("\nmaior temperatura: %d - menor temperatura: %d ", maior, menor);  
  
 
printf("\n\n");

   printf("\ntemperatura media\n");   
  for(i=0; i<10;i++){
   if((temp[i] > 20) && (temp[i] <= 30))
       {
        printf("\n%d ", temp[i]);
       
        temp [i] = 1;               // botei temperatura igual a 1 para contabilizar a condiçao. ou t++ (contador)
        
        soma += temp[i]; 
       }
   }

printf("\n\n");
  printf("\n os dias de temperatura media\n");   
  printf("\n %d", soma); 
  
   
        
getch();
} 




/* for(i=0; i<10;i++){
    if(temp[i] <= 20)
      {
        flag[i] = 1;         
      } 
     else
     if((temp[i] > 20) && (temp[i] <= 30))
       {
         flag[i] = 2;         
         
         temp [i] = 1;
        
        soma += temp[i]; 
       
       }
      else 
      if(temp[i] >=40)
        {
          flag[i] = 3;        
        }
    }*/
