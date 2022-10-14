#include<stdio.h>
#include<conio.h>



main()
{
  int i;
  char nome[5][20];
  float sal[5];
  float tempo[5];
  float novosal[5];
  float flag[5] = {0};
  
  for(i=0;i<5;i++){
    printf("\nDigite o nome:");
    scanf("%s", &nome[i]);
    printf("Digite o salario:");
    scanf("%f", &sal[i]);
    printf("Digite o tempo de trabalho:");
    scanf("%f", &tempo[i]);
  }
  
  for(i=0; i<5; i++){
           
  if((sal[i] <= 580) && (tempo[i] >= 5))
    {
       novosal[i] = sal[i] + (sal[i] * 35/100);   // o q esta entre parenteses é o valor da porcentagem.
       
       flag[i] = 1;     //valor 1 para quem receber a comissao
    }                  //  flag é uma variável para sinalizar uma situação que será testada mais à frente
     
   else 
   if(tempo[i] >= 5)
     {
         novosal[i] = sal[i] + (sal[i] * 25/100);  
         
         flag[i] = 1;    
     }
     
    else 
    if(sal[i] <= 580)
      {
         novosal[i] = sal[i] + (sal[i] * 15/100); 
         
         flag[i] = 1;        
      }
     
  } 
  
  printf("\n\n");
  
  printf("\n nome para quem nao fez nenhuma condição \n");
  
  for(i=0; i<5; i++){
    if(flag[i] == 0)
     {
       printf("\n %s ", nome[i]);          
     }
  }         
    printf("\n\n");
  
   
  printf("\n nome e o novo salario para quem  fez as condiçoes \n");         
  
  for(i=0; i<5; i++){
    if(flag[i] == 1)                        // ou (flag[i] != 0)
      {
        printf("\n %s - %.2f", nome[i], novosal[i]);         
      }      
            
   }        
            
  
 printf("\n\n");         
            
              
getch();
}
  
  
  
  
  
  
  
    
