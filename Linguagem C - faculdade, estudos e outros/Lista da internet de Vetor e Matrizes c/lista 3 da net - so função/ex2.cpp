#include<stdio.h>
#include<conio.h>

float media(float[],char);
main()
{ int i;
  float nota[3];
  char letra;
  float MA, MP, MH;
      
    for(i=0; i<3; i++)
     {
       printf("Entre com a %do. nota do aluno:",i+1); 
       scanf("%f",&nota[i]);       
     } 
      
    printf("\n Entre com as opçoes(letra minuscula)");
    printf("\na = Media.Aritmetica \n p = Media.Ponderada \n h = Media.Harmonica \n R:");
    scanf("%c",&letra);  
      
      
    if(letra == a)
     {
       MA = media(nota,letra); 
       
       printf("\nA media aritmetica:%.2f",MA);       
     }
    if(letra == p)
     {
       MP = media(nota,letra); 
       
       printf("\nA media ponderada:%.2f",MP);       
     } 
 
    if(letra == h)
     {
       MH = media(nota,letra); 
       
       printf("\nA media harmonica:%.2f",MH);       
     } 
      

printf("\n\n");     
getch();
}
float media(float v[3],char l)
{ int i;
  float soma=0;
  float MA, MP, MH;
  
  
  if(l == a)
   {
     for(i=0; i<3; i++){
       soma +=v[i];
     }
     
    MA = soma/3;
    return MA;    
  }
  
  if(l == p) 
   {
     for(i=0; i<3; i++){
      
      MP =((v[0] * 5) + (v[1] * 3) + (v[2] * 2))/10;
      return MP;
     }  
    }      
      
    if(l == h)
    {
      for(i=0; i<3; i++){
       
        MH = 3/((1/v[0] + 1/v[1] + 1/v[2]));
        return MH;
      }
    }   
}  
