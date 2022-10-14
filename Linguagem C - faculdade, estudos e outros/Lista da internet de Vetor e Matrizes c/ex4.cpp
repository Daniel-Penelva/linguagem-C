#include<stdio.h>
#include<stdlib.h>

main()
{ int i;
  int sexo[5], idade[5];
  int salario[5], filho[5];
  int maior=0, menor=100000;
  int soma = 0;
  int feminino=0;
  float media;

 
        
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
    
    soma +=salario[i];
    
    if(idade[i] > maior)
     {
       maior = idade[i];  
     }
    if(idade[i] < menor)
     {
       menor = idade[i];   
     }
  } 
    
  for(i=0; i<5; i++){
   if(sexo[i] == 1)                           //esta saindo errado, verificar..............
     if((filho[i] == 3) && (salario[i] <= 500))
         {
           feminino++;
         }
  }
    
 media = soma/5*5;   
 
 
   
 printf("\n Maior idade: %d ", maior);
 printf("\n Menor idade: %d ", menor);  
   
 printf("\n Media: %.2f", media);
 printf("\n Quantidade de mulher(s) com 3 filhos: %d ",feminino);  
   
       
printf("\n\n");      
        
      
system ("PAUSE");
return 0;
}

