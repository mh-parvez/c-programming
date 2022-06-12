//🟢🔵🔴 String argument : 

#include<stdio.h>
#include<string.h>

char name(char name[])
{
    char geeting[10] = "Hello ! ";
    printf("Your name : %s", strcat(geeting,name)); 
}

void main()
{
    char student_name[30];
    printf("Enter Your Name : ");
    gets(student_name); //get input form the user, his name 

    name(student_name); //pass the student name
}





//🎯 Pass as a pointer string and multiple string 

#include<stdio.h>
#include<string.h>

char str (char*, char*); //or_ char str (char[], char[]);

char str(char *fname, char *lname) //or_ char str(char fname[], char lname[])
{
    char geeting[10] = "Hello !";

    //printf("%s %s %s", strcat(geeting, fname,lname)); // error cause of two many arguments. strcat() takes two arguments only

    printf("%s %s %s", geeting, fname, lname);
}


void main()
{
    char firstName[] = "Janant";
    char lastName[] = "Enuls"; 

    str(firstName, lastName); //passing firstname and lastname
}


