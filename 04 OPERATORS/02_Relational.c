//🟢🔵🔴 Relational : return true or false

//Precidence : > < <= >= == != ! (left to right 👉)

#include<stdio.h>
#include<conio.h>
#include<stdbool.h>

void main()
{

    //👉Notice : uncomment one by one line, then check the output, otherwise it will give you error
    
    int jug;

    // jug = "a" == 'a'; 
    // jug = 0.45 != 0; 
    // jug = 0.45 == 0; 
    // jug = 0.45 == 0; 
    jug = '0'== 0; 

    printf(" The Boolean = %d", jug); 
   
    

    /*
    int a = 10 , b = 20, c = 30, d = 40,
    
    jug = a < b > c < d ;  // 1 
    jug = a < b == c < d;  // 1 == 1 => 1  
    jug = a < b != c < d;  // 1 != 1 => 0 
    jug = !(a < b != c < d);  // 1 != 1 => 1

    printf(" The Boolean = %d\n", jug); 
    */

    /*
    int a = 9, b = 20, c = 10; 

    printf("Is Equal = %d \n", a == b); // 0
    printf("Is Equal = %d \n", a != b); // 1
    printf("Is Greter = %d \n", a > b); // 0
    printf("Is Greter = %d \n", a >= b); // 1
    printf("Ans  = %d \n", a > b < c > a); // 0
    
    */
    
}

