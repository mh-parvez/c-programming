//🟢🔵🔴 Problem set : 

#include<stdio.h>

// Question 01::
//-------------

int jumble(int x, int y)
{
    x = 2 * x + y;
    return x; 
}

int main()
{
    int x = 2, y = 5;
    y = jumble(y, x);
    x = jumble(y, x);
    printf("%d\n", x);

    return 0;
}



// Question 02::
//-------------

int incr(int i)
{
    static int count = 0; // i = 0, 1, 2, 3, 4 - recive thus value
    count = count + i; //count = 0 + 0 / 0 + 1 / 1 + 2 / 3 + 3 / 6 + 4 = 10
    
    return count;
}

int main()
{
    int i, j;
    for ( i = 0; i <= 4; i++)
        j = incr(i);

    // i = 0, 1, 2, 3, 4 
    // j = 0, 1, 2, 3, 4 - passing thus value

    printf("J = %d ", j);

    return 0;
}




// Question 03::
//-------------

void f(int *p, int m)
{
     m += 5; //15
    *p += m; // &i = 15 + 15 = 30
    return;
}

void main()
{
    int i = 15, j = 10; 
    f(&i, j);
    printf("Ans: %d", i + j); // 30 + 10 = 40
}


