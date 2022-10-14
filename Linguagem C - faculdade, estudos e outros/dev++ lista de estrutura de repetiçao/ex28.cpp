#include<stdio.h>
#include<conio.h>

main()
{ int i,idade,sexo;
  int soma=0, id=0, masc=0;
  float media;
  
  printf("\n Entre com a sua idade(ENTRE COM ZERO PARA TERMINO DO PROGRAMA):");
  scanf("%d", &idade);  
 while(idade != 0)  
  {
    printf("\n Entre com o seu sexo(0 para masculino e 1 para feminino):");
    scanf("%d", &sexo);
    
    if(((idade >= 30) && (idade <= 45) && (sexo == 1)))
      {
        id++;
        soma += idade; 
        
        media = soma/id;       
     }
     
     if(sexo == 0)
      {
        masc++;       
      }
      
     printf("\n Entre com a sua idade(ENTRE COM ZERO PARA TERMINO DO PROGRAMA):");
     scanf("%d", &idade); 
  } // FIM WHILE 
    
 printf("\n>>>>>>>>>>>>>>>\n");   
 
 printf("\n A media de idade do sexo feminino c/idade entre 30 e 45 anos :%.2f", media);  
 printf("\n\n");
 
 printf("Total de sexo masculino:%d ", masc);
   
    
getch();
return 0;
}  
