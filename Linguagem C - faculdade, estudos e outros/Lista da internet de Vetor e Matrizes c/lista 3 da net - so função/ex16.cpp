#include<stdio.h>
#include<conio.h>

/*. A prefeitura de uma cidade fez uma pesquisa entre os seus habitantes, coletando dados sobre o salário e número de filhos. 
Faça um procedimento que leia esses dados para um número não determinado de pessoas e retorne a média de salário da população, 
a média do número de filhos, o maior salário e o percentual de pessoas com salário até R$350,00.*/

float media_sal(float,int);
float media_fi(float,int);
int maior_salario(float,int);
float percento_salario(float,int);
main()
{ float sal;
  int filho;
  int salario = 0;
  float media_salario,media_filho;
  int maior;
  float percento;
      
  printf("\nEntre com o salario:");  
  scanf("%f",&sal);  
  while(sal != 0)
   {  salario++; 
       
       printf("\nEntre com a quantidade de filho:");  
       scanf("%d",&filho); 
            
    printf("\nEntre com o outro salario:");  
    scanf("%f",&sal);          
   }
      

printf("\n\n<<<<<<<<<<<<<<<<<<<<< >>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n\n");
 
 printf("\nQuantidade de salario:%d",salario);
 printf("\n\n");

 media_salario =(media_sal(sal,filho)/salario);
 printf("\n Media do salario:%.2f",media_salario);
 printf("\n\n");

 media_filho = (media_fi(sal,filho)/salario);
 printf("\n Media do filho:%.2f",media_filho);
 printf("\n\n");

 maior = maior_salario(sal,filho);
 printf("\n Maior Salario:%d",maior);
 printf("\n\n");

 percento = percento_salario(sal,filho);
 printf("\n Percento do Salario:%.2f",percento);
 printf("\n\n");

 if(percento_salario(sal,filho)==1)
   {
     printf("\n Nao existe salario abaixo ou igual a de R$ 350!");                                
   }


printf("\n\n");     
getch();
}
float media_sal(float s, int f)
{
  float soma = 0;
  float media;
  
   soma += s;
   
   media = soma;
   return media;
}
float media_fi(float s, int f)
{
  int soma = 0;
  float media;
  
   soma += f;
   
   media = soma;
   return media;
}
int maior_salario(float s, int f)
{
int maior = 0;

  if(s > maior)
   {
     maior = s;    
     return maior;
   }    
      
}
float percento_salario(float s, int f)
{
float soma = 0;
int salario = 0;
float soma1 = 0;  
float p;  
  
  soma += s;
  
  if(s <= 350)
   {
     soma1 += s;    
   
     p = (soma1 * 100)/soma;
     return p;
   }    
  else
   {
     return 1;     
   }    
}









