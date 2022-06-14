//🟢🔵🔴 malloc() : 

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n, *ptr; 
    printf("Enter the num of value : ");
    scanf("%d", &n);

    ptr = (int*)malloc(n*sizeof(int));

    printf("Enter the Value :"); 
    for (int i = 0; i < n; i++)
    {
        scanf("%d", (ptr + i));
    }
    
    printf("Print the Value :"); 
    for (int i = 0; i < n; i++)
    {
        printf("%d ", *(ptr + i));
    }
    
    free(ptr);

    return 0;
}
