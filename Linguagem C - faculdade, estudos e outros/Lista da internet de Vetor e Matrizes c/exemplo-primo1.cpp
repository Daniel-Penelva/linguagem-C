#include <stdio.h>
#include <stdlib.h>
  
int main(){
 int num, nao_primo=0, divisoes=0, i;
      
 printf("Digite um numero inteiro: ");
 scanf("%d",&num);
 if ((num == 1) || (num % 2 == 0) && (num != 2))
    nao_primo = 1;
 else                    
    for(i = 1; (i <= num) && (divisoes <= 2); i += 2){
       if (num % i == 0)
          divisoes++;
    }     
 if ((nao_primo == 0) && (divisoes <= 2))
    printf("O numero %d eh primo!\n",num);
 else
    printf("O numero %d nao eh primo!\n",num);
 system("pause");
}
