//🟢🔵🔴 Integer Data Type in C : Two types 1. signed 2. unsigned

#include <stdio.h>
#include <conio.h>

void main()
{

    //🎯Signed Interger Data:: means +5 , -5 value (neg,pos) value.

    //🟢 Short - %hi / %d :
    short a = 20;
    // short int a = 20; //also write
    printf("\n\nThe short integer data is = %hi", a);

    //🟢 int - %i / %d :
    int b = 250;
    printf("\n\nThe integer data is = %i", b);

    //🟢 long - %ld / %li
    long c = 207634L;
    printf("\n\nThe long integer data is = %li", c);

    //🟢 long long - %lli / %lld
    long long d = 20435345466LL;
    printf("\n\nThe Long Long integer data is = %lli", d);

    //🟢 Octal int - %o
    int oct = 0556;
    printf("\n\nI am Octal = %o", oct);

    //🟢 Hexdecimal - %x / %X
    int hex = 0XAFF;
    printf("\n\nI am hexadecimal = %x", hex);




    //🎯 Unsigned Interger Data:: means +5 value (pos) value -

    //🟢unsigned Short - %hu
    unsigned short ua = 20;
    printf("\n\n\n\nThe Unsigned short integer data is = %hu", ua);

    //🟢unsigned int - %u
    unsigned int ub = 250;
    printf("\n\nThe Unsigned integer data is = %u", ub);

    //🟢unsigned long - %lu
    unsigned long uc = 207634L;
    printf("\n\nThe Unsigned long integer data is = %lu", uc);

    //🟢unsigned long long - %llu
    unsigned long long ud = 20435345466LL;
    printf("\n\nThe Unsigned Long Long integer data is = %llu \n\n", ud);




    //☝ When we store negative value in (unsigned) posetive integer data.

    int num = -10;
    printf("negtive = %d \n", num);
    printf("posetive = %u \n", num);

    unsigned short negative = -2;
    printf("\nThe negtive value = %hu", negative);

    printf("\nsize of positive = %d bytes\n", sizeof(negative));

    
}

/*

unsigned short negative = -2;
printf("\n\nThe value = %hu", negative);
output : 65534

Short int - 16bit

0000000000000010 (2 binary from)
1111111111111101  1's compliment
              +1
1111111111111110 (-2 binary from)

1111111111111110 to decimal 65534

https://www.rapidtables.com/convert/number/binary-to-decimal.html

-2 (negative) value convert 2's compliment +2 , then it will store in memory. that's way we get positive value of -2 = 65534

*/
