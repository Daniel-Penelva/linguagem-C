#include<stdio.h>
#include<conio.h>

main()
{ int i, turma;
  float media;
  int aprovado=0, reprovado=0;
  float soma_media = 0;
  float total_media;
  float soma_reprovado =0;
  
    
  printf("\nDigite o numero da turma(ENTRE COM ZERO PARA FIM DO PROGRAMA)");
  scanf("%d", &turma);
   while(turma != 0)
    {
        for(i=0; i<5; i++){
         printf("\n Entre com a media do %do. aluno:", i+1);
         scanf("%f", &media);       
               
         if(media >= 5)
           {
             aprovado++;        
           }
           
          else
           {
            reprovado++;
            
            soma_reprovado += reprovado;   // esta errado, depois vou resolver....
           }    
               
          soma_media += media;
          
          total_media +=soma_media/5;      
               
         }  // FIM FOR   
               
               
              
       printf("\nQuantidade de alunos aprovados:%d",aprovado);       
               
       printf("\n\n"); 
       
       printf("\nQuantidade de alunos reprovados:%d",reprovado);       
               
       printf("\n\n"); 
        
       printf("\ntota de media da turma:%.2f",total_media);       
               
       printf("\n\n"); 
               
      printf("\nDigite o numero da turma(ENTRE COM ZERO PARA FIM DO PROGRAMA)");
      scanf("%d", &turma);         
               
    }  //FIM WHILE
        
      
    printf("\n Total de reprovado de todas as turmas e a nota geral dos reprovados:%d ->nota: %.2f",reprovado,soma_reprovado);  // esta errado, depois vou resolver....

getch();
return 0;
}  
