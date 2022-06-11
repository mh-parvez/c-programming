#include<stdio.h>
int main()
{

    // int number;
    // printf("Enter a Octal Number = ");
    // scanf("%o", &number);
    // printf("The Decimal Number = %d\n", number);

    // int number;
    // printf("Enter a Decimal Number = ");
    // scanf("%d", &number);
    // printf("The Octal Number = %o", number);

    // %d to %x 
    // %x to %d 

    // %o to %x 
    // %x to %o

    int num;
    printf("Enter a Hex number = ");
    scanf("%x", &num);
    printf("The Octal value of this Hex number - %o", num);


    return 0;

}