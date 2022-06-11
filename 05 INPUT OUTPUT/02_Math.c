//🟢🔵🔴 Math Function : 

#include<stdio.h>
#include<math.h>
#define PI 3.1416

int main()
{


    //📚 Exmple - 1: Circle Area = PI * radius * radius  ::

     float radius, area;
     printf("Enter Radius = ");
     scanf("%f", &radius);

     area = PI * radius * radius ; 
     printf("The area of Circle is = %.2f", area);




    //📚 Exmple - 2 : Fahrenheit = ( celsius * 1.8 ) + 32 ::

    float c, f; 
    printf("\nEnter the Centrigrade = "); 
    scanf("%f", &c);

    f = (c * 1.8) + 32; 
    printf("The Fahrenheit = %.2f Deg", f);



    //📚 Exmple - 4: pre difine math function, before use it include the math.h file. Uncomment one by one line and check the output every line...


    // double result = abs(-23);
    // double result = abs(23);

    // double result = sqrt(23);
    // double result = sqrt(9);

    // double result = pow(9, 2);

    // double result = log(9); 

    // double result = log10(9);

    // double result = exp(9);

    // double result = sin(45);

    // double result = round(45.5);
    // double result = round(45.6);

    double result = ceil(45.6);

    // double result = floor(45.6);

    // double result = trunc(45.6);

    printf("\nThe value is = %.2lf\n", result);
    


    return 0;

}