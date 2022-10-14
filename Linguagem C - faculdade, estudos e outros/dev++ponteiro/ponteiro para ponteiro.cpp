#include<stdio.h>
#include<stdlib.h>

int main(void)
{

int x = 10;
int *pont1;  //pont1 vai armazenar o endereço de x
int **pont2;  //pont2 vai armazenar o endereço do pont1

  
//é ponteiro do tipo inteiro
  pont1 = &x;
  pont2 = &pont1;
  
  printf("\n valor:%d -> Endereço de x:%d",*pont1, &pont1);
                                                            //repare que na memoria a uma diferença de 4 bytes pq é do tipo inteiro o valor;
  printf("\n valor:%d -> Endereço de pont1:%d",**pont2, &pont2);
  
  
           
printf("\n\n");     
system("pause");
return 0;      
}
//http://www.youtube.com/watch?v=mKDRIH38S4k&list=PLBED943B869700355













