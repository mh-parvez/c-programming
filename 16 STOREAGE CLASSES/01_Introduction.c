/*
stroage :
--------
1_auto
2_register
3_static
4_external

classes :
--------- 
1_block  
2_scope  
3_life-time  
4_default value

where : 
-------
1_program
2_function / methods
3_block

memory_lear : 
-------------
1_code and text
2_static and global
3_stack
4_heap

*/

#include<stdio.h>
void fun();

int a = 30;

int main()
{
    int a = 10; fun();
    {
        int a = 20;
        // printf("inside the block a = %d\n",a);
    }
    {
        printf("inside the block but not declear just print a = %d\n", a++); 
    }
    printf("inside the main function a = %d\n", a);

    return 0;
}

void fun()
{
    int a = 40; 
    // printf("indside the outer function a = %d\n", a);
}