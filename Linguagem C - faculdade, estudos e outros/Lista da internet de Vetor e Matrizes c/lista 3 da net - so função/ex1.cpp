#include<stdio.h>
#include<stdlib.h>
#include<math.h>

float volume(int x)
{   
      
  return 4/3* M_PI * pow(x,3);    
}


main()
{ 
   int raio;
   
   
   printf("\n Entre com o raio:");
   scanf("%d",&raio);
   
printf("\n\n");
 
  printf("O volume da esfera: %.2f ",volume(raio));
 
 
 
 
 
 


printf("\n\n");     
      
system ("PAUSE");
return 0;
}      
 
