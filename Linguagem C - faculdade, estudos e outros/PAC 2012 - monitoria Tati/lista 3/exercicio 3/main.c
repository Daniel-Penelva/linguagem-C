#include <stdio.h>
#include <stdlib.h>

#define N 10

int main(int argc, char *argv[])
{
    int VET[N];
    int i,j, aux;
    
    for (i=0; i<N; i++)
    {
        scanf("%d",&VET[i]);
    }
    
    for (i=0; i<N-1; i++)
    {
        for(j=i+1; j<N; j++)
        {
             if (VET[i] < VET[j])
             {
                aux = VET[i];
                VET[i] = VET[j];
                VET[j] = aux;  
             }
        }
    }
    
    for (i=0; i<N; i++)
    {
        printf("%d"" ",VET[i]);
    }
  
  system("PAUSE");	
  return 0;
}
