#include<stdio.h>
#include<stdlib.h>

//Digite determinadas notas dos alunos, onde a linha é o aluno e as notas a coluna.
main()
{
    
  float notas[3][4];  
  int i,j;
  
  
  
  for(i=0;i<3;i++){         //estrutura da linha(vertical) 
    for(j=0; j<4; j++){     //estrutura da coluna(horizontal)
      printf("\nDigite a %d nota do aluno %d :", j+1, i+1);
      scanf("%f", &notas[i][j]);
    }
  }
   
   printf("\n A matriz\n");   
  
  for(i=0;i<3;i++){       
    for(j=0; j<4; j++){     
      printf("%2.f  ", notas[i][j]);  //bota as aspas um pouco longe do ponto flutuante 
     }
     printf("\n");                    //este espaço vai deixar em formato de matriz
  }
          
       
system ("PAUSE");
return 0;
}
