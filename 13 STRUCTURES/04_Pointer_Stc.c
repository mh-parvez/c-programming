#include<stdio.h>

struct student
{
    char name[20];
    int  roll_no;
    float avg_marks;
};

struct student s = {"jaman", 12, 78.5};

int main()
{
    struct student *ptr = &s;

    printf("Student Name : %s\n", s.name); // way 01
    printf("Student Name : %s\n", ptr -> name); // way 02
    printf("Student Name : %s\n",(*ptr).name); // way 03

    printf("Roll No : %i\n", ptr -> roll_no);
    printf("Avgerage Marks : %.2f\n", ptr -> avg_marks);

    return 0;
}