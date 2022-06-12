//🟢🔵🔴 Call by value and Call by refercence ::

#include<stdio.h>


// Call_By_Value:: 
//----------------

void fun(int, int); 

void main()
{
    int x = 10, y = 20;
    fun(x,y);
    printf(" main - x = %d, y = %d\n", x, y);
}
void fun(int x, int y)
{
    x = 7;
    y = 9;
    printf(" fun - x = %d, y = %d\n", x, y); // value is not change here
}



// Call_By_Refrence:: 
/*

void fun(int *, int *); 

void fun(int * x, int * y) // 02 recived the address as a pointer
{
    *x = 7; //change the value directly 
    *y = 9;
    printf(" fun - x = %d, y = %d\n", *x, *y); // change value
}

void main()
{
    int x = 10, y = 20;
    fun(&x,&y); // 01 pass the address or refercence.
    printf(" main - x = %d, y = %d\n", x, y);
}

*/
