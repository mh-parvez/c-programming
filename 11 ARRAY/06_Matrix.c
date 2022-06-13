//01_Program to Print 2D Array: (Matrix)

#include<stdio.h>

int main()
{

    int a[2][3], i, j, sum = 0; 

    //Read_

    printf("\n\nEnter Matrix : \n");

    for ( i = 0; i < 2; i++)
    {
        for ( j = 0; j < 3; j++)
        {
           scanf("%d", &a[i][j]);
        } 
    }

    // Print & Sum
        for ( i = 0; i < 2; i++)
    {
        printf("\n");
        for ( j = 0; j < 3; j++)
        {
           printf("%d \t", a[i][j]);
           sum += a[i][j];
        } 
        printf("\n");
    }
    printf("\n\nThe Sum Martix = %i ", sum);
    

    return 0;
}