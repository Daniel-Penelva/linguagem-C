#include<stdio.h>
#include<conio.h>

main()
{ float bmaior,bmenor,alt,media;
  
  printf("Digite o valor da base maior:\n");
  scanf("%f", &bmaior);
  printf("Digite o valor da base menor:\n");
  scanf("%f", &bmenor);
  printf("Digite a altura:\n");
  scanf("%f", &alt);
  
  media = ((bmaior  + bmenor) * alt)/2;
  printf("Media:%f\n", media);
  
getch();
return 0;
}
  
 
  
