#include<stdio.h>
#include<conio.h>

main()
{
int i,a[20];
int j,aux;
 
  for(i=0; i<20; i++){
    printf("\nEntre com o %do. vetor:",i+1);
    scanf("%d",&a[i]);    
  }    
  
  for(i=0; i<19; i++){
    for(j=i+1; j<20; j++){
       if(a[i] > a[j])  
        {
          aux = a[i];
          a[i] = a[j];
          a[j] = aux;
        }
      }
    }
    
  
 printf("\nOrdem Crescente\n");
  for(i=0; i<20; i++){
    printf("%d ", a[i]);
    }  
         
      
printf("\n\n");     
getch();
}
