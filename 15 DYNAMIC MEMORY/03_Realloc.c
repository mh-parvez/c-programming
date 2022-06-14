//🟢🔵🔴 realloc() : after useing malloc or calloc it is increase or decrease the size of memory or resize the memory

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, data, *ptr, *ptr2;

    printf("Enter the num of value : ");
    scanf("%d", &n);

    ptr = (int *)malloc(n * sizeof(int));

    printf("Enter the Value :\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", (ptr + i));
    }

    printf("\nUpdate size of data : ");
    scanf("%d", &data);

    if (data <= n)
    {
        printf("Please Provied %d Greter Size ", n);
    }
    else
    {
        ptr2 = (int *)realloc(ptr, n * sizeof(int));

        printf("Enter New %d Value : \n", data);
        for (int i = 0; i < data; i++)
        {
            scanf("%d", (ptr2 + i));
        }


        printf("\nOld Address : %d, New Address : %d\n", ptr, ptr2);

        printf("Print the Value : ");
        for (int i = 0; i < data; i++)
        {
            printf("%d ", *(ptr2 + i));
        }
    }

    free(ptr2);

    return 0;
}
