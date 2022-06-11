//🟢🔵🔴 Introduciton to the datatype

// All Data Type Base On Thus Data Type ::
// Number : int, float
// Text : char
// Boolean : there is no data type in c program
// Custom type : array, union, struc

#include<stdio.h>

int main()
{
    int   num1 = 200;
    float num2 = 250.45;
    char  ch   = 'A';

    printf("\n\nInteger value = %d \n\n", num1 );

    printf("Float value = %f \n", num2 );
    printf("Float value = %.2f \n\n", num2 );

    printf("Charcter value = %c \n", ch );
    printf("Charcter value = %d \n\n", ch );

    printf("ASCII value of %c = %d \n\n", ch , ch);

    printf("Integer Size = %i bytes\n", sizeof(int));
    printf("Floate Size = %i bytes\n", sizeof(float));
    printf("Char Size = %i bytes\n\n", sizeof(char));

    //practice your own, and check the size of diffent data_types

    return 0;
}
