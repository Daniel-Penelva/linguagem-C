#include <stdio.h>
#include <stdlib.h>

#define N 5

int main(int argc, char *argv[])
{
    int VET[N];
    int i;
    
    for(i=0; i<N; i++)
    {
         scanf("%d",&VET[i]);         
    }
    
    for(i=0; i<N; i++)
    {
         if (VET[i] > 50);
         {
              printf("%d", VET[i]);
              printf("%d",i);
         }        
    }
  
  system("PAUSE");	
  return 0;
}
