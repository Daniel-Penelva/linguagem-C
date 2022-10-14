#include<stdio.h>
#include<conio.h>

main()
{  int i,j;
   int A[2][3];
   int C[3][2];
   int soma[2][3];
      
  for(i=0; i<2; i++){     
    for(j=0; j<3; j++){
      printf("Digite  a matriz A da %d linha %d coluna:", i+1, j+1);
      scanf("%d", &A[i][j]);
    }
  }
  
  for(i=0; i<3; i++){     
    for(j=0; j<2; j++){
      printf("Digite  a matriz C da %d linha %d coluna:", i+1, j+1);
      scanf("%d", &C[i][j]);
    }
  }
  
printf("\n\n");
printf("\n valor da matriz A\n");
 
 for(i=0; i<2; i++){     
    for(j=0; j<3; j++){ 
     printf("%d  ", A[i][j]);
    }
     printf("\n");
  }   
 
     
printf("\n\n");
printf("\n valor da matriz C\n");
 
 for(i=0; i<3; i++){     
    for(j=0; j<2; j++){ 
     printf("%d  ", C[i][j]);
    }
     printf("\n");
  }   
       

 printf("\n\n");
printf("\n soma da matriz \n");
 
 for(i=0; i<2; i++){     
    for(j=0; j<3; j++){ 
    
    soma[i][j] = A[i][j] + C[i][j];
    
    printf("%d  ", soma[i][j]);
  }
    printf("\n");
 }  
      
         
      
getch();
return 0;
} 
