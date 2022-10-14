#include<stdio.h>
#include<stdlib.h>

struct ponto2D
{
  int x,y;       
       
};

struct ponto3D
{
 int x,y,z;       
       
};

main()
{

float equacao;

  struct ponto2D p2;  // estrutura p2 
  struct ponto3D p3;  // estrutura p3
  
  p2.x = 100;   
  p3.x = 25;
  
  p2.y = 10;
  printf("Entre com o valor de y:\n");
  scanf("%d",&p3.y);
  
  p3.z = 30;
  
  equacao = (p2.x + p3.x)*(p2.y - p3.y) - p3.z;
  
  printf("valores de x = %d e %d \n valores de y = %d e %d \n valor de z = %d \n\n",p2.x, p3.x, p2.y, p3.y, p3.z);
  
  printf("\nEquaçao : %.2f",equacao);
  

printf("\n\n");
system("pause");;
}
// link : http://www.youtube.com/watch?v=MatsUCe5uZw
