#include<stdio.h>
#include<conio.h>

int nadador(int);
main()
{int idade;
      
    printf("\nEntre coma idade do nadador:");
    scanf("%d",&idade);  
      
      
     if(nadador(idade)==0)
      {
        printf("\nCategoria:Infantil A  -> sua idade:%d",idade);                    
      } 
     if(nadador(idade)==1)
      {
        printf("\nCategoria:Infantil B  -> sua idade:%d",idade);                    
      } 
     if(nadador(idade)==2)
      {
        printf("\nCategoria:Juvenil A  -> sua idade:%d",idade);                    
      }  
     if(nadador(idade)==3)
      {
        printf("\nCategoria:Juvenil B  -> sua idade:%d",idade);                    
      }  
     if(nadador(idade)==4)
      {
        printf("\nCategoria:Adulto  -> sua idade:%d",idade);                    
      }  
      
      
      
      
          
printf("\n\n");     
getch();
}
int nadador(int id)
{
  
   if((id >= 5) && (id <= 7))
    {
      return 0;     
    }  
   if((id >= 8) && (id <= 10))
    {
      return 1;     
    }
   if((id >= 11) && (id <= 13))
    {
      return 2;     
    } 
   if((id >= 14) && (id <= 17))
    {
      return 3;     
    }  
   if(id >= 18)
    {
      return 4;     
    }  
    
}
