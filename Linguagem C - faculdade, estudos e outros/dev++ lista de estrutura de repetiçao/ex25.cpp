#include<stdio.h>
#include<conio.h>

main()
{ int i,idade,time, id_time=0;
  float peso, ps_time=0;
  float novo_peso,novo_id;
  float media;
  float MEDIA;
      
   
   printf("\n Entre com o numero do pais do time:");
   scanf("%d",&time);
   while(time <= 4)
    {
      for(i=0; i<3; i++){
        printf("\n Entre com a idade:");   
        scanf("%d", &idade); 
        printf("\n Entre com o peso:");   
        scanf("%f", &peso);   
      
      ps_time += peso;
      id_time +=idade;
      
      novo_peso = ps_time/3;
      
      novo_id = id_time/3;
      
      media = ps_time/peso;
      
      MEDIA = id_time/idade;
      
      printf("\n A media de peso de cada jogador:%.2f ", media);
      
      printf("\n A media de idade de cada jogador:%.2f ", MEDIA);
   } // FIM DO FOR
   
   printf("\n O peso media do time :%.2f ",novo_peso); 
      
   printf("\n A idade media do time :%.2f ",novo_id);   
      
 
  printf("\n Entre com o numero do pais do time:");
   scanf("%d", &time);
 } // FIM WHILE


getch();
return 0;
}  
