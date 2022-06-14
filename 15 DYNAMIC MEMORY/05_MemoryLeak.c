#include<stdio.h>
#include<stdlib.h>

void main()
{
    char ch = 1; 
    int *ptr;

    while (ch < 50)
    {
        printf("Memory Leak Demo\n");
        ptr = (int*)malloc(50000 * sizeof(int));
        
        printf("Press 1 for Continue : "); 
        scanf("%d", &ch);

        free(ptr);
    }
    
}

//Go task manager and show the result parctically 

