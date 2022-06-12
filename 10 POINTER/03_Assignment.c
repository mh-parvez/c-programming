//🟢🔵🔴 Assginment of Pointer : 

#include<stdio.h>

int main()
{
    // int a = 20, b = 15;
    // int *p, *q;

    float a = 20, b = 15;
    float *p, *q;
    
    p = &a;
    q = &b;

    // q = *p; error, poiter = value not allow 
    *q = *p; // value = value 

    // printf(" A = %d %d %d", a, *p, *q);
    printf(" A = %.2f %.2f %.2f", a, *p, *q);
    
    return 0;
}