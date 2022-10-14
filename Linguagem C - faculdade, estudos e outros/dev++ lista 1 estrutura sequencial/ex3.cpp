#include<stdio.h>
#include<conio.h>
main()
{
 float n1,n2,n3, n4, media1,media2,mp;
 {
  printf("Peso 1!\n");
  printf("Digite a primeira nota:"); 
   scanf("%f", &n1);
  printf("Digite a segunda nota:");  
    scanf("%f", &n2); 
    
    media1=(n1+n2)/2;
   
   printf("A media:%f\n", media1); //\n espaço entre media 1 e peso2

}
    {
    printf("Peso 2!\n");
    printf("Digite o valor de n3 e n4:");
     scanf("%f %f", &n3, &n4);
     
       media2=(n3+n4)/2;
   
   printf("A media:%f", media2); 
   
}
      {
      mp=(media1 + media2);
      printf("media ponderada:%f", mp);
      }
getch();
return 0;
}
