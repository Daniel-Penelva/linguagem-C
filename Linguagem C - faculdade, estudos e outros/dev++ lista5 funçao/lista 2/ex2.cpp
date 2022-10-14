#include<stdio.h> 
#include<conio.h>

float media_ponderada(float[], int[]); // ou n[], p[];
main()
{  int i, p[3];
   float n[3];
   
   for(i=0; i<3; i++){  
     printf("\n Entre com a %do. nota:",i+1);
     scanf("%f", &n[i]); 
     printf("\n Entre com o %do. peso:",i+1);
     scanf("%d", &p[i]);  
   }                                  
                                                                       //ou  => media = media_ponderada(n,p)
     printf("\n A Media ponderada = %.2f", media_ponderada(n,p));      // printf("media ponderada=%d", media);
    
 
      
getch();

}
float media_ponderada(float n[3], int p[3])
{ int i,soma =0;
  float soma1=0; 
  float media;
  
   for(i=0; i<3; i++){    
   soma += p[i];              // ou soma = p[0] + p[1] + p[2];
  
   soma1 +=(n[i] * p[i]);     // ou soma1 = (n[0] * p[0]) + (n[1] * p[1]) + (n[2] * p[2]); 
  } 
 
 media = soma1/soma;
  
 return media; 
           
}
