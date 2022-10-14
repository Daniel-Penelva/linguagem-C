#include<stdio.h>
#include<conio.h>

main()
{  int i,j;
   int notas[10][3];
   int menor = 1000000;
   int menor_nota;
   float q1,q2,q3;
   int flag[10][3] = {0};
   
      
   
   for(i=0; i<10; i++){   
      for(j=0; j<3; j++){
        printf("Digite o primeira %do. numero do aluno e a %do. nota :", i+1, j+1);
        scanf("%d", &notas[i][j]);
        }
     printf("\n");
   }   
      

printf("\n\n");   
printf("\n a matriz do aluno e suas notas\n");      
      
   for(i=0; i<10; i++){   
      for(j=0; j<3; j++){
        printf("%d  ", notas[i][j]);   
     }
       printf("\n");
   }
      
      
printf("\n\n");   
   
   for(i=0; i<10; i++){   
      for(j=0; j<3; j++){
        if(notas[i][j] < menor)
          {
            menor = notas[i][j];
          }
        }
      }  
      
    printf("\n menor valor da matriz:%d ", menor);  

getch();
return 0;
}     
        
