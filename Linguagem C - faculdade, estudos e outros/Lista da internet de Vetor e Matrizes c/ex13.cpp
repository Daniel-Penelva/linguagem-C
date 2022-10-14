#include<stdio.h>
#include<conio.h>

main()
{
int i;
int a[20];
      
  for(i=0; i<20; i++){
    printf("\nEntre com o %do. vetor:",i+1);
    scanf("%d",&a[i]);    
  }        
      
  for(i=0; i<20; i++){ 
    if(a[i] < 0)  
      {
        a[i] = 0;      
      }
    }
      
  for(i=0; i<20; i++){
    printf("%d ",a[i]);
  }          
      
      
printf("\n\n");     
getch();
}
