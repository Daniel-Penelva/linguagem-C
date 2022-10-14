#include<stdio.h>
#include<conio.h>

main()
{ int codigo;
  int vagas;
  int masc,fem;
  int numero_vagas1,masculino,feminino,total_vaga1,candidato_vaga1; 
  float porcento1; 
  int numero_vagas2,total_vaga2,candidato_vaga2; 
  float porcento2;  
  int numero_vagas3,total_vaga3,candidato_vaga3; 
  float porcento3; 
  int numero_vagas4,total_vaga4,candidato_vaga4; 
  float porcento4;
  int maior_vaga, maior = 0;
  
  
    
   printf("\n 1=portugues; 2=matematica; 3=biologis; 4=fisica\n");   
   printf("\n Entre com o numero do codigo da disciplina(de 1 ao 4 depois entre com zero para termino do programa):");
   scanf("%d", &codigo);   
    while(codigo != 0)
     {  
       printf("\n Entre com o numero de vagas:");
       scanf("%d", &vagas); 
       printf("\n Entre com o numero de candidatos masculino:");
       scanf("%d", &masc); 
       printf("\n Entre com o numero de candidatos feminino:");
       scanf("%d", &fem);  
       
       if(codigo == 1)
        { 
          numero_vagas1 = vagas;
          masculino  = masc;
          feminino = fem;
         
          candidato_vaga1 = masculino + feminino;
         
          total_vaga1 = numero_vagas1 - candidato_vaga1;
          
          printf("total de vaga((-)nao sobra vaga -> (+)sobra vaga):%d ",total_vaga1);
          
          porcento1 = feminino * 100/candidato_vaga1;         
        
          printf("\n\n");            
          printf("Numero do codigo:%d e o porcento de vaga feminino:%.2f",codigo,porcento1);
        
        maior_vaga = vagas;
        }        
        
         if(codigo == 2)
        { 
          numero_vagas2 = vagas;
          masculino  = masc;
          feminino = fem;
         
          candidato_vaga2 = masculino + feminino;
         
          total_vaga2 = numero_vagas2 - candidato_vaga2;
          
          printf("Candidatos total por vaga:%d ",total_vaga2);
          
          porcento2 = feminino * 100/candidato_vaga2;         
        
          printf("\n\n");            
          printf("Numero do codigo:%d e o porcento de vaga feminino:%.2f",codigo,porcento2);
        
        maior_vaga = vagas;
        }        
                        
         if(codigo == 3)
        { 
          numero_vagas3 = vagas;
          masculino  = masc;
          feminino = fem;
         
          candidato_vaga3 = masculino + feminino;
         
          total_vaga3 = numero_vagas3 - candidato_vaga3;
          
          printf("Candidatos total por vaga:%d ",total_vaga3);
          
          porcento3 = feminino * 100/candidato_vaga3;         
        
          printf("\n\n");            
          printf("Numero do codigo:%d e o porcento de vaga feminino:%.2f",codigo,porcento3);
        
        maior_vaga = vagas;
        }                 
                   
         if(codigo == 4)
        { 
          numero_vagas4 = vagas;
          masculino  = masc;
          feminino = fem;
         
          candidato_vaga4 = masculino + feminino;
         
          total_vaga4 = numero_vagas4 - candidato_vaga4;
          
          printf("Candidatos total por vaga:%d ",total_vaga4);
          
          porcento4 = feminino * 100/candidato_vaga4;         
        
          printf("\n\n");            
          printf("Numero do codigo:%d e o porcento de vaga feminino:%.2f",codigo,porcento4);
       
       maior_vaga = vagas;
        }      
         
         
         if(maior_vaga > maior)
          {
            maior = maior_vaga;             
          }        
                 
     printf("\n Entre com o numero do codigo da disciplina(de 1 ao 4 depois entre com zero para termino do programa):");
     scanf("%d", &codigo);              
     }  // fim while
      
      
      
      
      
      
      
 printf("\n\n");            
 printf("A maior vaga:%d ", maior);     
  
 
getch();
return 0;
}  
      
