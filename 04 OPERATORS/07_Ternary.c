//🟢🔵🔴 Ternary Opreator: have three operand. Example : conditonal operator

#include<stdio.h>

void main(){

     //you can use scanf() also, to get the value of a and b

     int a = 33;
     int b = 325;
          
     int result = a > b ? 1 : 0;
     printf("The Result = %d\n", result);


     a > b ? printf("A is maximum") : printf("B is maximum");


}