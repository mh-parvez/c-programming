//🟢🔵🔴 Pointer is one type of variable, it is contain address of any varibale, funciton, base address of array, and string

#include<stdio.h>

int main()
{
    // Datatype * pointer_name

    int * p; //it means pointer contain integer type of data address
    float * p;

    //Pointer Declier & Initailization: 
    
    int a = 10;
    float b = 25.5;
    
    int * p;
    p = &a;

    //p = &b; //error its int poiner but varibale is float

    int * p = &a;
    int a = 10, * p = &a;

    int a, * p = &a;

    return 0;
}

