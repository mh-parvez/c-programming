#include<stdio.h>

void display()
{
   extern int x;
   x++; //we can also modify this 
   printf("x %d", x);

}