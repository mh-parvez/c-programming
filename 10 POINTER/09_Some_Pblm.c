#include<stdio.h>
int main()
{

    int a[] = {2,3,13,45,6,8,92,7};
    int *p, *q;

    p = a; 

    // printf("value = %d\n", *p);
    // printf("value = %d %d %d\n", (*p)++, *p++, *++p); // 13 3 3
    // printf("value = %d\n", *p); //14

    *q = *p + 3;
    *q = *p - 3;
    printf("value = %d", *q);

    // printf("value = %d", *--p + 5);

    return 0;
}



//⭕ When we return multiple argument in a funciton :: Example

//👉 Write a function to calculate the sum, product, average of 2 number. Print that average in the main function.

#include<stdio.h>

void doWork (int a, int b, int *sum, int *prod, int *avg);

void doWork (int a, int b, int *sum, int *prod, int *avg)
{
    *sum  = a + b;
    *prod = a * b;
    *avg  = (a + b) / 2;
}


int main()
{
    int a = 5, b = 7; 
    int sum, prod, avg; 

    doWork(a, b, &sum, &prod, &avg);

    printf(" sum : %d, prod : %d, avg : %d", sum, prod, avg); // we change the value in another funciton. we pass the address and changed the value of thus variables

    return 0;
}
