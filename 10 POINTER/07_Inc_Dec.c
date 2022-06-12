//🟢🔵🔴 Increment Decremnt : 

#include<stdio.h>
int main()
{

    int a[] = {3, 5, 7, 4, 1, 9};
    int *p; 
    p = a;

    // printf("value of a = %d\n", *p); 

    //Increment : 
    // printf("value of a = %d\n", *p++); // 3 
    // printf("value of a = %d\n", *p); // 5

    // printf("value of a = %d\n", *++p); // 5 
    // printf("value of a = %d\n", *p);  // 5

    // printf("value of a = %d %d\n", *p++, *p++);  
    // printf("value of a = %d %d\n", *++p, *p++); 

    

    //👉  *++p != ++*p 👉 pointer incement and value incement

    printf("value of a = %d\n", ++*p); // 3 + 1 = 4 ,change the value or incerment the value  
    printf("value of a = %d\n", *++p); //5 , incerement the pointer address
    

    //Decrement : same 



    return 0;
}