//🟢🔵🔴 Introduction : 

#include<stdio.h>
#define N 6 //macros

int main()
{
    int a = 3; 
        a = 4;
        a = 0;
        a = 7;
        a = 1;
        a = 9;
    printf("%i", a);

    //❣ we can't use multiple data an one varibale, if we do this, it will be reassign the value, this is a pblem, we can solve this, help of the array.

    int roll_number[50];
    printf("\nThe Size of Array = %i", sizeof(roll_number));


    //🎯 Decleration:
    // int a[5];
    float b[3];
    char c[5];


    //👉 Not_Allow: 
    // int n, b;
    // int a[-5];
    // float b[n];
    // char c[b = 11/2];


    //👉 Allow:
    // int zero[0];
    // int arr[2+3];
    // int arr[2*3];
    // int arr[2/3];
    // int jum[N]; //macros





    //🎯 Initialization:


    //👉 01_At Complie Time:
    int a[5] = {1, 2, 11, -10, 15};
    int a[ ] = {1, 2, 11, -10, 15};
    int a[5] = {1, -10, 15}; //remaining value are 0
    // int a[5] = {1, 2, 11, -10, 15,13, 34}; //error
    int a[5] = {0};  //remaining value are 0
    // int a[5] = {};  //error
    // char a[5] = {'l', 'o', 'v', 'e'};
    // int a[]; //give gerbej value 
    // int a[3];
    //     a[0] = 1;
    //     a[1] = 2;
    //     a[2] = 3;



    // 👉 02_At Run Time:

    //Get value form the user -

    int arr[5]; 

    printf("Enter the Element of Array \n");
    for( int i = 0; i < 5; i++){
        scanf("%i", &arr[i]); 
    }


    // Print the value -  
    for( int i = 0; i < 5; i++)
    {
       printf("\n index of %i = %i \n", i, arr[i]);
    }
    printf("\n index a[3] = %i", arr[3]);



    // Print the value - Reverse Order
    for( int i = 4; i >= 0; i--)
    {
       printf("\n index of %i = %i \n", i, arr[i]);
    }


    return 0;

}
