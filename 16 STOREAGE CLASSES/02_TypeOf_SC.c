/* 01_auto : 
============

  i. default value : gerbege value
 ii. scope : function / methods, block
iii. location : stack
 iv. life-time : within the funciton


#include<stdio.h>

auto int a = 10; //error, out of scoop

int main()
{
    auto int a = 10; 
    {
        auto int a; //gerbage value
        printf("> a (block) = %d\n", a);
    }
    printf("> a (funciton) = %d\n", a);

    return 0;
}

*/






/* 02_register : 
================

  i. default value : gerbege value
 ii. scope : function / methods, block
iii. location : CPU register
 iv. life-time : within the funciton

#include<stdio.h>

register int a = 10; //error, cause of scoop

int main()
{
    register int i; 
    int sum = 1;
    int *ptr = &i; // error, it's not a memory, So it's cann't store address

    register int *ptr = &sum; //allow

    for ( i = 1; i < 10; i++)
         sum *= i;
    printf("sum = %d\n", sum);

    printf("pointer = %d", *ptr);
    
    return 0;
}
*/






/* 03_static : 
================

  i. default value : 0
 ii. scope : function / methods, block
iii. location : static/RAM
 iv. life-time : till the end of the program

//🎯 Example_1 ::

#include<stdio.h>
void display();
static int id = 201387239; //global declear

void main()
{
    display();
    display();
    //printf("x = %d\n", x); - error, cause x not declear in this scope
}

void display()
{
    // int x; gerbege value
    static int x; // defalut = 0
    x+= 10;
    printf("x = %d\n", x); 
}



//🎯 Example_2 ::
#include<stdio.h>
void display();

void main()
{
    int i; 
    for( i = 0; i < 10; i++)
        display();
}

void display()
{
   static int x = 5;
   int y = 5; 
   x++;
   y++;
   printf("x = %d\n", x); // 6,7,8,9,10,11,12,13,14,15
   printf("y = %d\n", y); // 6,6,6,6,6,6,6,6,6,6
}

*/







/* 04_extran : 
================

  i. default value : 0
 ii. scope : global
iii. location : RAM
 iv. life-time : till the end of the program
*/

#include<stdio.h>
void fun1();
void fun2();

void main()
{
    extern int x;
    // int x; gerbage value
    printf("x = %d\n", x); //10
    fun1();
    fun2();
   
}

void fun1()
{
    int x = 1;
    x+= 5;
    printf("x = %d\n", x); //6
}

void fun2()
{
    int y = 4;
    y++;
    printf("y = %d\n", y); //5
}

int x = 10;



