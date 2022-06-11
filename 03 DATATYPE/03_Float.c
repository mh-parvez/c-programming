//🟢🔵🔴 Float data type :

#include <stdio.h>

void main()
{

    float f = 23.3434f;
    printf("\nthe float value is = %.3f", f);

    double d = 234.4565676;
    printf("\nthe double value is = %lf", d);

    long double ld = 34665.8463;
    printf("\nthe long double value is = %Lf \n\n", ld);

    float num = 45.5555;
    printf("The Number = %f\n", num);
    printf("The Number = %.4f\n", num); //last 4 degits
    printf("The Number = %.24f\n", num); //last 24 degits
    printf("The Number = %10.2f\n", num); // add space before of the value
    printf("The Number = %-10.2f OK \n", num); // add space after the value 
    
}