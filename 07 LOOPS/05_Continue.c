//🟢🔵🔴 Continue : continue the program and skip the value of condtion

#include<stdio.h>
int main()
{
    //🏆 Skip Grater 10 and Print the sum 

    int a, i, sum = 0;

    for( i = 0; i < 5; i++){
        printf("Enter a Number = ");
        scanf("%i", &a);

        if( a > 10 )
        continue;

        sum += a;

    }

    printf("Sum = %i", sum);

    return 0;
}

