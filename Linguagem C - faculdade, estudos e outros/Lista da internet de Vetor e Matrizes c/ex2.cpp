#include<stdio.h>
#include<stdlib.h>
#include<string.h>   //para usar a funcao strcmp()
#include<conio.h>

main()
{int i;
 int sexo[5], idade[5];
 char olhos[5][20], cabelo[5][20];
 int maior = 0;
 int pessoa=0;

 
      
 for(i=0; i<5; i++){
  printf("Digite o sexo:(entre com 1 para feminino e com 2 para masculino):"); 
  scanf("%d", &sexo[i]);   
  printf("Entre com a idade:"); 
  scanf("%d", &idade[i]);    
  printf("Entre com a cor de seus olhos(azul, verde, castanho, preto):"); 
  scanf("%s", &olhos[i]);    
  printf("Entre com a cor de seus cabelos(louro, preto, castanho, ruivo):"); 
  scanf("%s", &cabelo[i]);  
 }
 
  for(i=0; i<5; i++){
   if(idade[i] > maior)
    {
       maior = idade[i];            
    }
    
    if(sexo[i] == 1)
      if((idade[i] >= 18) && (idade[i] <= 35))
        if((strcmp(olhos[i],"verde"))== 0)
          if((strcmp(cabelo[i],"louro"))== 0)
           {
             pessoa++;                     
           }
  }
           
printf("\n A maior idade : %d", maior);
printf("\n Quantidade de mulher(s) referente a idade, cabelo e olhos : %d", pessoa);           
           
           
          
           
printf("\n\n");      
        
      
system ("PAUSE");
return 0;
}           
