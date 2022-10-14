#include<stdio.h>
#include<conio.h>

main()
{
int a[10], b[10], soma[10];
int i;
 
  for(i=0; i<10; i++){
    printf("\nEntre com o %do. vetor:",i+1);
    scanf("%d",&a[i]);    
  }
  
  for(i=0; i<10; i++){
    printf("\nEntre com o [%d] vetor:",i+1);
    scanf("%d",&b[i]);    
  }   
      
  for(i=0; i<10; i++){
    soma[i] = a[i] + b[i];
  }    
      
printf("\n\n"); 

   for(i=0; i<10; i++){
     printf("%d ",soma[i]);
   }    
      
   
printf("\n\n");     
getch();
}
