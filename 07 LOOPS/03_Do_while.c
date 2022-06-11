//🟢🔵🔴 Do While loop ::  lots of loops here uncomment one by one then cheak the output

#include<stdio.h>

int main()
{
    int i = 1;
    do
    {
        printf("%02i ", i); // %02i if we write this, that means we print like 👉 00 00 00 - 01 02 03  this
        i++;

    } while ( i <= 10);



    int j = 100;
    do
    {
        printf("\nFlase = %i ", j);
        j++;
    } while (0); // false, but its execute one time
    

    
    return 0;
}

