
/*


* * * * *
* * * * 
* * * 
* * 
* 

1 2 3 4 5 
1 2 3 4  
1 2 3  
1 2  
1


5 5 5 5 5 
4 4 4 4 
3 3 3 
2 2 
1

*/

#include<stdio.h>

void main()
{
    int counter; 
    printf("Enter the value of row : ");
    scanf("%d", &counter);

    // way1::
    for (int i = 1; i <= counter; i++)
    {
        {
            // printf("* ");
            // printf("%d ", i);
            // printf("%d ", j);
        }
        // printf("\n");
    }



    //way2::
    for (int i = counter; i > 0 ; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            // printf("* ");
            // printf("%d ", i);
            // printf("%d ", j);
        }
        printf("\n");
    }

}



