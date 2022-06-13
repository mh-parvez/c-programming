
#include<stdio.h>
#pragma pack(1) //Useing Pack

typedef struct student_data
{
    char name[20];
    int roll;
    char section;

}data;


int main()
{
    // data studnet = { "kabir" , 56, 'C'};
    data studnet = { .roll = 56, .section = 'D', .name = "jaman"}; // no need to maintain order
    printf("%s %d %c", studnet.name, studnet.roll, studnet.section);
}
