#include <stdio.h>
#include <stdlib.h>

#define N 10

int main(int argc, char *argv[])
{
    int VET1[N];
    int VET2[N];
    int SOMA[N];
    int i;
    
    for (i=0; i<N; i++)
    {
        scanf ("%d%d", &VET1[i], &VET2[i]);
    }

    for (i=0; i<N; i++)
    {
        SOMA[i] = (VET1[i] + VET2[i]);
        printf("%d\n", SOMA[i]);
    } 
  
  system("PAUSE");	
  return 0;
}
