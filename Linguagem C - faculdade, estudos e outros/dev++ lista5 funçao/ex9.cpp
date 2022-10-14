#include<stdio.h> 
#include<conio.h>

float media_art(float[],int);
main()
{float nota[3];
 int n,i;
      
  for(i=0; i<3; i++){ 
    printf("\n Entre com a %do. nota:",i+1);    
    scanf("%f",&nota[i]);
  }    
 
printf("\n\n");     
  printf("\n Entre com o numero 1 ou 2:");
  scanf("%d",&n);
      
   if(n==1)
    {
      printf("Media Artimetica:%.2f",media_art(nota,n));                       
    }
   
   if(n==2)
    {
      printf("Media Ponderada:%.2f",media_art(nota,n));                       
    }
   
      
getch();

}
float media_art(float nota[3],int numero)
{float media,soma=0;
 int i;
    
  if(numero == 1)    
  {
   for(i=0; i<3; i++){ 
       
     soma += nota[i];   
   }
   
   media = soma/3;
    
   return media;
 } // fim if
   
 if(numero == 2)    
  {   
   for(i=0; i<3; i++){ 
    
    media = ((nota[0] * 1) + (nota[1] * 3) + (nota[2] * 2))/6;
    }
  
   return media;
  }// fim if
}//fim função
