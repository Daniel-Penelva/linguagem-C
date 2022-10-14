#include<stdio.h>
#include<conio.h>

main()
{ int i;
  float matr[10];
  float n1[10], n2[10];
  float MP;
  float soma=0;
  float aprovado, pfinal,reprovado;
  
  
  for(i=0; i<10; i++){
    printf("\nDigite a matricula:"); 
    scanf("%f", &matr[i]);
    printf("Digite a primeira nota:");
    scanf("%f", &n1[i]);      
    printf("Digite a segunda nota:");
    scanf("%f", &n2[i]);        
  }
  
  for(i=0; i<10; i++){
   
   MP = ((n1[i] * 2) + (n2[i] * 3))/5;
   
   printf("\nmedia:%2.f", MP);
  
    if(MP >= 7)
     {  
         soma += MP;            //soma dos alunos aprovados
        
        aprovado = soma / 100;
    }
      
    if((MP < 7) && (MP >=5))
    {
        soma+= MP;             //soma dos alunos p.final
        
        pfinal = soma / 100;    
    }
    
    else
    {
      soma += MP;
        
      reprovado = soma/ 100; //soma dos alunos reprovados
    }
 }
 
  printf("\n\n\n");
  printf("\naprovado:%f", aprovado);
  printf("\npfinal:%f", pfinal);
  printf("\nreprovado:%f", reprovado);
   
getch();
}     
  
  
