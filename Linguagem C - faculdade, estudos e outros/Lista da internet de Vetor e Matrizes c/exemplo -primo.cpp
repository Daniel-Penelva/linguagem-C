#include<stdio.h>
#include<conio.h>
main()
{
long number;
long counter;
int i;
   printf("nThis programs checks if a number is prime.");
   printf("nType the number: ");
   scanf("%ld", &number);
   
   counter = 0;
   
   for (i=1; i<=number; i++)
    if ((number % i )==0) counter=counter+1;
    if (counter==2)
      printf("%s %ld %s", "Number", number, "is prime.");
    else
      printf("%s %ld %s", "Number", number, "is not prime.");
getch();
}
