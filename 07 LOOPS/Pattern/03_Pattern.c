
/*
        *
      * *
    * * *
  * * * *
* * * * *

*/


#include<stdio.h>
void main()
{
    int counter; 
    printf("Enter the value of row : ");
    scanf("%d", &counter);

    for (int i = 1; i <= counter ; i++)
    {
        for (int j = 1; j <= counter; j++)
        {
            if (( i+j) <= counter)
                printf(" ");
            else
                printf("0");  
        }
      printf("\n");
    }  
    
}



