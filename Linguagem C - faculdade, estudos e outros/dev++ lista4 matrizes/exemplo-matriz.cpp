#include "stdio.h"
#include "stdlib.h"
#define L 4
#define C 3

int main(void)
{
        int M[L][C];
        int x,y,somaL,somaC;
        somaL = 0;somaC = 0;
        int soma;
        // entrando com os dados da matriz 7x6 via parametro
        printf("Digite ELEMENTO da:\n");
        for(x=0;x<L;x++)
        {
                for(y=0;y<C;y++)
                {
                        printf("linha %d, coluna %d da matriz: ",x,y);
                        scanf("%d",&M[x][y]);
                }
        }
        
        
        for(x=0;x<L;x++)
        {
                for(y=0;y<C;y++)
                {
                        printf("%d  ",M[x][y]);
                }
          printf("\n");
        }
        
        
printf("\n\n");        
        
        //acumulando a soma da linha 5 e da coluna 3
        for(x=0,y=0;x<L,y<C;x++,y++)
        {
                somaL = somaL + M[2][y];
                somaC = somaC + M[x][1];
        }
        soma = somaL + somaC;

        // mostrando o resultado da soma da linha + coluna específica L5+C3
        printf("\nRESULTADO :\n");
        printf("\n Soma dos Elementos da linha 2 e da coluna 1 = %d\n" ,soma);
        printf("\n\n");
        system("pause");
}

