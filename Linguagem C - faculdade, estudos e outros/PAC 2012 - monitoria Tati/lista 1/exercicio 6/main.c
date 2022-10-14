#include <stdio.h>
#include <stdlib.h>

#define N 4

int main(int argc, char *argv[])
{
    int num[N];
    int i, j, aux;
    
    for (i=0; i<N; i++)
    {
        scanf("%d",&num[i]);
    }
    
    for (i=0; i<N-1; i++)
    {
        for (j=i+1; j<N; j++)
        {
            if (num[j] < num[i])
            {
                       aux = num[i];
                       num[i] = num [j];
                       num[j] = aux;
            }
        }
        
    }
    
    for (i=2; i<N; i+2)
    {
        printf("%d", num[i]);
    }
  
  system("PAUSE");	
  return 0;
}
