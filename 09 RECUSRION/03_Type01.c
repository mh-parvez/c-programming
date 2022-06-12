//🟢🔵🔴 Recursion Type 01 : Direct, Indirect

#include<stdio.h>

// 01. Direct: Call Inself Directly
//------------

// 1 + 2 + 3 + 4 + 5..... + n = sum 
/*

int sum(int x){

    int s = 0;
    if( x == 1)
      return x;
    s = x + sum(x - 1);
      return s;
}

void main(){
   int a = sum(10);
   printf("Sum : %d", a);
}

*/


// 02. Indirect: factorial number
//--------------

int f1(int);
int f2(int);

int f1(int n) // 5
{
    if(n <= 1) 
        return 1;
    else 
        return n * f2(n - 1); 
}

int f2(int n)
{
    if(n <= 1) 
        return 1;
    else 
        return n * f1(n - 1); 
}

void main()
{
    printf("%d", f1(3));
}

