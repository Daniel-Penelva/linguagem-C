#include<stdio.h>
#include<stdlib.h>

main()
{ int i;
  float  matr[5];
  float sal[5];
  float temp[5];
  float novosal[5];
  float flag[5] = {0};
 
  
  for(i=0;i<5;i++){
    printf("\nDigite a matricula:");
    scanf("%f", &matr[i]);            
    printf("Digite o salario:");
    scanf("%f", &sal[i]);
    printf("Digite o tempo:");
    scanf("%f", &temp[i]);
   }
  
  //qnd se trata de varios eventos, cada resposta fica determinado no proprio evento, não fora do for .....
  for(i=0;i<5;i++){
   if((temp[i]>5) && (sal[i] <= 400))   
     {
       novosal[i] = sal[i] + (sal[i] * 35/100);  // dentro dos parenteses estao a comissao        
     
      flag [i] = 1;        // flag é uma variavel que sinaliza uma resolução q sera testada mais a frente mais a frente do       
     }
 
   else
   if(temp[i]>5)
      {
       novosal[i] = sal[i] + (sal[i] * 35/100);        
        
        flag[i] = 1;
      }
   
   else
   if(sal[i] <= 400)
      {
       novosal[i] = sal[i] + (sal[i] * 35/100);        
        
        flag[i] = 1;
      }
      
   }
   
   printf("\n\n");
   
   printf("\nRelatorio que não tera aumento\n");
   
   for(i=0;i<5;i++){
    if(flag[i] == 0)
      {
         printf("\n %f :", matr[i]);      
      }
   }
   
   
   printf("\n\n");
   
   printf("\nRelatorio que tera aumento\n");
   
   for(i=0;i<5;i++){
    if(flag[i] != 0)                             // ou (flag[i] == 1)
      {
         printf("\n %f - %.2f:", matr[i], novosal[i]);      
      }
   }
   
   
   printf("\n\n");
  
system ("PAUSE");
return 0;
}
