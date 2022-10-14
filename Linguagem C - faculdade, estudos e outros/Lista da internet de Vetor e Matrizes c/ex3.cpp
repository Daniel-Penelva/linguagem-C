#include<stdio.h>
#include<stdlib.h>

main()
{ int i;
  int sexo[5], idade[5];
  int salario[5], filho[5];
  int individuo=0, pessoa=0;
  
      
   for(i=0; i<5; i++){
    printf("Digite o sexo:(entre com 1 para feminino e com 2 para masculino):"); 
    scanf("%d", &sexo[i]);   
    printf("Entre com a idade:"); 
    scanf("%d", &idade[i]);  
    printf("\n Entre com o salario:"); 
    scanf("%d", &salario[i]);
    printf("\nDigite a quantidade de filhos:");   
    scanf("%d", &filho[i]);
 }  
 
   for(i=0; i<5; i++){
    if((sexo[i] == 1) || (sexo[i]==2)) 
      if((idade[i] <=25) && (salario[i] <= 2500))
         {
           individuo++;         
         }
      
     if((sexo[i] == 1) || (sexo[i]==2))
       if((idade[i] > 18) && (salario[i] > 2500))
        {
          pessoa++;         
        } 
   }  
      
      
 printf("\n Quantidade de pessoa(s) masc ou fem menor de 25 anos: %d", individuo);
 printf("\n Quantidade de pessoa(s) masc ou fem maior de 25 anos: %d", pessoa);     
      
      
     
      
printf("\n\n");      
        
      
system ("PAUSE");
return 0;
}
