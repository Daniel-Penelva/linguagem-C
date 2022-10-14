#include<stdio.h>
#include<conio.h>

main()
{ int i;
  int n1,n2,n3;
  int matr;
  int alunos=0;
  float media;
  int  apr=0,repr=0; 
 
  

 printf("\n Digite a matricula do aluno:(entre com o valor zero para fim):");
 scanf("%d", &matr);
 while(matr != 0)
 {
   alunos ++;
 
   printf("\n Entre com a primeira nota:");
   scanf("%d", &n1);
   printf("\n Entre com a segunda nota:");
   scanf("%d", &n2);
   printf("\n Entre com a terceira nota:");
   scanf("%d", &n3);
     
    media =((2*n1) + (3*n2) + (4*n3))/9;
      if(media >= 5)
       { 
         apr++;
          printf("Matricula Aprovado : %d -> media:%.2f",matr,media);    
       }
      if(media < 5)
       { 
         repr++;
         printf("Matricula Reprovado : %d -> media:%.2f",matr,media);    
       }
    
   printf("\n Digite a outra matricula do aluno:");
   scanf("%d", &matr);    
 } // fim while



 printf("\nAlunos Aprovados\n");
 printf("%d ", apr);

printf("\n\n");

 printf("\nAlunos Reprovados\n");
 printf("%d ", repr);
 
printf("\n\n");

 printf("\nTotal de Alunos \n");
 printf("%d ", alunos); 


printf("\n\n");
   
 

getch();
return 0;
}
