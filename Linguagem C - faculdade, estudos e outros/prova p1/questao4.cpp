#include<stdio.h>
#include<conio.h>



main()
{ int matr;
  int aluno=0;
  int n1,n2;
  float media;
  float maior = 0, menor = 100000;
  int matricula_maior,matricula_menor ;

 
  
  printf("\nDigite a matricula do aluno(comecando pelo 1):"); 
  scanf("%d", &matr);   
  
 
  while(matr <= 90)    // quero colocar 90 alunos certinho, ajuda ai ohhhhhh.....beijo Tati
   { 
     aluno++;                 // somatorio dos alunos ou das matriculas;
     
   printf("\nSao duas disciplinas cursadas.\n\n");
   printf("\nDigite a primeira nota:");
   scanf("%d", &n1);
   printf("\nDigite a segunda nota:");
   scanf("%d", &n2);  
   
   media = (n1 + n2) /2;

  
  printf("\nCr do o aluno\n\n"); 
  printf("%.2f", media);
  
   if(media > maior)
    {
      maior = media;
      matricula_maior = matr; 
    }
  
   if(media < menor)
    {
       menor = media;
       matricula_menor = matr;  // criei uma variavel para a mtricula
    } 
                
    printf("\nDigite o outro numero da matricula do aluno:"); 
    scanf("%d", &matr);         
 } // fim do while
 
  
   
       printf("\n Matricula :%d  e seu cr(maior):%.2f",matricula_maior, maior);
    
       printf("\n Matricula :%d  e seu cr(menor):%.2f",matricula_menor, menor);       
     
          
   
getch();
return 0;
}
     
   
   
   
   
   
