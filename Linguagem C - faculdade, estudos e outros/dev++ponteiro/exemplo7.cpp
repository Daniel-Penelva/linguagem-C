#include<stdio.h>
#include<stdlib.h>

main()
{

int i;
int Vetor_teste[3]={1,2,3}; //vetor inicializa��o
int *ponteiro = 0;   

  ponteiro = &Vetor_teste[0];  // ou ponteiro = Vetor_teste; sempre aponta 1� para a posi��o zero;
  
  printf("\nO valor do endereco de memoria do vetor: %p",Vetor_teste); //imprimi o end de memoria do vetor, ou seja , do vetor zero 
  printf("\nO endere�o da memoria que esta no ponteiro: %p ",ponteiro);
  printf("\nO endere�o de memoria do ponteiro: %d ",&ponteiro);
  
printf("\n\n");

  for(i=0; i<3; i++){
   
   printf("O valor do %d indice do vetor %c: %p \n",i,130,&ponteiro[i]);     // � = printf("%c", 130) 
   printf("\nO valor do indice %d do vetor %c : %d \n\n",i,130,ponteiro[i]);

// printf("\nO valor do indice %d do vetor %c : %d \n\n",i,130,*(ponteiro + 1)); outra maneia de fazer...
 }    
      
      
         
      
printf("\n\n");
system("pause");
}
// link :http://www.youtube.com/watch?v=oB_6sMzo1eM&feature=relmfu
