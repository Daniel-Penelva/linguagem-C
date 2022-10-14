#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>

main()
{ 

int numero; char origem[100],destino[100];

int i; char poltrona[15][20];

int op; int opcao; 
int numero1;
int contador_1=0;
int contador_2=0;
int flag[5]={0};

  
   printf("\nPreencha a reserva de cadastro para a viagem\n");
   printf("\nEntre com o numero do voo:"); 
   scanf("%d",&numero); 
   printf("\nEntre com a origem do voo:");
   scanf("%s",&origem); 
   printf("\nEntre com o destino:");  
   scanf("%s",&destino);

printf("\n\n");      
  printf("\nDados da poltrona do aviao"); 
  printf("\nEntre com (s = lugar disponivel) e (n = com lugar nao diponivel)");
   for(i=0; i<5; i++){
     printf("\n%do.poltrona:",i+1);
     scanf("%s",&poltrona[i]);
   }
  

printf("\n\n"); 
   printf("\nEntre com a opção:");
   printf("\n1-Consultar");
   printf("\n2-Efetuar Reserva");
   printf("\n3-Sair\n");
   scanf("%d",&op);

printf("\n");    
    do{
     
     if(op == 1)
      {  printf("\n\n");
         printf("Entre com a opção:");
         printf("\n1-Por numero de voo");
         printf("\n2-Por origem");
         printf("\n3-Por destino");
         printf("\n4-Para sair\n");
         scanf("%d",&opcao);
        
          switch(opcao) 
           {
              case 1: 
                       printf("\n\nNumero do voo.");  
                       printf("%d",numero);
                       break;  
              
              case 2:
                       printf("\n\nOrigem do voo.");  
                       printf("%s",origem);
                       break;  
                              
              case 3:       
                       printf("\n\nDestino do voo.");  
                       printf("%s",destino);  
                       break;
                       
               case 4: 
                        exit(0);
                        
          }//fim d switch  
          
      } // fim do if op=1
     
     if(op == 2) //Efetuar reserva
      {
           
        printf("\nEntre com o numero do voo:");
        scanf("%d",&numero1);
        
         if(numero1 == numero)
          {   
              
              for(i=0; i<5; i++){ 
               if((strcmp(poltrona[i],"s"))== 0)
                { 
                  contador_1++;
                  printf("\n\nPoltronas disponiveis:%d ",i);
                }
               else if((strcmp(poltrona[i],"n"))== 0) 
                {
                 contador_2++;
                 printf("\n\nPoltronas indisponiveis:%d ",i);
                   if(contador_2 == 5)  //contador_2 acusa poltrona indisponivel e igual a cinco por causa do total do indice do for 
                    {
                      printf("\n\nVOO LOTADO!");             
                    }
                }
              }
              
          }
         else
          {
            printf("\nNumero do voo inexistente!");  
          }  
      
        
   /*INDICA AS POLTRONAS DISPONIVEIS E INDISPONIVEIS - tendo ja a reserva confirmada - se tiver poltrona disponivel*/     
       if(contador_2 != 5)
        {
         printf("\n");
         printf("\nRESERVA CONFIRMADA\n"); 
         printf("\npoltronas disponiveis:%d ",contador_1);        
         printf("\npoltronas indisponiveis:%d ",contador_2); 
        }     
        break;//para o programa apertando ENTER
     
     }// fim do if op=2
                
                 
       if(op == 3)
        {
          exit(1);     
        }          
                 
     }while(op != 0);   
     

getch();
} 
