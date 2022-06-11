//🟢🔵🔴 Artihmetic :  

#include<stdio.h>
#include<conio.h>

void main()
{
  
    printf("Arithmetic :: \n\n");

    printf("The ADD - %d\n", 5 + 10);
    printf("The SUB - %d\n", 5 - 10);
    printf("The MUl - %d\n", 5 * 10);
    printf("The DIV - %d\n", 15 / 10);
    printf("The MOD - %d\n", 12 % 10);


    float f_num = 23.34;
    //printf(" the ans = %f", f_num % 2); //👉 Show error bacause % operator only use int data type, not float data type.
    

    int a = 10, b, c, d;
    a = b = c = d ; // <-- right to left 
    // printf("The value = %i", a);


    int num1 = 20;
    int num2 = -11;
    //Print 1st Operentor Symbole .
    printf("\nResult = %i \n", num1 % num2); // 20 % 11 = 9
    printf("Result = %i \n", num1 % num2); // -20 % 11 = -9
    printf("Result = %i \n", num1 % num2); // 20 % -11 = 9

  
    
}