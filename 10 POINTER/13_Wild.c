//🟢🔵🔴 Wild Pointer : 

#include<stdio.h>
#include<stdlib.h>

int main()
{
    
    // int *ptr; // wild pointer
    // printf("%d", *ptr); // gerbej value

    // solve probelm 
    // int *ptr = NULL; // way 1, useing null

    // int a = 10;
    // int *ptr = &a; // way 2, assign the address
    // printf("%d", *ptr);

    int *ptr = (int*)malloc(sizeof(int)); //way 3, useing dynamic memory allocation
        *ptr = 30;
    printf("%d", *ptr);


    return 0; 
}