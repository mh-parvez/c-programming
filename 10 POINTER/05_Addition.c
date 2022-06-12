//🟢🔵🔴 Pointer Addition

#include<stdio.h>

int main()
{

    int a[5] = {2, 3, 1, 5, 7};
    int *p = &a[0];

    printf("Value is : %d\n", *p);
    printf("Address  of Element : %u\n", p);

    p = p + 2;
    printf("Value is : %d\n", *p);
    printf("Address  of Element : %u\n", p);

    p++; // 5 
    *p = 50; // update element of array 
    printf("Value is : %d\n", *p);
    printf("Address  of Element : %u\n", p);
    

    return 0;
}