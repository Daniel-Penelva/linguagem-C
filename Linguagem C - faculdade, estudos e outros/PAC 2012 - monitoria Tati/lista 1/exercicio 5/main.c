#include <stdio.h>
#include <stdlib.h>

#define N 4

int main(int argc, char *argv[])
{
    char nome[N];
    char sexo[N];
    int idade[N];
    int i;
    
    for (i=0; i<N; i++)
    {
        scanf("%s",&nome[i]);
        scanf("%c",&sexo[i]);
        scanf("%d",&idade[i]);
    }
    
    for(i=0; i<N; i++)
    {
        if (strcmp("F",sexo[i])  && idade[i] > 55)  
        {
                    printf("%s\n", nome[i]);
        }
    }
  
  system("PAUSE");	
  return 0;
}
