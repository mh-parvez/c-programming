//🟢🔵🔴 Return Pointer : this funciton return a pointer and we can recive it in a pointer varibale.

#include<stdio.h>
int* returnPointer(int[]); // POINTER FUN

int* returnPointer(int base_add_of_arr[]) 
{
    return base_add_of_arr + 2; 
}

void main()
{
    int a[] = {1, 2, 3, 4, 5};     
    int *p = returnPointer(a);

    //a+= 2; //not allow, cause base add is constent.

    printf("a = %d", *p);
}





//🏆 Quiz :: Dry run it paper with pen, then check the output

#include<stdio.h>
int i = 0, j = 1;

void f(int* p, int* q)
{
     p = q; 
    *p = 2;
}

int main()
{
    f(&i, &j);
    printf("%d %d", i, j);

    return 0;
}



