#include <stdio.h>
#include <stdlib.h>

#define N 5

int main(int argc, char *argv[])
{
    int X[N];
    int Y[N];
    int I[2*N];
    int S[N];
    int D[N];
    int i,j;
    
    for (i=0; i<N; i++)
    {
        scanf("%d",&X[i]);
    }
    
    for (i=0;i<N;i++)
    {
        scanf("%d",&Y[i]);
    }
    
    for (i=0;i<N;i++)
    {
        S[i] = X[i] + Y[i];
    }
    
    for (i=0;i<2*N;i++)
    {
        for(j=0;j<N;j++)
        {
             I[i] = X[j];
             i++;
             I[i] = Y[j];
             i++;
        }
    }
    
    for (i=0;i<N;i++)
    {
        for (j=i+1;j<N;j++)
        {
            if (X[i] == Y[j])
            {
                 
            }
            else
            {
                D[i] = X[i];
            }
        }
    }
    printf("\n Soma: ");
    for(i=0;i<N;i++)
    {
         printf("%d"" ",S[i]);
    }
    
    printf("\n Diferenca: ");
    for(i=0;i<N;i++)
    {
         printf("%d"" ",D[i]);
    }
    
    printf("\n Intercala: ");
    for(i=0;i<2*N;i++)
    {
         printf("%d"" ",I[i]);
    }
    
  system("PAUSE");	
  return 0;
}
