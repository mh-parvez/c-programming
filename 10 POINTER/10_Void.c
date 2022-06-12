//🟢🔵🔴 void pointer : void means nothing, but we can covert it to diffrent types pointer, in a void pointer

#include<stdio.h>

int main(){

    void *vp; 

    int   ip = 10; 
    float fp = 25.5; 
    char  cp = 'J'; 

    vp = &ip; 
    printf(" ip = %d\n", *(int*)vp);

    vp = &fp; 
    printf(" ip = %.2f\n", *(float*)vp);

    vp = &cp; 
    printf(" ip = %c\n", *(char*)vp);


    return 0; 
}