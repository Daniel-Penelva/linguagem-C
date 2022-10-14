#include <stdio.h>
#include <stdlib.h>

main()
{
int i,j,k,l,c;
float m[10][10];
float m1[10][10];
float maux[10][10];

    printf("digite a quntidade de linhas das matrizes \n");
    scanf("%i",&l);
    printf("\n\n");
    printf("Digite a quantidade de colunas das matrizes\n");
    scanf("%i",&c);
    printf("\n\n");
   
   
    printf("Digite os elementos da matriz 1");
    printf("\n\n");

     for(i=0;i<l;i++)
      {
       for(j=0;j<c;j++)
       {
        printf("elemento %i%i -->",i,j);
        scanf("%f",&m[i][j]);
        }
       }

printf("\n\n");

printf("Digite os elementos da matriz 2");
printf("\n\n");
   for(i=0;i<l;i++)
    {
     for(j=0;j<c;j++)
      {
       printf("elemento %i%i -->",i,j);
       scanf("%f",&m1[i][j]);
       maux[i][j]=0;                       // ou declarando float maux[10][10]={0};
      }
    }

   for(i=0;i<l;i++)
   {
    for(j=0;j<c;j++)
    {
     for(k=0;k<l;k++)
      {
       maux[i][j]=maux[i][j]+(m[i][k]*m1[k][j]);
      }
    }
   }

  for(i=0;i<l;i++)
  {
   for(j=0;j<c;j++)
   { 
    printf("%0.f  ",m[i][j]);
   }
   printf("\n");
  }

printf("\n\n");

   for(i=0;i<l;i++)
   {
    for(j=0;j<c;j++)
    {  
     printf("%0.f  ",m1[i][j]);
    }
   printf("\n");
   }


printf("\n\n");
printf("As matrizes multiplicadas geram a matriz abaixo");
printf("\n\n");
   for(i=0;i<l;i++)
   {
    printf("\n");
     for(j=0;j<c;j++)
     {
      printf("% 6.2f",maux[i][j]);
     }
    }

printf("\n\n");
system("pause");

} 
