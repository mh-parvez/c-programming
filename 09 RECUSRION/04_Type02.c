//🟢🔵🔴 Recursion Type 02 : tail, non-tail : 

#include<stdio.h>

// 01 Tail:  no task after recursion
//--------- 
/*
void print(int a)
{
    if( a < 1) 
        return;
    else
        printf("%d ", a); // 10, 5, 2, 1
        print(a/2); 
        // no task here
}
int main()
{
    print(10);
    return 0;
}
*/




// 02 Non-Tail: task after recursion
//-------------

/*
void print(int a)
{
    if( a < 1) 
        return;
    else
        printf("%d ", a); // 10, 5, 2, 1
        print(a/2); 
        // task here
        printf("%d ", a); // 1, 2, 5, 10 
}
int main()
{
    print(10);
    return 0;
}

*/


// Example 02: non-tail

int print(int a)
{
    if(a < 1)
        return 0;
    else
        return 1 + print( a/2 );
}

void main()
{
    int x; 
    x = print(10);
    printf("X : %i", x); // 4
}
