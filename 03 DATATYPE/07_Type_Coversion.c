//🟢🔵🔴 Type Covertion : we can't convert small size data to large number of data. for example - (log log to int ), beacuse small data can't contain large type of data. here log log is 12 bytes but int is 2 bytes. But we can convert small data to large type of data.

#include<stdio.h>
#include<conio.h>

int main()
{
    int num = 444;
    float fnum2 =  44.445;

    printf("The Coverting Value (int to float) = %f \n", (float)num); 
    printf("The Coverting Value (int to char) = %c \n", (char)num);
    printf("The Coverting Value (float to int) = %i \n", (int)fnum2);


    // Implicit Type Conversion in C with Examples : autometic conversion
    char ch = 'T';
    printf("\n%c %d %o %x\n", ch, ch, ch, ch);

    int r = ch + 100;
    printf("The value = %d \n\n", r);

    
    float a = 4.5f;
    float b = 5.3f;
    float c = 6.2f;

    int result = a + b + c;
    printf("Total (No Conversion ) : %d\n", result);

    int result2 = (int)a + (int)b + (int)c;
    printf("Total (with Conversion) : %d \n ", result2);

   

    return 0;
}