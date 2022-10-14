#include<stdio.h>
#include<conio.h>

main()
{int i,j,aux;
 int codigo[5],quant[5],op;
 float p[5],outro;
 int cod,q,resultado;


  
  for(i=0; i<5; i++){
   printf("\n Entre com o %do. codigo:",i+1);
   scanf("%d",&codigo[i]);    
   printf("\n Entre com a %do. quantidade:",i+1);
   scanf("%d",&quant[i]);   
   printf("\n Entre com a %do. preço:",i+1);
   scanf("%f",&p[i]);    
 }
 
 printf("\nEscolha a opçao:");
 printf("\n1.Vender");   
 printf("\n2.Comprar");     
 printf("\n3.Listar por preço");     
 printf("\n4.Ordenar");     
 printf("\n5.Listar Geral");     
 printf("\n6.Sair\nR:");  
 scanf("%d",&op);   


switch(op)
{  
case 1: printf("\n Entre com um codigo:");
         scanf("%d",&cod);      
         
        for(i=0; i<5; i++){
          if(codigo[i] == cod)
           {
               printf("\n Entre com uma quantidade:");
               scanf("%d",&q);
               
                quant[i] = q - quant[i];                  // vai diminuir apenas o vetor que corresponde ao codigo, é isso.
                printf("\nR: %d ",quant[i]);         
          }
          else
          {
          printf("\n Nao existe codigo");    // nao sei porque esta saindo essa condiçao quando eu coloco o mesmo codigo....o q fiz de errado  
          }                                  // e tb ao colocar os codigos diferentes, sera que tem como fazer repetir a informação apenas uma vez; A estr. de repetiçao q faz imprimi a informação cinco vezes.  
        }
          break;     
       
         
case 2: printf("\n Entre com um codigo:");  
        scanf("%d",&cod);
        
         for(i=0; i<5; i++){ 
           if(cod == codigo[i])
            {
               printf("\n Entre com uma quantidade:");
               scanf("%d",&q);  
                 for(i=0; i<5; i++){             // esta estrurtura dentro do if é para executar o calculo de todos os vetores
                  quant[i] = q + quant[i]; 
                  
                  printf("\nAtualizando o valor do vetor quantidade: %d ", quant[i]);      
                 }// fim for
               }//fim codição 
              
              if(cod != codigo[i])
               {
                 printf("\nPerfume nao esta cadastrado!\n");   // o mesmo acontece, nao sei porque esta saindo essa condiçao quando eu coloco o mesmo codigo....o q fiz de errado    
               }
             }// fim for
     
             break;
             
case 3:  for(i=0; i<5; i++){ 
          if(p[i] > 100)
           {
             printf("\nCodigo do perfume:%d",codigo[i]);
           }
         }
         break;
         
case 4: for(i=0; i<4; i++){ 
         for(j=i+1; j<5; j++){
           if(p[i] < p[j])
            {
              outro = p[i];
              p[i] = p[j];
              p[j] = outro;        
            }
           if(codigo[i] < codigo[j])
            {
              aux = codigo[i];
              codigo[i] = codigo[j];
              codigo[j] = aux;           
            }
           if(quant[i] < quant[j])
            {
              aux = quant[i];
              quant[i] = quant[j];
              quant[j] = aux;           
            } 
           }
         }
         
         printf("\n1.Ordem do preço.\n2.Ordem do codigo.\n3.Ordem da quantidade.\n");
          for(i=0; i<5; i++){
            printf("%.0f ",p[i]);
          } 
          printf("\n\n");
          for(i=0; i<5; i++){ 
            printf("%d ",codigo[i]);
          }
          printf("\n\n");
          for(i=0; i<5; i++){ 
            printf("%d ",quant[i]);
          } 
         
         break;
         
case 5: for(i=0; i<5; i++){
         printf("\n%do.codigo do perfume:%d",i+1,codigo[i]);
       }
     printf("\n\n");
       
       for(i=0; i<5; i++){
        printf("\n%do.dinheiro do perfume:%.0f",i+1,p[i]);
       }
     printf("\n\n"); 
     
      for(i=0; i<5; i++){ 
        printf("\n%do.quantidade do perfume:%d",i+1,quant[i]);
      }
      
       break;
       
case 6: 
         printf("\n fim do programa");
        
        
default : printf("\n Opçao invalida");
          break;    
     
 
     
}          
getch();     
}
