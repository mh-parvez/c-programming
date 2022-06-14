//🟢🔵🔴 free() : //we know that, if any function define with static memory allocation, it will be free after returning, but now this time we define the memory dynamically, here the display funciton, we input the value and the main function we get the value, but the memory is not free... 


#include<stdio.h>
#include<stdlib.h>


int N;

int * display()
{
    int *ptr;
    ptr = (int*)malloc(N * sizeof(int));

    if(ptr == NULL)
        printf("Memory Not Allocated");
    
    printf("Enter The Number Of Value : \n");
        scanf("%d", &N);

    printf("Enter %d Value : \n", N);

    for (int i = 0; i < N; i++)
        scanf("%d", (ptr + i));

    return ptr;
    
}


int main()
{
    int *ptr = display();
    
    printf("The %d Value Are : \n", N);

    for (int i = 0; i < N; i++)
         printf("%d\t", *(ptr + i));

    
    free(ptr);

    return 0;
}







//🎯🎯🎯

int main()
{
    int n, *ptr; 
    printf("Enter the num of value : ");
    scanf("%d", &n);

    ptr = (int*)malloc(n * sizeof(int));

    if (ptr == NULL)
    {
        printf("Memory not allocated");
    } 

    printf("Enter the Value :"); 
    for (int i = 0; i < n; i++)
    {
        scanf("%d", (ptr + i));
    }

    free(ptr);  // after free the memory we cann't access the memory. if we do that, i will shoe undefind behivor.

    printf("Print the Value :"); 
    for (int i = 0; i < n; i++)
    {
        printf("%d ", *(ptr + i));
    }
    
    // free(ptr);

    return 0;
}
