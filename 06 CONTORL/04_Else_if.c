//🟢🔵🔴 Else if :: else not mendotroy

#include<stdio.h>

int main()
{
    int marks;
    printf("Enter Your Marks = ");
    scanf("%d", &marks);

 if (marks <= 100)
 {
    if(marks >= 80)
        printf("A +");
    else if(marks >= 70)
        printf("A gread");
    else if(marks >= 60)
        printf("A- gread");
    else if(marks >= 50)
        printf("B gread");
    else if(marks >= 40)
        printf("C gread");
    else
        printf("Your Fail");
 }
 else
 {
     printf("Enter Valid Marks !! (marks <= 100)");
 }
 
    
    return 0;
}

