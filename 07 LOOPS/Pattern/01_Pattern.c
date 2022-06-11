
/*
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5
*/

#include<stdio.h>

void main()
{
    int counter; 
    printf("Enter the value of row : ");
    scanf("%d", &counter);

    for (int i = 1; i <= counter; i++)
    {
        for (int j = 1; j <= i; j++)
            printf("%d ", j);
            printf("\n");

    }
}




/*
1
2 2
3 3 3
4 4 4 4
5 5 5 5 5
*/

void main()
{
    int counter; 
    printf("Enter the value of row : ");
    scanf("%d", &counter);

    for (int i = 1; i <= counter; i++)
    {
        for (int j = 1; j <= i; j++)
            printf("%d ", i);
            printf("\n");

    }
}


