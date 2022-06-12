
#include<stdio.h>

//🏆Fibonacci Sequence ::

int fib(int n)
{
    if( n == 0)
      return 0;

    if( n == 1)
      return 1;

    int fib_number_1 = fib(n - 1);
    int fib_number_2 = fib(n - 2);
    int fib_num = fib_number_1 + fib_number_2;

    return fib_num;
 
}

int main()
{
    printf("fib is : %d\n", fib(6));
}



//🏆Some Tricky : 
/*
void  count(int n)
{
    static int d = 1;
    printf(" %d ", n);
    printf(" %d ", d);

    d++;

    if(n > 1)
        count(n - 1);
    printf(" %d ", d);
}

int main()
{
    count(3);
    return 0;
}
*/