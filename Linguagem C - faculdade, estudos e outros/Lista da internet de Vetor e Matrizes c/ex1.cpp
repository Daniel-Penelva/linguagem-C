#include<stdio.h>
#include<stdlib.h>

main()
{int i;
 int sexo[5], idade[5];
 char olhos[5][20], cabelo[5][20];
 int menor_fem=0, maior_fem=0;
 int menor_masc=0, maior_masc=0;
 
      
 for(i=0; i<5; i++){
  printf("Digite o sexo:(entre com 1 para feminino e com 2 para masculino):"); 
  scanf("%d", &sexo[i]);   
  printf("Entre com a idade:"); 
  scanf("%d", &idade[i]);    
  printf("Entre com a cor de seus olhos:"); 
  scanf("%s", &olhos[i]);    
  printf("Entre com a cor de seus cabelos:"); 
  scanf("%s", &cabelo[i]);  
 }
 
  for(i=0; i<5; i++){
   if((idade[i]< 18) && (sexo[i]==1))
    {
      menor_fem++;             
    }
   if((idade[i]>= 18) && (sexo[i]==1))
    {
      maior_fem++;             
    }
   if((idade[i]< 18) && (sexo[i]==2))
    {
      menor_masc++;             
    }
   if((idade[i]>= 18) && (sexo[i]==2))
    {
      maior_masc++;             
    }
 }
 
printf("\nQuantidade de  mulher(s) abaixo de 18 anos:%d ",menor_fem);
printf("\nQuantidade de  mulher(s) acima de 18 anos:%d ", maior_fem);   
printf("\nQuantidade de  homem(s) abaixo de 18 anos:%d ", menor_masc);   
printf("\nQuantidade de  homem(s) assima de 18 anos:%d ", maior_masc);   
   
    
      
printf("\n\n");      
        
      
system ("PAUSE");
return 0;
}
