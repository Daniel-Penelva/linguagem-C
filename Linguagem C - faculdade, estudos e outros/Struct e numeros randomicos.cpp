#include<stdio.h>
#include<stdlib.h>
#include<time.h>

struct mostro{
  
  int vida;
  int pontos;
  int moeda;
};

main()
{
      
int i;
   
  srand(time(0)); 
  
  printf("\nEntre com a quantidade:\n"); 
  scanf("%d",&i);
  struct mostro rpg[i];
  
printf("\n\n");  
  while(i > 0)
   {
     rpg[i].vida = rand()%50;
     rpg[i].pontos = 10;
     rpg[i].moeda = rand()%500;
     
     printf("vida : %d =>  pontos : %d => moeda : %d \n\n",rpg[i].vida,rpg[i].pontos,rpg[i].moeda);
          
     i--;      
   }     
          
printf("\n\n");      
system("pause");
return 0;        
}       
