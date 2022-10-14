#include<stdio.h>
#include<conio.h>

main()
{ int candidato=0;
  int sexo,numero,idade,serv;
  int feminino=0, masculino=0;
  int soma=0, servi=0,homem_velho=0;
  float media, porcento;
  int mulher=0,numero_inscr;
  int menor = 1000000;
      
  
  printf("\n Digite o numero de inscriçao do candidato(digite zero para termino do programa):");
  scanf("%d", &numero);   
  while(numero != 0)
   {  candidato++;
     
     printf("\n Digite 1 para masculino e 2 para feminino:");
     scanf("%d", &sexo); 
     printf("\n Digite a idade do candidato:");
     scanf("%d", &idade); 
     printf("Digite 1 para (sim) experiente no serviço e 2 para (nao) experiente no serviço:"); 
     scanf("%d", &serv);      
             
       if(sexo == 2)
        {
          feminino++;       
        }      
       if(sexo == 1)
        {
          masculino++;       
        }            
        
       if(serv == 1)
        {
          servi++;
          soma += idade;      
        }  
        
        if(idade >= 45) 
        {
          homem_velho++;
          
          porcento = homem_velho * 100 / masculino;        
        }  
             
        if(((idade <= 35) && (serv == 1) && (sexo == 2)))
        {
          mulher++;
          
          numero_inscr = numero;
          printf("\nNumero de incriçao da mulher com menos de 35 anos:%d inscriçao",numero_inscr);        
        }       
             
        if(((idade < menor) && (serv == 1) && (sexo == 2)))
         {
           menor = idade;         
         }     
              
    printf("\n Digite o numero de inscriçao do candidato(digite zero para termino do programa):");
    scanf("%d", &numero);           
             
   }//fim while
      
      
      
   media = soma/servi; 
    
         
printf("\n\n");     
  printf("\n total de candidato feminino:%d ", feminino);    
      
printf("\n\n");     
  printf("\n total de candidato masculino:%d ", masculino);   
  
printf("\n\n");     
  printf("\n Media de idade dos candidatos homens que tem experiencia de serviço:%.2f ", media);     
            
printf("\n\n");     
  printf("\n Porcento dos candidatos homens que tem mais de 45 anos:%.2f ", porcento);   

printf("\n\n");     
  printf("\n total de candidato feminino com menos de 35 e experiente no serviço:%d ", mulher); 
  
printf("\n\n");     
  printf("\n A menor idade do sexo feminino e experiente no serviço:%d ", menor); 


getch();
return 0;
}  
      
