//🟢🔵🔴 Switch_Case ::

/* 
👉 Can't use float value switch case statment.
👉 We can right down defult statement anywere in switch block, not mendotry its write it last.
👉 Default is not medotory.
👉 Expression (match with) case value --> (then) block statment will be execute.
*/


#include<stdio.h>
int main()
{
  
    //How to write expression : 
    int a, b = 10; 
    printf("Enter a = ");
    scanf("%d", &a);

    switch (a)
    // switch (a + 1)
    // switch (a + b)
    // switch (a / 2)
    // switch (5 + 3)
    // switch ('c')
    // switch (5)
    {
    case 1 : printf("Have a nice day");
        break;
    case 2 : printf("Welcome");
        break; 
    default: printf("Enter vaild Number");
    }

   


    //⭕ Vowel Consonent Checker : 
    
    char ch;
    printf("Enter a Alphabet = "); 
    scanf("%c", &ch);

    switch(tolower(ch))
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            printf("Vowel");
            break;
        default : printf(" Not Vowel");

    }




   //⭕ Simple Caluclator : Enter Opertor = + or - or * or /. It will match, then we write the case value 

   int a,b, result;
   char operator; 

   printf("Enter a Operator ");
   scanf("%c", &operator);

   printf("Enter Two Equation = ");
   scanf("%i %i", &a, &b);
   
   switch(operator)
   {
       case '+' :result = a + b;
                printf("Sum = %i", result);
                break;
       case '-' :result = a - b;
                printf("Sub = %i", result);
                break;
       case '/' :result = a / b;
                printf("Div = %i", result);
                break;
       case '*' :result = a * b;
                printf("Mul = %i", result);
                break;
       default : printf("Enter Valid Operator");
   }



    return 0;
}




