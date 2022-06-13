#include<stdio.h>

// Initialization & Accessing:
//---------------------------

struct student
{
    char name[30];
    int roll_no;
    float avg_marks;
} student_04 = {"Kabir", 15, 90.9},
  student_05 = {"Jaman", 12, 79.9};

// we can also globally declear thus objects.


int main()
{
    struct student student_01 = {"Jenny", 20, 87.9};
    struct student student_02 = {"Jaman", 10, 89.9};
    
    // :: printing
    printf("\n\nname : %s\nRoll : %d\nAvg-marks : %.2f\n\n", student_01.name, student_01.roll_no, student_01.avg_marks);

    // :: single key diclear
    struct student student_03 = {"Akash"};

    printf("name : %s\nRoll : %d\nAvg-marks : %.2f\n\n", student_03.name, student_03.roll_no, student_03.avg_marks); // look this

    // :: single key
    printf("name : %s\n\n", student_03.name); // look this

    // :: after declear then initilization
    student_03.roll_no = 5;
    student_03.avg_marks = 88.4;

    printf("name : %s\nRoll : %d\nAvg-marks : %.2f\n\n", student_03.name, student_03.roll_no, student_03.avg_marks); // look this 

    // copying ::
    struct student student_06;
    student_06 = student_02;
    printf("name : %s\nRoll : %d\nAvg-marks : %.2f\n\n", student_06.name, student_06.roll_no, student_06.avg_marks);

    // At runtime:: 
    struct student student_07;
    printf("Enter name roll avgmarks : ");
    scanf("%s %i %f", student_07.name, &student_07. roll_no, &student_07.avg_marks);

    printf("name : %s\nRoll : %d\nAvg-marks : %.2f\n\n", student_07.name, student_07.roll_no, student_07.avg_marks);

    return 0;
}