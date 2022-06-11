//🟢🔵🔴 If  :: 

#include <stdio.h>
int main()
{

    int age;
    printf("Enter Your Age = ");
    scanf("%i", &age);

    //Sigle-line Statment ::

    if (age >= 18)
    {
        printf("You are a voter\n");
    }
    printf("Out of Condition");




    //Some Types of Statment ::

    // if (age >= 18)
    // if (!(age >= 18)) // reverse the condition, if we provied 0, then it will convert it 1. Otherwise all condtion
    // if (age = 20)     // reassign value, dosen't  metter its true or false
    if (age >= 18);  // execute the whole statement
    {
        printf("You can go.\n");
    }




    if (age >= 18 && age <= 30) // multiple condition
    {
        printf("You are a voter\n");
        printf("age = %i\n", age); // age alway's : 20
    }



    return 0;
}