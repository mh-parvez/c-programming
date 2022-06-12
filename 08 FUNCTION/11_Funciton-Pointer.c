//🟢🔵🔴 Function Pointer : contain address of funciton, normal pointer contain address of a variable, here function pointer contain block of code (whole function code)

#include<stdio.h>

int sum(int a, int b)
{
    return a + b;
}



int main()
{
    int (*ptr)(int,int) = &sum; // also write = &sum

    // int sum_of_number = sum(100, 30); //normal funciton call
    int sum_of_number = (*ptr)(20,30);   //useing function pointer
    
    printf("The Sum = %i", sum_of_number);
}

