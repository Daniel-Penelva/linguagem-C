#include<stdio.h> 
#include<conio.h>
#define t 3   //quantidade de alunos

int maior(int[]);
int soma(int, int);
main()
{int i, nota[3], aluno[t][2];
 int pf, matr;
 char conceito[t];   
 
      for(i=0; i < t; i++){  
       printf("\n Entre com a matricula do aluno:"); 
       scanf("%d",&aluno[i][1]);
     }
     
       printf("\nObs:\n As 3 primeiras provas vale ate 20 pontos.\n");
       printf("\nA quarta prova vale ate 40 pontos.\n");
      
      for(i=0; i < 3; i++){  
       printf("\n Entre com o valor da %do. nota:", i+1);
       scanf("%d", &nota[i]);
      }
    
       printf("\n Entre com a nota da pf:"); 
       scanf("%d",&pf);  
    

       aluno[i][2]=soma(maior(nota),pf);
         if(aluno[i][2] >= 90)
          {
           conceito[i] = 'A';
          }
         else 
         if((aluno[i][2] >= 80) && (aluno[i][2] < 90)) 
          {
            conceito[i] = 'B';            
          } 
         else 
         if((aluno[i][2] >= 70) && (aluno[i][2] < 80)) 
          {
            conceito[i] = 'C';            
          } 
         else 
         if((aluno[i][2] >= 60) && (aluno[i][2] < 70))
          {
            conceito[i] = 'D';            
          }  
          else 
         if((aluno[i][2] >= 40) && (aluno[i][2] < 60)) 
          {
            conceito[i] = 'E';            
          } 
         else 
          {
            conceito[i] = 'F';  
          }
          
   printf("\n\n Conceito final\n\n");
   printf("\n Matricula - nota final - conceito");
   
   for(i=0; i<t; i++)
    {
      printf("%d - %4.0d - %c",aluno[i][1], aluno[i][2],conceito[i]);        
    }   
   
   
getch();

}

int maior(int nota[4])  // eu nao sei como colocar aqui
{
  int i,j,aux;
  
  for(i=0; i<3; i++){
   for(j=i+1; j<4; j++){
    if(nota[i] < nota[j])
     {
       aux = nota[i];
       nota[i] = nota[j];
       nota[j] = aux;          
     }
    }
  }
     return (nota[0] + nota[1] + nota[2]);
}                           

int soma(int a, int b) 
{
  return (a+b); 
}    
    
  
    
    
    
    
    
    
    

