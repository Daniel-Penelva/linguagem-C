#include<stdio.h>
#include<conio.h>

main()
{ float htrab,hextras,salmin,htrab1,hextra1,salrecebe;
      
  printf("\nDigite a hora de trabalho:");
   scanf("%f", &htrab);
  printf("\nDigite o numero de horas extras:");
   scanf("%f", &hextras);
  printf("\nDigite o valor do salario minimo:");
   scanf("%f", &salmin);
   
//letra(a)
  htrab1=htrab+(1/8*(salmin));
  printf("A hora de trabalho:%f\n", htrab1);
  

//letra(b)
  hextra1=hextras+(1/4*(salmin));
  printf("A hora de trabalho extra:%f\n", hextra1);
  
  
//letrs(c)
  salrecebe= (htrab*htrab1)+(hextras*hextra1);
   printf("O salario a receber:%f\n", salrecebe);
   
   
getch();
return 0;
}
 
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
