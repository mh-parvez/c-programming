#include<stdio.h>

int main()
{
    int sum = 0; 
    float avg;
    int marks[5];

    printf("Enter marks of Student \n");

    for (int i = 0; i < 5; i++)
    {
        scanf("%i", &marks[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        sum += marks[i];
    }

    avg = sum / 5;

    printf("The Sum = %i\n", sum);
    printf("The Avg = %.2f\n", avg);

    

    return 0;
}