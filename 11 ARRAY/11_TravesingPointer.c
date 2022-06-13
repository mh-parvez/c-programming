//🎯 Traversing Array Useing  Pointer 

#include<stdio.h>
int main()
{
    int num[5], i;

    int *numptr = &num[0];
    // int *numptr = num;

    printf("Enter The Numbers : \n");
    for (i = 0; i < 5; i++)
    {
        printf("%d index : ", i);
        scanf("%d ", (numptr + i));
    }
    

    printf("The Numbers are : ");
    for (int i = 0; i < 5; i++)
        printf("%d ", *(numptr + i));
    
    return 0;
}

