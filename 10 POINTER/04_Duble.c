//🟢🔵🔴 Double Pointer : 

#include<stdio.h>

int main()
{
    //Pointer to Pointer (Dobule Pointer):
    
    int a = 20;
    int *p = &a;
    int **q = &p;
    // int **q = &a; //error, cause the role of chaining
    int ***r = &q;
   
    
    //change the value 
    *p  = 150;  
    **q = 450; 
    // *q = 450; error, beacuse its duble pointer   
    ***r = 930; 

    printf(" a = %d \n", a);
    printf(" a = %d \n", *p);
    printf(" a = %d \n", **q);
    printf(" a = %d \n", ***r);

    printf("Address of q = %x, %x \n", r, &q);
    printf("Address of p = %x, %x \n", q, &p);
    
    return 0;
}