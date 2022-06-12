//🟢🔵🔴 Dangling Pointer : 

#include<stdio.h>
#include<stdlib.h> //for malloc

int *f(){
    int a = 10; 
    return &a;
}

int main()
{
   
    int *ptr  = (int*)malloc(sizeof(int));
    *ptr = 10; 
    printf("%d\n", *ptr); 
    free(ptr);

    //printf("%d\n", *ptr); // dangling 👉 after freeing, it will be printed gerbej value, 
    
    ptr = NULL; //Slove this problem, useing null value.


    int *ptr = f();
    printf("%d\n", *ptr); // dangling 👉 and give error, because a value is vanished 

    int *ptr = NULL; 
        {
            int a = 10; 
            ptr = &a; 
            printf(" a = %d\n", *ptr);
        }
    printf(" a = %d\n", *ptr); // dangling 👉 not currect result, everytime


    return 0; 
}