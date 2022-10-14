#include<stdio.h>
#include<conio.h>

main()
{ int i,j;
  int vetorA[10], vetorB[10];
  int uniao[20], u=0;
  
      
  for(i=0; i<10; i++){
   printf("\n Digite o vetorA:");
   scanf("%d", &vetorA[i]);
   printf("\n Digite o vetorB:");
   scanf("%d", &vetorB[i]);
 }   
      
  for(i=0; i<10; i++){
   j=0;
     while(j<u && vetorA[i] != uniao[j])
       {
         j++;    
       } 
        if(j>=u)
         {
           uniao[u] = vetorA[i];
           u++;       
         }  
   }//fim for
   
   for(i=0; i<10; i++){
    j=0;
     while(j<u && vetorB[i] != uniao[j])
      {
        j++;         
      }
       if(j>=u)
        {
          uniao[u] = vetorB[i];
          u++;       
        }
   }  
   
  printf("\nA uniao dos vetores\n\n"); 
   for(i=0; i<u; i++){   
     printf("%d ", uniao[i]);
  }     


getch();

} // fim
