#include<stdio.h>
#include<stdlib.h>


main()
{ int i;
  int codigo,carro,acidente;
  int maior = 0, menor = 100000;
  int soma=0;
  float media;
  int soma_acidente=0, acid=0;
  float media_acidente;
  int aci_maior,aci_menor;
  
  for(i=0; i<5; i++){
    printf("\n Digite o codigo da cidade:");
    scanf("%d", &codigo);
    printf("\n O numero de carros de passeio(em 2007):");
    scanf("%d", &carro);    
    printf("\n O numero de acidentes de transito com vitimas(2007):");
    scanf("%d", &acidente); 
  }
  
  for(i=0; i<5; i++){
    
     if(carro <= 2000)
      {
        soma_acidente += acidente;  
        acid++;      
      }
  
   soma +=carro;
  } 
   
   
   for(i=0; i<5; i++){
    if(acidente > maior)
     {
       maior = acidente;
       aci_maior = codigo;           
     } 
     
     if(acidente < menor)
     {
       menor = acidente;  
       aci_menor = codigo;          
     }  
   }    
      
      
      
  media = soma / 5;
  media_acidente = soma_acidente / acid;     
      
      
      
      
  printf("\nO codigo da cidade: %d -> maior numero de acidente:%d ",aci_maior,maior);    
  printf("\nO codigo da cidade: %d -> menor numero de acidente:%d ",aci_menor,menor);  
  printf("\nMedia de carros das 5 cidades: %.2f ", media);  
  printf("\n Media de acidente:%.2f ", media_acidente);
      
printf("\n\n");      
system("PAUSE");	
return 0;
}      
      
