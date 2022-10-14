#include<stdio.h>
#include<conio.h>

main()
{ int i,idade;
  int infantil=0, infant=0, juvenil=0, juven=0, Senior=0;  

  
  for(i=0; i<15; i++){ 
    printf("\n Digite a idade do %do. nadador:", i+1);
    scanf("%d", &idade);   
      
    if((idade >= 5) && (idade <= 7)) 
      {
        infantil++;
        printf("\n nadador Infantil A:%d",infantil); 
        printf("\n\n"); 
      } 
      
     if((idade >= 8) && (idade <= 10)) 
      {
        infant++;
        printf("\n nadador Infantil B:%d",infant);
        printf("\n\n");        
      }  
      
      if((idade >= 11) && (idade <= 13)) 
      {
        juvenil++;
        printf("\n nadador juvenil A:%d",juvenil);
        printf("\n\n");    
      }  
      
      if((idade >= 14) && (idade <= 17)) 
      {
        juven++;
        printf("\n nadador juvenil B:%d",juven);
        printf("\n\n");        
      }  
      
      if(idade >= 18)
      {
        Senior++; 
        printf("\n nadador Senior:%d",Senior);
        printf("\n\n");     
      }  
  } 


 
       
getch();
return 0;
}  
