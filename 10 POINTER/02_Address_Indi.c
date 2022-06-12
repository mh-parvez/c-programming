//🟢🔵🔴 Address ::

#include<stdio.h>

int main()
{
    int a = 20, b = 9;
    int *p = &a, *q = &b;

    // &a = p are same

    printf("Value of a = %d \n", a);
    printf("Value of a with pointer p = %d \n\n", *p);

    printf("Address of a = %x \n", &a);
    printf("Address of a = %x \n\n", p);

    printf("Address of a = %d \n", p);
    printf("Address of p = %x \n\n", &p);

    // Task:
    int c = *q;
    printf("Value of C = %i \n", c);

    *p = 30;
    printf("A = %d\n", a); 
    printf("P = %x\n", p);

    //Task - print whole of b and q 

    // We can store the some address on two pointer also.
    // p = &a, q = &b;
    
    return 0;
}

