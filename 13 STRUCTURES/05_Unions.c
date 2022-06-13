#include<stdio.h>

union abc
{
   int   a; 
   char  b;
   float c;
};


int main()
{
    union abc u;
    u.a = 34;
    u.b = 't';
    u.c = 78.5;

    printf("A = %i\n",u.a);
    printf("B = %c\n",u.b);
    printf("C = %.2f\n",u.c);

    union abc *ptr = &u;
    
    printf("A = %i\n",ptr -> a);
    printf("B = %c\n",ptr -> b);
    printf("C = %.2f\n",ptr -> c);

    return 0;
}