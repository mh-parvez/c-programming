//🟢🔵🔴 Nested if else ::

#include <stdio.h>
int main()
{
    //👊 Program new salary : 

    int age, salary;
    printf("Enter Your Age & Salary = ");
    scanf("%d %d", &age, &salary);

    if (age > 50)
    {
        if (salary < 60000)
        {
            salary += 3000;
        }
        else
        {
            salary += 2000;
        }
    }
    else
    {
        salary += 1000;
    }

    printf("Your New Salary = %i", salary);





    //👊 Program devided section A and B, Even = A, Odd = Sec B, No of Student = 100  

    int roll;
    printf("Enter Your Roll N0 : \n");
    scanf("%d", &roll);

    if (roll <= 100)
    {
        if (roll % 2 == 0)
        {
            printf("Sec A");
        }
        else
        {
            printf("Sec B");
        }
    }
    else
    {
        printf("Invaild roll number");
    }

    return 0;
}

// use can use maultiple nasted if condition