//🟢🔵🔴 Assignment Operator  :: 


#include<stdio.h>
#include<conio.h>

void main()
{


    int a = 15;
    // a = a + 15;
    a += 15;
    printf("Output - %d\n", a);


    int b = 15;
    // b = b + 15;
    a -= 15;
    printf("Output - %d\n", b);


    int c = 15;
    // c = c * 15;
    c *= 15;
    printf("Output - %d\n", c);


    int d = 15;
    // d = d / 15;
    d /= 15;
    printf("Output - %d\n", d);


    int e = 16;
    // e = e + 15;
    e %= 15;
    printf("Output - %d\n", e);
  



    //😂 Time to Brain Wash 😁 : guess the output

    int a = 20, b = 10;

    a += (b + 5);  
    // printf("Number %i", a);

    a += a / (b + 5);  
    // printf("Number %i", a);


}