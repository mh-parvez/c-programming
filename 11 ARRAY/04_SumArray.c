//🎯 Write a program to read two array of size 5 & store sum of these array into third array ? 

#include<stdio.h>

int main()
{
    int arr1[5], arr2[5], sum_array[5];
    int i; 

    printf("Enter Array -> 1 Elememt "); 
    for ( i = 0; i < 5; i++)
        scanf("%i", &arr1[i]);

    printf("Enter Array -> 2 Elememt "); 
    for ( i = 0; i < 5; i++)
        scanf("%i", &arr2[i]);
    
    for ( i = 0; i < 5; i++){
        sum_array[i] = arr1[i] + arr2[i];
        printf("\nindex of %i = %i", i, sum_array[i]);
    }

    return 0; 

}