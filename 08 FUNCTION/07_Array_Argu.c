//🟢🔵🔴 Array argument : 

#include<stdio.h>

int avg( int[], int);

int avg(int marks[], int size)
{
    int i, sum = 0;
    
    for( i = 0; i < size ; i++)
    {
        sum += marks[i];
    }

    printf("Size of Inside avg() = %i\n", sizeof(marks)); //we pass base-address(marks[0]) here, that way it's size 4 bytes.

    return sum / size;
}


int main()
{
    int marks[5] = {10,30,40,15,35};
    int size = sizeof(marks) / sizeof(int); //count size or lenght of the array

    int average = avg(marks, size); //passing the array and size 

    printf("Average = %d\n", average);
    printf("Size of Inside main() = %i\n", sizeof(marks));
                                                
    return 0;
}

