//🟢🔵🔴 Funciton Decleration ::
/*
funciton decleartion == function definition (same)

Maintain the Serial ::

Error: 
01_funciton decleartion (suppose not write this)
02_funciton calling 
03_function definition

Not_Error:
01_funciton decleartion
02_function definition
03_funciton calling 

or,

01_function definition
02_funciton calling 

*/


#include<stdio.h>

void sum(void); // funciton decleartion,always writedown the type of argument, here void means nothing.

char fun(); //always declear out of the function its better.

int main()
{
    // char fun(); //inner decleration.

    char c; 
    c = fun(); 
    printf("= %c\n", c);

    sum(); // funciton calling. 
    // sum(4,5); // when we pass argument.  

    return 0;
}


char fun()
{
    char c;
    printf("Enter a Charcter = "); 
    scanf("%c", &c); 
    return c;
}


void sum() // function definition
{
    int a, b, sum = 0; 
    printf("Enter Two Number = "); 
    scanf("%d %d", &a, &b); 
    sum = a + b; 
    printf("Sum = %d\n", sum);
}


