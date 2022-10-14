#include <stdio.h>
#include <stdlib.h>

#define N 4

int main(int argc, char *argv[])
{
    float A[N];
    float soma =0;
    int i;
    
    for (i=0; i<N; i++)
    {
        scanf("%f",&A[i]);
    }
    
    for (i=2; i<N; i+2)
    {
        A[i] = A[i]/5;
        printf("%f", A[i]);
        soma += A[i];
    }
    
    for (i=1; 1<N; i+2)
    {
        A[i] = A[i]*10;
        printf("%f", A[i]);
    }
  
  system("PAUSE");	
  return 0;
}
