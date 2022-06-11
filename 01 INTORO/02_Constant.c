//🟢🔵🔴 Constant in C program :


#include <stdio.h>

// macros: Always use Uppercase (not nessesary) Don't use 👉 ; =  👈 in macro
#define ID 232342445 // Global Constant


int main()
{

    printf("ID NO : %i\n ", ID); //macro print  

    //🔅 Normal varibales : 
    //---------------------

    // int num = 100;
    // num = 999; //reassgin


    //🔅 Local const varibales: 
    //-------------------------
    const int const_num = 500; // Local Constant
            //num = 1999; //error - can't reassign this varibale, cause it is a constant
            
    printf("Const Number = %i\n", const_num);
    printf("Const Number = %d\n", const_num + 10); //you can add some number also


    int store_const_num = const_num; // store const in another varibale
    printf("New = %d\n", store_const_num + 100); 


    printf("Num = %f", (float)const_num); // allow type_casting

    return 0;
}


