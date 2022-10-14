#include<stdio.h>
#include<conio.h>

main()
{ int i;
  int sexo; 
  float altura;
  float menor = 1000000, maior = 0;
  int homem=0;

  for(i=0; i<10; i++){
    printf("\n Digite o sexo(1 para masculino e 2 para feminino):");
    scanf("%d",&sexo);  
    printf("\n Entre com a altura:");
    scanf("%f",&altura);    
      
      if(altura < menor)
        {
          menor = altura;         // ex alt = 1.69 metros
        }
      
      if(altura > maior)
        {
          maior = altura;      
        } 
        
      if(sexo == 1)
        {
          homem ++;     
        } 
   } // fim do for
   
   
printf("\n\n"); 
 printf("\n Menor altura:%f", menor);        
      
printf("\n\n"); 
 printf("\n Maior altura:%f", maior);         
      
printf("\n\n"); 
 printf("\n Numero de homens:%d", homem);         
      
        
getch();
return 0;
}        
