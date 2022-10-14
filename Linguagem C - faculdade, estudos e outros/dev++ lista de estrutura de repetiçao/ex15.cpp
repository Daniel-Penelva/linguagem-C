#include<stdio.h>
#include<conio.h>

main()
{ int i;
  int sexo; 
  int opcao;
  int sim=0, nao=0;
  int homem=0;
  float porcento;
      
      
   for(i=0; i<10; i++){
    printf("\n Digite o sexo(1 para masculino e 2 para feminino):");
    scanf("%d",&sexo);     
    printf("\n Digite a opçao de resposta(1 para sim e 2 para nao):");
    scanf("%d",&opcao); 
    
    if(opcao == 1)
     {
       sim++;             // contador para somar quantos responderam sim.....
     }  
      
    if(opcao == 2)
     {
       nao++;
     }  
     
    if((sexo == 1) && (opcao == 2))
     { 
       homem++;
     }
  }  
      
     porcento = (100 * homem / 10);  
      
printf("\n\n"); 
 printf("\n O numero de pessoas que responderam sim:%d", sim);        
      
printf("\n\n"); 
 printf("\n O numero de pessoas que responderam nao:%d",nao); 
      
printf("\n\n"); 
 printf("\n O numero de homens que responderam nao:%d",homem); 

printf("\n\n"); 
 printf("\n O porcento de homens que responderam nao:%.2f", porcento);      
           
       
getch();
return 0;
}  
