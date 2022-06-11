//🟢🔵🔴 Bitwise. if you dont undustand this topics properly, dont worry. cause we not use it,all of the time

/*

⭕ 8 bit - char data type


AND Operation 
12 -> 0 0 0 0 1 1 0 0
25 -> 0 0 0 1 1 0 0 1
---------------------
&  -> 0 0 0 0 1 0 0 0   8(10)



OR Operation 
12 -> 0 0 0 0 1 1 0 0
25 -> 0 0 0 1 1 0 0 1
----------------------
|  -> 0 0 0 1 1 1 0 1  29(10)



XOR Operation 
12 -> 0 0 0 0 1 1 0 0
25 -> 0 0 0 1 1 0 0 1
---------------------
^  -> 0 0 0 1 0 1 0 1  21(10)



Complement Operator
25 ->  0 0 0 1 1 0 0 1
----------------------
~  ->  1 1 1 0 0 1 1 0 230(10)

👉Shorthand ~ = -( a + 1) = -a -> 2's Compliment   
              = -( 25 + 1) = -26 -> 2's Compliment



Right Shift : remove num right position 
212 -> 1 1 0 1 0 1 0 0
>>1 -> 0 1 1 0 1 0 1 0 - remove 0      => 106(10)
>>2 -> 0 0 1 1 0 1 0 1 - remove 0 0    => 53 (10) 
>>3 -> 0 0 0 1 1 0 1 0 - remove 1 0 0  => 26 (10)
👉Shorthand >> =  value / 2 * shift_num = 212 / 2 * 2 = 53




Left Shift : remove num left postion
212 -> 1 1 0 1 0 1 0 0
<<1 -> 1 remove - 1 0 1 0 1 0 0 0      => 168(10)
<<2 -> 1 1 remove - 0 1 0 1 0 0 0 0    => 60 (10)
<<3 -> 1 1 0 remove - 1 0 1 0 0 0 0 0  => 160(10) 
👉Shorthand >> =  value * 2 * shift_num = 212 * 2 * 1 = 

*/



#include<stdio.h>

int main()
{

    unsigned char a = 12;
    unsigned char b = 25;

    unsigned char c = a & b;
    printf("And Operation - %d\n", c);

    unsigned char d = a | b;
    printf("OR Operation - %d\n", d);

    unsigned char e = a ^ b;
    printf("XOR Operation %d\n", e);

    unsigned char f = ~25;
    printf("Compliment - %d\n\n", f);

    unsigned char rs1 = 212>>1;
    unsigned char rs2 = 212>>2;
    unsigned char rs3 = 212>>3;
  
    printf("Right Shift - 1 %d\n", rs1);
    printf("Right Shift - 2 %d\n", rs2);
    printf("Right Shift - 3 %d\n\n", rs3);


    unsigned char ls1 = 212<<1;
    unsigned char ls2 = 212<<2;
    unsigned char ls3 = 212<<3;
  
    printf("Left Shift - 1 %d\n", ls1);
    printf("Left Shift - 2 %d\n", ls2);
    printf("Left Shift - 3 %d\n", ls3);


    
}

