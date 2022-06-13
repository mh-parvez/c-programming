//🎯 Count the number of even and odd element ?

#include<stdio.h>
int main()
{

    int num[15] = {1,2,3,4,5,6,7,8,9,10,20};
    int even = 0, odd = 0; 
    int i;

    for ( i = 0; i < 10; i++)
    {
        if ( num[i] % 2 == 0){
            even++; 
        }
        else{
            odd++;
        }
    }

    printf("\nThe Even Num = %i", even);
    printf("\nThe ODD  Num = %i", odd);

    
    return 0;
}