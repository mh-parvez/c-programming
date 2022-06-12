//🟢🔵🔴 Null Pointer : 

#include<stdio.h>

int main()
{
    // int *ptr1 = NULL; 
    // int *ptr2;
    // printf("%d\n", ptr1);
    // printf("%d\n", ptr2);


    // printf("%d\n", *ptr1); //program crushed...cause we are not set the value 
    // printf("%d\n", *ptr2); //program crushed...


    //👉
    int *ptr1 = NULL; 
    int *ptr2 = 0; 

    if(ptr1 == ptr2)
    {
        printf("Same\n");
        printf("%d\n", ptr1);
        printf("%d\n", ptr2);
    }



    return 0;
}