
#include<stdio.h>

typedef struct student_information
{
    char name[20];
    int roll;
    char section;

}information;

 
int main(){
    
    information student1 = { "jaman", 213, 'A'};

    printf(" Name :  %s\n", student1.name);
    printf(" Roll :  %i\n", student1.roll);
    printf(" Sec  :  %c\n", student1.section);

    return 0;
} 


