#include<stdio.h>
main()
{
 float n1,n2,n3,media;
 
   printf("Digite a primeira nota:"); //primeiro valor
    scanf("%f", &n1);                 //obtem o valor fornecido de n1
   printf("Digite a segunda nota:");  //segundo valor
    scanf("%f", &n2);                 //obtem o valor fornecido de n2
    printf("Digite a terceira nota:");//terceiro valor
     scanf("%f", &n3);                //obtem o valor fornecido de n3
     
      media=(n1+n2+n3)/3;              // o valor das variaveis e seguido pelo valor numerico media 
      
   printf("A media:%f", media);   //vai imprimir o valor da media
 
}

