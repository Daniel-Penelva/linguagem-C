#include<stdio.h> 
#include<conio.h>

int maior_numero(int x[3])
{ int maior =0;
  int i;
  
  for(i=0; i<3; i++){
  if(x[i] > maior)
   {
     maior = x[i];         
   }    
 }
  return maior;  
}

main()
{ int i,numero[3],m;
   
  for(i=0; i<3; i++){ 
   printf("Digite o %do. numero inteiro:", i+1);
   scanf("%d", &numero[i]);
 }
 
    m = maior_numero(numero);  
    printf("\n Maior numero:%d",m);
     
getch();

}
