#include <stdio.h>
#include <stdlib.h>
#define N 5

int main()
{
int i,j;

   printf(" =====[ TABUADA DE 0 a %d ]=====",N);
     for (j = 0; j <= N; j++)
     {
       printf("\n\n [TABUADA DO %2d] \n\n",j);
        for (i = 0; i <= 10; i++)
        {
          printf(" %2d x %2d = %4d\n",j,i,i*j);
        }
     }
printf("\n\n\n");

system("PAUSE");
return 0;
}
