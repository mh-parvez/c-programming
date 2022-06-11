//🟢🔵🔴 Swap two number :

#include<stdio.h>

int main()
{

    // Data Swaping - way 1 : 
    // ------------------------

    int num1 = 10; 
    int num2 = 5; 
    int temp; 

    temp = num1; // temp = 5, num =  0
    num1 = num2; // num1 = 5, num2 = 0
    num2 = temp; // num2 = 10, num = 5

    printf("Num1 = %d\n", num1);
    printf("Num2 = %d\n", num2);



    // Data Swaping - way 2:
    //---------------------

    int a = 10;
    int b = 5;
     
    a = a - b; // 5
    b = a + b; // 10
    a = b - a; // 5
    
    printf("a = %i\n", a);
    printf("b = %i\n", b);

   return 0;

}