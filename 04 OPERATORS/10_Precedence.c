//🟢🔵🔴 Operator Percidence :

#include<stdio.h>
 
int main(){
    
    
    int a = 0, b = 1, c = -1, res;

    res = --a * (5 + b) / 2 - c++ * b;

    /* 

    🟢Operator Percidence : https://www.tutorialspoint.com/cprogramming/c_operators_precedence.htm 
     
    = --a * (5 + b) / 2 - c++ * b
    = --a * 6 / 2 - c++ * b
    =  -1 * 6 / 2 - (-1) * 1
    =  -6 / 2 + 1 * 1
    =  -6 / 2 + 1
    =  -3 + 1
    =  -2

    */

    printf(" result = %d", res);

 
    return 0;
 
} 