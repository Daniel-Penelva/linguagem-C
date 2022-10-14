#include<stdio.h>
#include<math.h>  
#include<conio.h>

int area_triangulo(int base, int altura);


main()
{
  int area;
  
  area = area_triangulo(10,50);       // chamando a função e seus respectivos valores.
                                     //ou printf("A area:%d",area_triangulo(10,50));
  printf("\n A area do triangulo:%d ", area);
            
      
getch();

}

int area_triangulo(int base, int altura)
 {
    int area;
    
    area = base * altura;
    return area;           // indica que esta encerrando a função, manda retornar o valor da resposta
 }
