#include<stdio.h>
#include<conio.h>

main()
{ 
 float n1,n2,r,n3,media;
 int op;
 
 printf("Digite uma op��o");
 printf("\n1multiplica��o");
 printf("\n2divis�o");
 printf("\n3media\n");
 scanf("%d", &op);
 
 
      switch(op){
               
          case 1 : printf("Digite o primeiro numero:\n");
                   scanf("%f", &n1);
                   printf("Digite o segundo numero:\n");
                   scanf("%f", &n2);
                   
                   r = n1 * n2;
                   printf("resultado:%f", r);
                   break;
                   
         case 2 : printf("Digite o primeiro numero:\n");
                   scanf("%f", &n1);
                   printf("Digite o segundo numero:\n");
                   scanf("%f", &n2);
                   
                   r = n1 / n2;
                   printf("resultado:%f", r);
                   
                   if(n2 == 0){
                   printf("Erro : Divis�o por zero");
                   }
                   break;
                   
       case 3 : printf("Digite o primeiro numero:\n");
                scanf("%f", &n1);
                printf("Digite o segundo numero:\n");
                scanf("%f", &n2);
                printf("Digite o terceiro numero:\n");
                scanf("%f", &n3); 
                
                media = (n1 + n2 + n3)/3;
                printf("resultado:%f", media);
                break;
                
      default : printf("valor nao existe!");
                break;

}
getch();
return 0;
}
 
                
                
  
  
  
  
