#include<stdio.h>
#include<conio.h>

main()
{ int sal;
 float p, saldesconto; 
 
 printf("Digite o valor do salario:");
  scanf("%d", &sal);
  
  
  p = ((0,38%100) + (0,38%100));
  saldesconto=sal-p;
  printf("O valor descontado:%f", saldesconto);
  
  
getch();
return 0;
}  
