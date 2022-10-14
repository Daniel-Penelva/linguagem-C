#include<stdio.h>
#include<stdlib.h>

main()
{

 int x,y,z=0;
 
  printf("\n**************************\n");
  printf("\n Expressão * x * y * z *");
  printf("\n**************************\n");
  
  x = y = 10;
  printf("\n* x=y=10 * z = %d * x = %d * y = %d ",z,x,y);
  
  printf("\n**************************\n");
  
  z = x++;  //  z = 10 | x =  11
  printf("\n* z = x++ * z = %d * x = %d * y = %d ",z,x,y);
  
  printf("\n**************************\n");
  x =- x;    // x = -11;
  printf("\n*  x -= x; * z = %d * x = %d * y = %d ",z,x,y);
  
  printf("\n**************************\n");
  y -= y;    // y = y-y  =>  y = 0;
  printf("\n*  y -= y * z = %d * x = %d * y = %d ",z,x,y);
  
  printf("\n**************************\n");
  z += z;    // z = z+z =>  z = 20;
  printf("\n*  z += z * z = %d * x = %d * y = %d ",z,x,y);
  
  printf("\n**************************\n");
  y++;      // y = 11
  printf("\n*  y++    * z = %d * x = %d * y = %d ",z,x,y);    
  
  printf("\n**************************\n");
  x = x+y-z--; // x = -30
  printf("\n* x = x+y-z-- * z = %d * x = %d * y = %d ",z,x,y);    
      
  printf("\n**************************\n");   
system("pause");
return 0;      
}
