//🟢🔵🔴 Subtraction : distance between two pointer 

#include<stdio.h>

int main()
{

    int a[5] = {3, 4, 6, 7, 2};
    int *p = a;
    int *q = &a[3];

    // printf(" p - q  = %d \n", p - q); //distance between two array element
    // printf(" q - p  = %d \n", q - p);


    printf("The value of q = %d\n", *q); 

    q = q - 2; 
    printf("The value of q = %d\n", *q); // left 2 index postion

    p = p + 2; 
    printf("value of  p = %d \n", *p);  // move 2 index position

    printf("distance  (p to q) = %d \n", p - q); 

    return 0;
}