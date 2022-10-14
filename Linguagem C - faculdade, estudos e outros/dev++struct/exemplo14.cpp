#include<stdio.h>
#include<stdlib.h>

struct ponto 
{
  int x,y;              
};

struct novo_ponto
{
  int x,y;       
};

main()
{
      
    struct ponto p1,p2 = {1,10};
    struct novo_ponto p3 = {100,15}; 
    
    p1 = p2;
    
    printf("p1 = %d e %d ",p1.x,p1.y);
    
    // ERRO Tipos diferentes de estrutura, ou seja, variaveis de nomes diferentes das determinadas estruturas.
    //exemplo:   p1 = p3;        
    
    
printf("\n\n");
system("pause");;
}
// link: http://www.youtube.com/watch?v=CAnQ6i8OwJA&feature=relmfu
