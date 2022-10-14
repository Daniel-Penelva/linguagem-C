#include<stdio.h>
#include<string.h> //para usar a funcao strcmp()
#include<conio.h>

main()
{ int idade, sexo;
  char olhos[20],cabelo[20];
  int pessoa=0;
  float porcento;
  int maior =0;
  int cont = 0;
  int i;
  
  printf("\n Entre com a sua idade(digite -1 para o termino do programa):");
  scanf("%d", &idade);    
    while(idade != -1)
     { 
       printf("\n Digite o sexo(1 para masculino e 2 para feminino):");
       scanf("%d",&sexo);
       printf("\n Digite a cor dos olhos(azuis, verdes, castanhos):");
       scanf("%s",&olhos);
       printf("\n Digite a cor dos cabelos(louros, castanhos,pretos):");
       scanf("%s",&cabelo);         
        
        cont++;
                
       if(idade > maior)
        {
          maior = idade;        
        }
       
       for(i=0; i<cont; i++){
        if(sexo == 2)        
         if((idade <= 18) && (idade >= 35)) 
          if((strcmp(olhos,"verdes")) == 0)     //usa-se uma funcao: strcmp() ...deve-se incluir no cabecalho: string.h.
           if((strcmp(cabelo,"louros")) == 0)     
             {
                pessoa ++;                                 
             }   
       
     porcento = pessoa * 100 / cont;   //esta errado....
      }
      
     printf("\n Entre com a sua idade(digite -1 para o termino do programa):");
     scanf("%d", &idade);            
     }
       
    
     
      
printf("\n\n"); 
 printf("\n Maior idade dos habitantes:%d", maior);     
   
printf("\n\n"); 
 printf("\n habitantes mulher de olhos verdes e cabelo louros:%d",pessoa);   
      
printf("\n\n"); 
 printf("\n O Porcento de habitantes mulher de olhos verdes e cabelo louros:%.2f", porcento);   



printf("\n\n");      
       
getch();
return 0;
}  
