#include<stdio.h>
#include<stdlib.h>

main()
{
  int x,y,z;
  
  printf("Digite o valor de x, y e z:\n");
  scanf("%d %d %d", &x, &y, &z);
   
   
   if((x<y+z) && (y=x+z) && (z=x+y)){
   
   if((x==y) && (x==z)){
   printf("Triangulo Equilatero");
  }
 }
 
   else
   if((x==y)|| (x==z) || (y==z)){
     printf("Triangulo isosceles");
  }
  
  else{
   printf("Triangulo escaleno");
  }
  
   printf("não existe triangulo");

 
 system("pause");
}  
   
  
  
  
  
  
  
