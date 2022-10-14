#include <stdio.h>
#include <stdlib.h>

#define N 3

int main(int argc, char *argv[])
{
    float B[N];
    float soma = 0;
    float media = 0;
    int i;
    
    for (i=0; i<N; i++)
    {
        scanf("%f",&B[i]);
        soma += B[i];
    }
    
    media = soma/N;
    
    for (i=0; i<N; i++)
    {
        if (B[i] < media)
        {
                 printf("%.2f\n", B[i]);
        }
    }
  
  system("PAUSE");	
  return 0;
}
