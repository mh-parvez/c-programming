#include<stdio.h>

struct student
{
    char name[20];
    int  roll_no;
    float avg_marks;
};

int main()
{
    struct student student[3];

    // student[0].name = "jaman";
    // student[0].roll_no = 20; 
    // student[0].avg_marks = 84.56; 

    for (int i = 0; i < 3; i++)
    {
        printf("Enter Studnet %d Information : \nName\nAge\nRoll\n",i);
        scanf("%s %d %f", student[i].name, &student[i].roll_no, &student[i].avg_marks); 
    }

    for (int i = 0; i < 3; i++)
    {
        printf("name : %s\troll : %d\tavg_marks : %.2f\n", student[i].name, student[i].roll_no, student[i].avg_marks); 
    }

  return 0;
}


