#include<stdio.h>
#include<conio.h>

int idade(int,int,int);
main()
{int ano,mes,dia,valor;
      
   
   printf("\n Entre com o ano de nascimento:");
   scanf("%d",&ano);   
   printf("\nEntre com o mes do nascimento:"); 
   scanf("%d",&mes);  
   printf("\nEntre com o dia do nascimento:"); 
   scanf("%d",&dia);   
      
    
   if(idade(ano,mes,dia)==0)
    {
       printf("\nValor inexistente");                        
    }
   else
    {
      valor = idade(ano,mes,dia);
      
      printf("\n Total de dias:%d ",valor);                                     
    }
      
      
      
      
printf("\n\n");     
getch();
}
int idade(int x, int z, int y)  // ano,mes,dia
{int mes,ano,dia;
  
  if((z <= 12) && (y <= 30))
   {
      mes = (z * 30);          // calculo do mes para saber os dias;
      
      ano = (((2012 - x) * 12) * 30);      // calculo do ano para saber os dias;
      
      dia = (ano + mes + y);   // calculo total;
      
      return dia;   
   }      
   else 
   {
     return 0;     
   }   
      
}






