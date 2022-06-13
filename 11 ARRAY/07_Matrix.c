//01_Transpose of a Matrix: 

#include<stdio.h>
int main()
{

    int matrix[2][3], i, j;
    int the_transpose[3][3];

    printf("Enter the value of Matrix:\n");
    for ( i = 0; i < 2; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            scanf("%i", &matrix[i][j]);
        }
    }


    printf("\n");
    printf("The Matrix:\n");
    printf("-----------\n");

    for ( i = 0; i < 2; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            printf("%i \t", matrix[i][j]);
        }
        printf("\n");
    }  
    /*

    i = 0 1 
    j = 0 1 2 

    i,j

    0,0     0,1     0,2 
    1,0     1,1     1,2
    
    */

    printf("\n");
    printf("The Tranaspse form of Matrix:\n");
    printf("-----------\n");
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 2; j++)
        {
            printf("%i \t", matrix[j][i]);
            the_transpose[j][i] = matrix[j][i];
        }
        printf("\n");
    }

 
    /* 
    j = 0 1 
    i = 0 1 2
    
    j,i 

    0,0  0,1     
    1,0  1,2
    2,0  2,1    
    
    */
    // Store form another matrix
    printf("\n");
    printf("The Tranaspse Matrix:\n");
    printf("-----------\n");
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 2; j++)
        {
            printf("%i \t", the_transpose[j][i]);
        }
        printf("\n");
    }

    printf("\n\n");

    return 0; 

}