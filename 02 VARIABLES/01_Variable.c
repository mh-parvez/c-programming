//🟢🔵🔴 Varibale in C program : 

#include<stdio.h>
#include<conio.h>

void main()
{  
    // A = 23
    // int A; //error.....

    int num = 45;
    char alphabet = 'z';

    printf("Number + 5 = %d\n", num + 5);
    printf("Number - 5 = %d\n", num - 5);
    printf("Number * 5 = %d\n", num * 5);
    printf("Number / 5 = %d\n", num / 5);

    printf("Number = %d\n", num);

   int a = 30;
   int b = 40;
       b = 100; // Replace / Reassign
   
   printf("%d + %d = %d ", a, b, a+b);
   
   getch();

}


/*
🔴 Varibale name also called indentifier:
    float c; // Deciler 
    c = 23.45; // Assign / Initialized


🔴 Type:: Advaced topic, Cover it on storeage classes

👉 Scope 
👉 Local And Global Varibale
👉 Memory Life Time
👉 Static, Automatic
👉 External Variable


🔴 Reserved Keyword::

Pre define key of c libray. 32 keywords in C. Its cannot use identifier/varibale name. for example -
int if = 30;
int break = 40;



🔴 Naming::

int num__;
int __num__;
int n_um__;
int num2;
int num34__num22;
int num;

🔴 Case Sensetive::

NUM, num, Num -> not-same

*/