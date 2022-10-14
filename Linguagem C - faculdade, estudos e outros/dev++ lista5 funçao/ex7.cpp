#include<stdio.h> 
#include<conio.h>

int somatorio(int[]);
main()
{int i, valor[2];
 
 for(i=0; i<2; i++){ 
    printf("\n Entre com o valor:");    
    scanf("%d",&valor[i]);
  }
  
printf("\n\n");
  printf("\n A soma:%d",somatorio(valor));  
  
getch();

}
int somatorio(int x[2])
{int i,soma=0;

 for(i=0;i <2; i++)
 {  
   soma +=x[i];
 }
 
 return soma;               // ou return n[0] + n[1];
}
