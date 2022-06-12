//🟢🔵🔴 App Useing Function Pointer. 

#include<stdio.h>

void add(int a, int b){ printf(" 0 for Sum : %d", a + b);}
void sub(int a, int b){ printf(" 1 for Sub : %d", a - b);}
void mul(int a, int b){ printf(" 2 for Mul : %d", a * b);}
void div(int a, int b){ printf(" 3 for Div : %d", a / b);}

void main(){

    int choice, a, b;

    void (*fptr[])(int, int) = {add, sub, mul, div};

    printf(" 0 for Addition \n 1 for Subtraction \n 2 for Multiply \n 3 for Division \n");

    printf("Enter Operation Code : ");
    scanf("%d", &choice);
    if( choice >= 3)
    {
        printf("Enter  A & B value : ");
        scanf("%d %d", &a, &b);

        (*fptr[choice])(a, b);
    }
    else
    {
        printf("Invalid Opertor Number !!");
    }

}