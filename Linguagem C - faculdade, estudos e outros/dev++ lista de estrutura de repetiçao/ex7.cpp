#include<stdio.h>
#include<conio.h>

main()
{ int comb;
  int container,peso_cont;
  int bilhete;
  int volume, peso, total_volume=0,total_peso=0;
  int passageiro=0;
  float peso_decolar;
  int peso_carga=0;
  int i;    
      
  printf("\n Entre com a quantidade de combustivel da aeronave(minima 10000 litros):");
  scanf("%d",&comb);
      
  printf("\n Entre com a quantidade de containers:");
  scanf("%d",&container);    
  
  for(i=0; i<container; i++){
  printf("\n Entre com a quantidade de peso de cada container:");
  scanf("%d",&peso_cont);    
 
   peso_carga += peso_cont; 
 }
 
  printf("\n Entre com o numero do bilhete do passageiro:(entre com zero para fim do programa):");
  scanf("%d",&bilhete);     
  while(bilhete != 0)
   {   
       passageiro++;
   
     printf("\n Entre com o volume de bagagem(limite de 10kg):");
     scanf("%d",&volume); 
     printf("\n Entre com o peso do passageiro(limite de 70kg):");
     scanf("%d",&peso);
       
       total_volume += volume;  
       
       total_peso += peso;       
                
     printf("\n Entre com o numero do bilhete do passageiro:(entre com zero para fim do programa):");
     scanf("%d",&bilhete);   
   } //fim while       
                
                
                  
printf("\n\n");       
      
printf("\n Quantidade de peso da carga(container):%d",peso_carga);        
           
printf("\n\n");       
      
printf("\n Quantidade de peso:%d",total_peso);    
      
printf("\n\n");        
           
printf("\n Quantidade de bagagem:%d",total_volume);    
      
printf("\n\n");      
                
 printf("\n Quantidade de passageiro:%d",passageiro);    
      
printf("\n\n");  

  peso_decolar = (comb * 1,5) + peso_carga + total_peso;
    printf("\n peso de decolagem :%.2f",peso_decolar );
    if(peso_decolar <= 500)
     {
       printf("\n>>>>>LIBERADO PARA DECOLAR>>>>>\n");               
     }
    else
     {
      printf("\n>>>>>NAO ESTA LIBERADO PARA DECOLAR>>>>>\n");    
     }


printf("\n\n");     
      
getch();
return 0;
}  
