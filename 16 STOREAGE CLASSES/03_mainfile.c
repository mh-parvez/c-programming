#include<stdio.h>
#include"03_includefile.c"

int x = 10; //only global veribale works in another file or program

extern void display();

void main()
{
    display();
}
  
