
#include<stdio.h>
#pragma pack(1) //Useing Pack

struct data
{
    //padding = 8 bytes, packing = 5 bytes
    // char a;
    // int  b;

    //padding = 12 bytes, packing = 6 bytes
    // char a;
    // int  b;
    // char c;

    //padding = 8 bytes, packing = 6 bytes
    char a;
    char c;
    int  b;

};

int main()
{
    struct data d;
    printf("%d", sizeof(d));
}