//🟢🔵🔴 Callback function : 

#include<stdio.h>

int sum(int a, int b){ return a + b; }
int sub(int a, int b){ return a - b; }

int getvalue(int (*ptr)(int, int)){ (*ptr)(40, 50); } //getvalue, recive a funciton, here we set the value of thus funciton
 
int main(){

    printf("Sum = %d\n", getvalue(&sum));
    printf("Sub = %d\n", getvalue(&sub));

    return 0;
 
} 
