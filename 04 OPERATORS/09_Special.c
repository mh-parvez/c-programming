//🟢🔵🔴 comma : Yes !! Yessssss 👉 , is a operator

// Comma Operator, some time it is works like operator, sometime Separetor

// Operator :   
// a = 5,4; 
// a = (5,4);

//Separetor :
// int a,b,c;
// int a = 10, b = 20; 


#include<stdio.h>

int main()
{
    int a; 
    // int a = 4, 5; error (int a = 5 and  int 5), So It is invalid 

    a = 5,4; // '=' Higher priority 
    printf("a = %i\n", a); // 5


    a = (5,4); // () Higher priority 
    printf("a = %i\n", a); // 4



    a = (printf("parvez"), 2); 
    printf("%i \n", a); // parvez 2


    a = (printf("parvez"), 4,6,2,8); //(printf("parvez"), 4,6,2 rejcted, 8 assign in a
    printf("%i \n", a); // parvez 8



    //😂 Time to Brain Wash 😁 : guess the output

    /*
    int  a = 8, b;
    b = (a++ , ++a);
    b = a++ , ++a;
    b = (a++ , ++a, a >> 2); // a >> 2 = 10 / 2 * 2 = 2 

    printf(" A = %i and", a); // 10, 10, 10
    printf(" B = %i", b); // 10, 8, 2

    */

    return 0;
}



