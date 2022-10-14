#include<stdio.h>
#include<conio.h>

float peso_ideal(float,int);
main()
{float alt, peso;
 int sexo;
 
  printf("\n Entre com a altura:");
  scanf("%f",&alt);     
  printf("\n Entre com o sexo(1 para feminino ou 2 para masculino):");
  scanf("%d",&sexo);      
      
   if(sexo == 1)  
    {
      peso = peso_ideal(alt,sexo); 
      printf("\n Mulher -> O peso ideal: %.2f",peso);     
    } 
    if(sexo == 2)  
    {
      peso = peso_ideal(alt,sexo); 
      printf("\n Homem -> O peso ideal: %.2f",peso);     
    }    
      
       
      
      
printf("\n\n");     
getch();
}
float peso_ideal(float a, int s)
{
float peso;

  if(s == 1)
   {
     peso = 62.1 * a - 44.7;
     return peso;    
   }
  if(s == 2)
   {
    peso = 72.7 * a - 58;
    return peso;   
   }      
           
}
    /* a variavel peso da funçao main e a variavel peso da funçao peso_ideal nao equivalem o mesmo valor, pois cada variavel esta definida 
      em sua determinada função,portanto, o fato de ter o mesmo nome nao confude o programa na hora da leitura*/



