#include<stdio.h>

// Declear structure:
//------------------
struct student
{
    char name[20];
    int roll_no;
    float CGPA;
    // int CGPA; error
    // int roll_no = 10; error
};


//Declear variable/ obj of struc:
//-------------------------------

//Way01:: 
struct student
{
    char name[20];
    int roll_no;
    float CGPA;
};

int main()
{
    int a;
    struct student stu1;
    // struct student stu1, stu2, stu3;
    return 0;
}


//Way02::
struct student
{
    char name[20];
    int roll_no;
    float CGPA;
// }stu1;
}stu1, stu2; // two are here

int main()
{
    struct student stu3; // one is here
    return 0;
}



