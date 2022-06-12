//🟢🔵🔴 Funciton Definatiion ::

#include<stdio.h>

void sum(int, int); //way-02
// void sum(int x, int y); //way-01


//We Calling & Passing Agruments in our funciton :
int main()
{
    sum(5,7);
    int num1 = 10, num2 = 20;
    sum(num1, num2);
    sum(num1 + 3, num2 + 3);
    sum(num1 + 3, 3);

    return 0;
}

//Our Sum Function: 
void sum(int a, int b)
{
    int sum = 0;
    sum = a + b; 
    printf("sum = %d\n", sum); //return value here
}