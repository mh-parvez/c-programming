//🎯 Sum & Sub Two Matrix:

#include<stdio.h>

int main()
{

    int a_matrix[4][4];
    int b_matrix[4][4];
    int sum_matrix[4][4];
    int sub_matrix[4][4];
    int i, j;

    printf("Enter A Matrix:\n");
    for ( i = 0; i < 4; i++)
    {
        for ( j = 0; j < 4; j++)
        {
            scanf("%i", &a_matrix[i][j]);
        }
    }

    printf("Enter B Matrix:\n");
    for ( i = 0; i < 4; i++)
    {
        for ( j = 0; j < 4; j++)
        {
            scanf("%i", &b_matrix[i][j]);
        }  
    }

    printf("\n\n");
    printf("Matrix: A\n");
    for ( i = 0; i < 4; i++)
    {
        for ( j = 0; j < 4; j++)
        {
            printf("%i \t", b_matrix[i][j]);
        }
        printf("\n");  
    }

    printf("\n\n");
    printf("Matrix: B\n");
    for ( i = 0; i < 4; i++)
    {
        for ( j = 0; j < 4; j++)
        {
            printf("%i \t", a_matrix[i][j]);
        }
        printf("\n");  
    }


    printf("\nA + B = Matrix:\n");
    printf("---------------\n");
    for ( i = 0; i < 4; i++)
    {
        for ( j = 0; j < 4; j++){
            sum_matrix[i][j] = a_matrix[i][j] + b_matrix[i][j];
            printf("%d\t", sum_matrix[i][j]);
        }

        printf("\n");
    }

    printf("\n\n\n");

    printf("\nA - B = Matrix:\n");
    printf("---------------\n");
    for ( i = 0; i < 4; i++)
    {
        for ( j = 0; j < 4; j++){
            sub_matrix[i][j] = a_matrix[i][j] - b_matrix[i][j];
            printf("%d\t", sub_matrix[i][j]);
        }

        printf("\n");
    }

    printf("\n\n\n");

    return 0 ;
}