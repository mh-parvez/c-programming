//🟢🔵🔴 If Else :: ture value and default value

#include <stdio.h>

int main()
{
    int age;
    printf("Enter Your Age = ");
    scanf("%i", &age);

    //Single_line :
    if (age >= 18 && age <= 30)
        printf("You are a voter\n");

    else
        printf("You are not eligable\n");




    //multiple_lien :
    if( age >= 18 && age <= 30)
    {
    printf("You are a voter\n");
    printf("age = %i\n", age);
    }
    else
    {
    printf("You are not eligable\n");
    printf("age = %i\n", age);
    }

    printf("Out of Condition");


    return 0;

}