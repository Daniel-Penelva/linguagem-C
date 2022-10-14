#include<stdio.h>
#include<stdlib.h>
main()
{ 
      int n,s,i;
      printf("Digite um numero inteiro:");
      scanf("%d", &n);
      s=0;
      for(i=1;i<=n;i++)
      s=s+i;
      printf("%d/n", s);
      getch();
}       
