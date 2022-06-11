//🟢🔵🔴 A Nice & Useful Idea : there is no boolean data type in C program, but we can use it this way, fill like a boolean data type 😋😂 . We know that 1 = true and 0 = flase 

//Program : write a c program to check user login or not 

#include <stdio.h>
#define true 1

int main()
{

    int is_logged_in = true; // We can also use 0, 1;

    if (is_logged_in)
    {
        printf("User Logged In");
    }
    else
    {
        printf("User Logged Out");
    }

}