//🟢🔵🔴 02 types of input output in C program. 01. Formatted (here we use formate specifire)  02. Unformatted (without formate specifire).

#include <stdio.h>
#include <conio.h>

int main()
{

    //⭕Formatted Input, Output :
    //---------------------------

    //🔸Input:
    // int num1, num2;
    // printf("Enter Two Number = ");
    // scanf("%i %i", &num1, &num2);
    // printf("%i + %i = %i \n", num1, num2, num1 + num2);



    //🔸 Output:
    // float a = 123456;
    // printf("The Value = %36.2f Space \n\n", a);  // right space
    // printf("The Value = %-36.2f Space \n\n", a); //left space
    // printf("The Value = %036.2f  Space \n\n", a); //add zero in extra space
    


    //⭕ Unformatted input, output :
    //------------------------------

    //🔸input : They are use to get charcter input form the user. 4 types : 🔹 getchar()  🔹 getch()  🔹 getche()  🔹 gets()

    // char ch;
    // printf("Enter a Chacter = ");
    
    // ch = getchar();// Need two time enter_key
    // ch = getch();  // Need one time enter_key
    // getche();      // No Need to enter_key

    // printf("The Charcter Value  : %c ", ch);


    // char ch[30];
    // printf("Enter your name = ");
    // gets(ch);
    // printf("Student Name = %s",  ch);



    //🔸Output :

    /*
    char ch;
    printf("Enter a chacter : ");

    ch = getch();

    putchar(ch);
    putchar('\n'); //new line is also a chacter data type. 
    putchar('j');
    */


    /*
    char ch;
    printf("Enter a chacter : ");
    ch = getch();

    putch(ch);   
    putch('\n');
    putch('j');
    */


    char ch[30];
    puts("Enter a String : "); // Auto Genarate New Line - \n.
    gets(ch);
    puts(ch);
    

    return 0;


}