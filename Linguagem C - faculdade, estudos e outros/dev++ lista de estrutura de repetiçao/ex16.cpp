#include<stdio.h>
#include<conio.h>

main()
{ int numero;
  int i, sexo,vida; 
  int masc=0;
  float mortalidade;
  float porcento_masc;
  int periodo=0;
  float porcento_meses;
 
 printf("\n Entre com o numero de crianças nascidas do ano de 2012:");
 scanf("%d",&numero);
   mortalidade = numero*100/numero;
 
 for(i=0; i<numero; i++){
   printf("\n Entre com o sexo da criança morta(1-masculino e 2-feminino):"); 
   scanf("%d", &sexo);  
   printf("\n Entre com o numero de meses de vida da criança ate sua morte:"); 
   scanf("%d", &vida);    
      
      if(sexo == 1)
       {
         masc++;       
      
         porcento_masc = masc * 100/numero;
       }
       
       if(vida <= 24)
        {
          periodo++;    
          
          porcento_meses = periodo * 100/numero;  
        }
   }
      
          
printf("\n\n");            
  printf("porcentagem mortalidade :%.2f", mortalidade);    
      
printf("\n\n");            
  printf("porcentagem mortalidade de criança masculino :%.2f",porcento_masc);       
      
printf("\n\n");            
  printf("porcentagem de criança que viveram mmenos que 24 meses:%.2f",porcento_meses);       
      
printf("\n\n");      
       
getch();
return 0;
}  
      
