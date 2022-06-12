//🟢🔵🔴 Introduction to the function, write a basic funciton.

#include<stdio.h>

void sum() // function difination
{
    int a, b, sum = 0;
    printf("Enter Two Number = ");
    scanf("%d %d", &a, &b);

    sum = a + b;
    printf("Sum = %d\n", sum);
}

int main()
{
    sum(); // funciton calling
    sum();
    return 0;
}

