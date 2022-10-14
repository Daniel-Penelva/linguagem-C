#include<stdio.h>
#include<conio.h>

main()
{ int i;
  float n1,n2,n3,n4;
  float media, media_turma, porcento;
  int m=0;
      
  for(i=0; i<8; i++){
   printf("\n Digite a primeira nota:");
   scanf("%f",&n1);
   printf("\n Digite a segunda nota:");
   scanf("%f",&n2);   
   printf("\n Digite a terceira nota:");
   scanf("%f",&n3);   
   printf("\n Digite a quarta nota:");
   scanf("%f",&n4);   
      
    media = (n1 + n2 + n3 + n4)/4;   // nao esquecer dos parenteses.....
    
    printf("\n A media do aluno:%.2f", media);  
      
      
    media_turma = (n1 + n2 + n3 + n4)/8 ;  //  mudei os valores do exercicio
      
      
    if(media >= 5)
     {
       m++;   
    }  
      
      porcento = m * 100/8;
      
  }  // FIM FOR
      
      
  printf("\n A media da turma:%.2f", media_turma);    
  
  printf("\n O percentual da turma:%.2f",porcento);  


getch();
return 0;
}  
