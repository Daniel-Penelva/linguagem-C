#include<stdio.h>
#include<conio.h>

main()
{ int i;
  float venda[5];
  int p[5];
  char nome[5][15];
  float novosal[5];
  float maior = 0;
  float menor = 100000;
  
  
   
  
  for(i=0; i<5; i++){
    printf("\nDigite a venda %d:", i+1);
    scanf("%f", &venda[i]); 
    printf("Digite o percentual ganhado:");
    scanf("%d", &p[i]); 
    printf("Digite o nome do funcionario:"); 
    scanf("%s", &nome[i]);    
    }
    
printf("\n\n");
   
    printf("\n o nome e o novo salario\n");
   for(i=0; i<5; i++){
     
     novosal[i] = venda[i] + (venda[i] * p[i]/100);
     
      printf("\n %s - %.2f", nome[i], novosal[i]);
   }
   
printf("\n\n");
   
    printf("\n o nome e o maior e o menor salario\n");
   for(i=0; i<5; i++){  
      if(novosal[i] > maior) 
        {
           maior = novosal[i];           
        }
        
       else 
       if( novosal[i] < menor)
         {
            menor = novosal[i];    
            
         }
   }
   
   printf("%s - %.2f ", nome[i], maior);
   printf("%s - %.2f ", nome[i], menor); 
   
        
getch();
}     
