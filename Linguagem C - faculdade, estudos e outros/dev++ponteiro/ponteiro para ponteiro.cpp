#include<stdio.h>
#include<stdlib.h>

int main(void)
{

int x = 10;
int *pont1;  //pont1 vai armazenar o endere�o de x
int **pont2;  //pont2 vai armazenar o endere�o do pont1

  
//� ponteiro do tipo inteiro
  pont1 = &x;
  pont2 = &pont1;
  
  printf("\n valor:%d -> Endere�o de x:%d",*pont1, &pont1);
                                                            //repare que na memoria a uma diferen�a de 4 bytes pq � do tipo inteiro o valor;
  printf("\n valor:%d -> Endere�o de pont1:%d",**pont2, &pont2);
  
  
           
printf("\n\n");     
system("pause");
return 0;      
}
//http://www.youtube.com/watch?v=mKDRIH38S4k&list=PLBED943B869700355













