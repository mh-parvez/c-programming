//🟢🔵🔴 Unaray Operator  :: 

//Comment previous increment, then you will get real ouput, or copy one by one program then run, i separte whole of the progrma useing line height. 

#include<stdio.h>

int main(){

    int a = 5;

    //post inceremnt 
    // a++;
    printf("Post Increment - %d\n", a);

    // pre inceremnt 
    // ++a;
    printf("Pre Increment - %d\n", a);



    int result = a + ++a + a++; // 6 + 6 + 6 = 18
    // int result = a + ++a + ++a + ++a; // 6 + 6 + 7 + 8 = 27
    // int result = a + a++ + a++;    // 6 + 5 + 6 = 17
    printf("A = %d\n", a);      
    printf("Result = %d\n", result);   



    // pre dicrement --a
    // post dicrement a--



    int x = 10, y;
    y = x++;
    printf("Y = %i \n", y); //10 assign y varibale then incremnt a++ 
    printf("X = %i \n", x); //11


    // int x = 10, y;
    // y = ++x;
    // printf("X = %i \n", x); //11
    // printf("Y = %i \n", y); // first of all incremnt ++x = 11, then assign y   


    // float x = 10.45, y;
    // y = ++x;
    // printf("X = %.2f \n", x); //11.45
    // printf("Y = %.2f \n", y); //11.45

    
    // int x = 10, y;
    // y = --x;
    // printf("X = %i \n", x); //9
    // printf("Y = %i \n", y); //9


    // float x = 10.45, y;
    // y = --x;
    // printf("X = %.2f \n", x); //9.45
    // printf("Y = %.2f \n", y); //9.45



    //😂 Time to Brain Wash 😁 : guess the output
    // int x_num, a = 5; 
    // x_num = ++a - --a +  a++; 
    // printf("X = %i", x_num);

    
    
    return 0;

}
