#include<stdio.h>
#include<conio.h>

main()
{  int i,j;
   char nome[6][12];
   int sexo[6];
   int idade[6];
   

  for(i=0;i<6;i++){
   printf("\nDigite 1 para masculino ou 2 para feminino:");
   scanf("%d", &sexo[i]);
   
   printf("Digite o nome:");
   scanf("%s", &nome[i]);
   
   printf("Digite a idade:");
   scanf("%d", &idade[i]);

 }

   printf("\nNomes femininos com idade superior a 55 anos");
  
  for(i=0;i<6;i++){
    if((idade[i] >= 55) && (sexo[i] == 2))
      {
        printf("\nNome: %s", nome[i]);           
      }
  }

  
getch();  

}
