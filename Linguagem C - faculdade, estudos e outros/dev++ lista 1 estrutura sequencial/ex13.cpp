#include<stdio.h>
#include<conio.h>

main()
{ float htrab,salmin,sal,saltotal,p,imposto,salrecebe;
      
  printf("\nDigite a hora de trabalho:");
   scanf("%f", &htrab);
  printf("\nDigite o valor do salario minimo:");
   scanf("%f", &salmin);
   
//letra (a)   
   sal= salmin / htrab;
   printf("\n salario:%f", sal);
   
   
//letra (b)
     saltotal=htrab*sal;
     printf("\nsalario bruto:%f", saltotal);
     
     
//letra (c)
   p=3%100;
   imposto=saltotal-p;
   printf("\nO imposto:%f", imposto);
   
   
//letra (d)
  salrecebe=saltotal-p;
  printf("\n o salario a receber:%f", salrecebe);
  
  
getch();
return 0;
}
   
   
   
